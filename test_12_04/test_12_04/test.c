#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d%d", &n, &m);
    //设max是最大公约数
    int max = n>m?m:n;
    //设min是最小公倍数
    int min = n>m?n:m;
    while(1)
    {
        if(m%max==0 && n%max ==0)
        {
            break;
        }
        max--;
    }
    while(1)
    {
        if(min%m == 0 && min%n==0)
        {
            break;
        }
        min++;
    }
    printf("%d\n", max+min);

    return 0;
}


*/






int main()
{
    long long n = 0;
    long long m = 0;
    long long k = 0;
    scanf("%lld %lld", &n, &m);
    long long a = n;
    long long b = m;
    while (k = a % b)
    {
        a = b;
        b = k;
    }
    printf("%lld\n", b + m * n / b);

    return 0;
}