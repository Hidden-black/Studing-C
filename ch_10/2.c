#include <stdio.h>
#include <unistd.h>
#define SLEEP_HALF_SEC() usleep(500000)

int main() {
    printf("\n\n\n");
    printf("Launch Function Activated.\n\n\n");

    printf("Launching Nuke in 10");
    for (int bur = 10; bur > 0; bur--) {
        sleep(1);
        printf("\rLaunching Nuke in 0%d", bur - 1);
        fflush(stdout);
    }
    printf("\n\nLauched!\n");
    sleep(1);
}
