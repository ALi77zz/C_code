//
// Created by lipc on 2023/7/19.
//
#include <stdio.h>

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int i = 1 , j = 1;
    while(i < 4)
    {
        j = 1;
        while(j < 4)
        {
            printf("%c", c);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}