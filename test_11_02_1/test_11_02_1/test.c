#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long long int Fac(long long int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main()
{
	long long int n = 0;
	scanf("%lld", &n);
	long long int ret = Fac(n);
	printf("%lld\n", ret);
	return 0;
}