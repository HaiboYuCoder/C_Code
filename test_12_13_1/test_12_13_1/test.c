#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);

	int t1, p1, a;
	int t2, p2, b;
	int t3, p3, c;
	scanf("%d %d", &t1, &p1);
	scanf("%d %d", &t2, &p2);
	scanf("%d %d", &t3, &p3);

	if (n % t1 != 0) {
		a = (n / t1 + 1) * p1;
	}
	else {
		a = (n / t1) * p1;
	}
	if (n % t2 != 0) {
		b = (n / t2 + 1) * p2;
	}
	else {
		b = (n / t2) * p2;
	}
	if (n % t3 != 0) {
		c = (n / t3 + 1) * p3;
	}
	else {
		c = (n / t3) * p3;
	}
	long ans = 10000;
	if (a < ans) {
		ans = a;
	}
	if (b < ans) {
		ans = b;
	}
	if (c < ans) {
		ans = c;
	}

	printf("%d", ans);

	return 0;
}
