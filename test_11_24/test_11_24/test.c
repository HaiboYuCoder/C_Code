#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Print(int a,int n)
{
    int b = n;
    for (int j = 1; j <= 2 * (a - (b - 1)); j++)
    {
        printf(" ");
    }
    for (int i = 1; i <= b; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int a = 0;
    while ((scanf("%d", &a)) != EOF)
    {
        int n = 0;
        for (n = 1; n <= (2 * a + 1); n++)
        {
            if (n <= (a + 1))
            {
                Print(a,n);
            }
            if (n > (a + 1))
            {
                Print(a,2 * (a + 1) - n);
            }
        }
    }
    return 0;
}