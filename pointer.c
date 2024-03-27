//
// Created by shinholy on 3/27/24.
//
#include "stdio.h"

int main() {

    // 변수 선언
    int a;
    // 변수에 값 할당
    a = 3;

    // 포인터 선언
    int *po;
    // 포인터에 메모리 주소 할당 (변수 a에 대한 값이 들어있는 메모리 주소)
    po = &a;

    printf("a = %d\n", a);
    printf("po = %d\n", po);
}