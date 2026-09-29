#include <stdio.h>

int main(int argc, char *argv[]) {
    int time;
    int minute, second;

    scanf("%i", &time);

    minute = time / 60;
    second = time % 60;

    printf("the time is %i:%i\n", minute, second);

    return 0;
}