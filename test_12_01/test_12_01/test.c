#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char* my_strcpy(char* dst, const char* src)
{
    char* cp = dst;
    while (*cp++ = *src++);
    return(dst);
}

int main()
{
    int arr1[3] = {0};
    int arr2[3] = { 1,2,3 };
    my_strcpy(arr1, arr2);
    for (int i = 0; i <= 2; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}