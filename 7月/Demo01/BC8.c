//
// Created by lipc on 2023/7/19.
//
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    printf("  %c\n", c);
    printf(" %c%c%c\n", c, c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf(" %c%c%c\n", c, c, c);
    printf("  %c", c);

    return 0;
}