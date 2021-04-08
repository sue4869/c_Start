#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;
	scanf("%1f", &a);
	printf("%.2f\n", a); // 소숫점 둘째짜리까지 출력됨. 소숫점 셋째자리에서 반올림됨
	system("pause");

	int b, c;
	scanf("%d %d", &b, &c);
	printf("%d %d \n", c, b);
	system("pause");
	return 0;
}