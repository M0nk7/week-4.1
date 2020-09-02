#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c, max, min;
    scanf("%d", &a);
    max = a;
    min = a;
    scanf("%d", &b);
    if (b > max)            max = b;
    else if (b < min)    min = b;
    scanf("%d", &c);
    if (c > max)            max = c;
    else if (c < min)    min = c;

    printf("%d", a + b + c - max - min);
    return 0;
}