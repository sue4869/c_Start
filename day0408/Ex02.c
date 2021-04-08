#include <stdio.h>

int a; // 정적 변수 : main함수 밖에 선언된 변수 
       // 기본적으로 0으로 값이 초기화

// 정적변수가 아닌 수는 일일이 값을 넣어줘야 한다. 
int main(void) {
    printf("The number is %d.\n", a);
    system("pause");
    return 0;
}