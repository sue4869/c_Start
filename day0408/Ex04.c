
#define _CRT_SECURE_NO_WARNINGS

// c�� scanf�� ó�� ���ۿ� ���� ���ϰ� �Ǿ��ֱ⿡ ���� ���� ����� �Ѵ�. 
#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);//& : Ư���� ������ �ּҸ� �ǹ� --> scanf()�� ���
	printf("�Է��� ���ڴ� %d�Դϴ�. \n", a);
	system("pause");
	return 0;
}