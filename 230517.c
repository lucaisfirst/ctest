#include <stdio.h>

//// 예제1
// int main()
// {
//     char a = 64;
//     printf("%d", a + 64);
// }

//// 예제2
int main()
{
    char a = 64;
    a = a + 64;
    printf("%d", a);
}
// 각 데이터 타이별 byte에 따라서 유효숫자 범위를 고려해야 한다.
// 예제1은 정상으로 나온다. 왜냐하면 컴퓨터에 임시저장 메모리가 있는데 4byte에서 처리를 하기 때문이다.
// 하지만 예제2는 기존의 char의 1byte에서 값을 찾아서 나오므로 오버플로우되어 나온다.

// 오늘은 C언어에서의 기본적인 자료형에 대해서 배웠고, 오버플로우/언더플로우, 형변환 기초 개념과 2진법, 16진법 등 공부함.