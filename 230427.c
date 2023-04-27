#include <stdio.h>

int main()
{
    int age; // 4byte 정수형 변수 age를 선언한다.
    double pi;
    printf("나이를 입력해주세요: ");
    scanf("%d", &age);
    printf("원주율은 얼마인가요?: ");
    scanf("%lf", &pi);
    // printf("나이와 원주율을 함께 입력해주세요: ");
    // scanf("%d %lf", &age, &pi);
    printf("나이는: %d, 원주율 %.2lf", age, pi);
}

// float pi1; -> f를 써야 됨 4byte
// double pi2; -> lf를 써야 됨 8byte
