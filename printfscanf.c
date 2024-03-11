#include "stdio.h"

int main(void)
{
    // 주석을 다는 방법

    /*
     * 이렇게 범위 주석도 가능
     */

    // (정수형) 변수 할당
    int age = 29;
    printf("%d\n", age);

    // 변수 값 변경
    age = 30;
    printf("%d\n", age);

    // (실수형) 변수 할당 float or double
    float weight = 80.37f;
    printf("%f\n", weight);

    // 소수점 자릿수 변경하기
    double weight2 = 80.37;
    printf("%.2lf\n", weight2);

    printf("hello!\n");

    // 상수! (주로 대문자로 할당)
    const int YEAR = 1995;  // 태어난 년도
    printf("%d\n", YEAR);

    // YEAR = 2000; // 재할당은 컴파일 오류!

    // 연산과 printf
    int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d x %d = %d\n", 3, 7, 3 * 7);

    // scanf
    int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input);
    printf("입력값 : %d\n", input);

    // 여러개 입력받기
    int one, two, three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 입력값 : %d\n", one);
    printf("두번째 입력값 : %d\n", two);
    printf("세번째 입력값 : %d\n", three);

    // 문자 (한 글자)
    char c = 'A';
    printf("%c", c);

    char str[256];
    printf("문자열을 입력하세요 : ");
    scanf("%s", str, sizeof(str));
    printf("입력 받은 문자열 : %s", str);

    return 0;
}
