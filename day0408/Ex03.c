#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;
	scanf("%1f", &a);
	printf("%.2f\n", a); // �Ҽ��� ��°¥������ ��µ�. �Ҽ��� ��°�ڸ����� �ݿø���
	system("pause");

	int b, c;
	scanf("%d %d", &b, &c);
	printf("%d %d \n", c, b);
	system("pause");
	return 0;
}