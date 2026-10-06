#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define SLEEP_HALF_SEC() usleep(500000)
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_RED "\x1b[31m"

int main() {
    printf("\n\n\n");
    printf("Launch Function Activated.\n\n\n");
    printf("System checks");
    sleep(1);
    printf("\rSystem checks" ANSI_COLOR_GREEN "[PASSED]\n" ANSI_COLOR_RESET);
    printf("Fuel checks");
    sleep(1);
    printf("\rFuel checks" ANSI_COLOR_GREEN "[PASSED]\n" ANSI_COLOR_RESET);
    printf("\tPerforming POST run checks");
    sleep(1);
    printf("\rPerforming POST run checks\t" ANSI_COLOR_GREEN
           "[PASSED]\n" ANSI_COLOR_RESET);
    printf("Finding Target Location");
    sleep(1);
    printf("\rFinding Target Location\t" ANSI_COLOR_RED
           "[FAILED]\n" ANSI_COLOR_RESET);
    printf("\rRetrying Finding Target Location\t" ANSI_COLOR_GREEN
           "[PASSED]\n" ANSI_COLOR_RESET);
    printf("Launching Nuke in 10");

    sleep(1);
    for (int bur = 10; bur > 0; bur--) {
        sleep(1);
        printf("\rLaunching Nuke in 0%d", bur - 1);
        fflush(stdout);
    }
    printf("\n\nLauched!\n");
    sleep(1);
    char rock[] =
        "\n            ░░                                \n            ██▒▒██  "
        "                          \n    ░░░░░░  ██▒▒▒▒▓▓                      "
        "    \n    ▒▒▓▓▓▓░░██▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██    \n  ▒▒░░▒▒▓▓▓▓    "
        "                  ▒▒▒▒▒▒▒▒██  \n  "
        "▓▓▒▒▒▒▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒██  \n    ▓▓▓▓▓▓  "
        "██▓▓▒▒▓▓░░░░░░░░░░░░░░░░░░░░░░    \n            ██▒▒▒▒░░              "
        "            \n            ██▒▒                              \n";

    printf("%s", rock);
    for (int i = 0; i < 4; i++) {
        printf("\r\t%s", rock);
        sleep(1);
    }

    sleep(2);

    srand(time(NULL));
    int kids = (rand() % 9000) + 1000;
    printf(ANSI_COLOR_RED "TARGET ELIMINATED SUCCESSFULLY! \t" ANSI_COLOR_GREEN
                          "%d KIDS ELIMINATED" ANSI_COLOR_RESET,
           kids);
    sleep(1);
    printf("\n\n" ANSI_COLOR_GREEN "+%d goy credits\n" ANSI_COLOR_RESET,
           (rand() % 900) + 100);

    printf("\nוְאָהַבְתָּ לְרֵעֲךָ כָּמוֹךָ\n\n");
    sleep(100);
}
