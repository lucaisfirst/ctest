#include <stdio.h>

// // 예제1
// int main()
// {
//     int num = 68;
//     printf("%c", num);
// }

// 예제2
int main()
{
    int num = 0.75;
    int num2 = 1.75;
    // printf("%d", num + num2);
    printf("%.2lf", num + 1.8);
}

// C는 ASCII 코드를 따라서 Char를 %c로 출력하면 숫자에 따른 기호가 나온다.
// 예제2는 int(정수형)는 정수부만 기억하기 때문에 출력값에서 소수부는 무시된다.
// 5강에서 int로 변수 선언했을 때 저장되는 방식을 바탕으로 출력값을 예측하는 것과, 소수부 같은 것들이 어떻게 출력되는지 확인 함.