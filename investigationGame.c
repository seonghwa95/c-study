// 호구 조사 게임
// 이름, 성별, 나이, 키, 몸무게, 저지른 범죄를 질문받아 조사지 작성하기
#include "stdio.h"

 int main(void)
{
    printf("지금부터 묻는 말에 단답형으로만 대답해\n");
    printf("~입니다. or ~요 다 생략해\n\n");

    char name[256];
    printf("이름? ");
    scanf("%s", name, sizeof(name));

    char gender[256];
    printf("성별? ");
    scanf("%s", gender, sizeof(gender));

    int age;
    printf("나이? ");
    scanf("%d", &age);

    float height;
    printf("키? ");
    scanf("%f", &height);

    float weight;
    printf("몸무게? ");
    scanf("%f", &weight);

    char criminal[256];
    printf("뭔 잘못했어? ");
    scanf("%s", criminal, sizeof(criminal));

    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf("이름\t\t:    %s\n", name);
    printf("성별\t\t:    %s\n", gender);
    printf("키\t\t:    %.1f\n", height);
    printf("몸무게\t:    %.1f\n", weight);
    printf("범죄\t\t:    %s\n", criminal);

    return 0;
}