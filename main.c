#include <stdio.h>

int main(int argc, char *argv[]) {
    int num;
    int count = 0;

    scanf("%i", &num);

    while (num > 0) {
        count += num % 2;
        num = num / 2;
    }

    printf("the result is : %i\n", count);

    return 0;
}