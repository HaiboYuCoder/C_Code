#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF)
    {
        int i = 1;
        while (i <= a)
        {
            printf("*");
            i++;
        }
        if (i > a)
            printf("\n");

    }
    return 0;
}