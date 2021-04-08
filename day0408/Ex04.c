
#define _CRT_SECURE_NO_WARNINGS

// c는 scanf를 처음 시작에 쓰지 못하게 되어있기에 위에 것을 써줘야 한다. 
#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);//& : 특정한 변수의 주소를 의미 --> scanf()에 상요
	printf("입력한 숫자는 %d입니다. \n", a);
	system("pause");
	return 0;
}