#include <stdio.h>
#define TEXT "고려대에 합격하자!"

int add(int a, int b)
{
    return a + b;
}

int main()
{
    printf("%d\n", add(3, 5));
    printf(TEXT);
    return 0;
}