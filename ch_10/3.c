#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define SLEEP_HALF_SEC() Sleep(500)
#else
#include <unistd.h>
#define SLEEP_HALF_SEC() usleep(500000)
#endif

#define CLEAR "\033[H\033[J" /* move cursor home + clear screen */
#define RESET "\033[0m"
#define WHITE "\033[97m"
#define RED "\033[91m"
#define YELLOW "\033[93m"
#define CYAN "\033[96m"
#define GRAY "\033[90m"

#define ROWS 7

/* ---- rocket body (same in every frame) ---- */
#define BODY0 ""
#define BODY1 " | \\_____________"
#define BODY2 " |  |            `-."
#define BODY3 "=|==|  (O)  (O)     >"
#define BODY4 " |  |____________.-'"
#define BODY5 " | /"
#define BODY6 " |/"

/* ---- two flame shapes, 6 columns wide, so the flame flickers ---- */
static const char *rocket[2][ROWS] = {
    {"      " BODY0, "      " BODY1, "    ~ " BODY2, " ~~~**" BODY3,
     "    ~ " BODY4, "      " BODY5, "      " BODY6},

    {"      " BODY0, "      " BODY1, "  ~~~ " BODY2, "~~~~~*" BODY3,
     "  ~~~ " BODY4, "      " BODY5, "      " BODY6}};

/* ---- explosion: 4 frames, 7 rows each ---- */
static const char *boom[4][ROWS] = {
    {"", "", "        \\|/", "       --*--", "        /|\\", "", ""},

    {"         |", "    \\    |    /", "      \\  |  /", "  ------(*)------",
     "      /  |  \\", "    /    |    \\", "         |"},

    {"*      . | .      *", "  .  \\   |   /  .", "   *   \\ | /   *",
     "*--- ---(*)--- ---*", "   *   / | \\   *", "  .  /   |   \\  .",
     "*      . | .      *"},

    {"  .         .   ", "       ,        ", ".          '   .",
     "     .  ..  .   ", "  '        ,    ", "       .      . ",
     "   .       .    "}};

static const char *boom_color[4] = {YELLOW, YELLOW, RED, GRAY};

/* colors for the rocket: flame red/yellow, windows cyan, nose red, body white
 */
static const char *rocket_color(char c) {
    if (c == '~')
        return RED;
    if (c == '*')
        return YELLOW;
    if (c == '(' || c == 'O' || c == ')')
        return CYAN;
    if (c == '>')
        return RED;
    return WHITE;
}

/* Draw one frame shifted right by 'offset' columns, then wait 0.5 sec.
   color == NULL means "color each character like the rocket". */
static void draw(const char *frame[], int offset, const char *color) {
    printf(CLEAR "\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%*s", offset, "");
        for (const char *p = frame[i]; *p; p++)
            printf("%s%c", color ? color : rocket_color(*p), *p);
        printf(RESET "\n");
    }
    fflush(stdout);
    SLEEP_HALF_SEC();
}

int main(void) {
    int end_pos = 40;
    int n = 0;

    /* fly left -> right, flickering the flame every frame */
    for (int pos = 0; pos <= end_pos; pos += 2, n++)
        draw(rocket[n % 2], pos, NULL);

    /* explode roughly where the middle of the rocket is */
    for (int i = 0; i < 4; i++)
        draw(boom[i], end_pos + 7, boom_color[i]);

    printf("\n");
    return 0;
}
