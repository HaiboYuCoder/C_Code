#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int a;
    while (~scanf("%d", &a)) {
        if (a >= 140)
            printf("Genius");
    }
}