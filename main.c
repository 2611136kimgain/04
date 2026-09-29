#include <stdio.h>

int main(int argc, char *argv[]) {
    int time;
    int hour, minute, second;

    scanf("%i", &time);

    hour = time / 3600;
    minute = (time % 3600) / 60;
    second = time % 60;

    printf("The time for %i second is %i : %i : %i\n",
           time, hour, minute, second);

    return 0;
}