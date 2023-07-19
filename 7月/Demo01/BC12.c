//
// Created by lipc on 2023/7/19.
//
#include <stdio.h>

int main()
{
    long No;
    float c, math, english;
    scanf("%ld;%f,%f,%f", &No, &c, &math, &english);

    printf("The each subject score of No. %ld is %.2f, %.2f, %.2f.", No, c, math, english);

    return 0;
}