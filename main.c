#include <stdio.h>

int main(int argc, char *argv[]) {
    int year;

    scanf("%i", &year);

    printf("%i\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    return 0;
}