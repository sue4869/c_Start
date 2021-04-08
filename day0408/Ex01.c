#include <stdio.h> // #include 명령어를 이용해 다양한 라이브러리를 불러온다. 
// stdio.h 가 여러 기능을 제공 

int main(void) {  // 메인함수,--> 항상 0을 반환하는 것이 일반적
	printf("Hello World\n"); // printf() : stdio.h 헤더파일에 포함되어 있다. 
	system("pause"); // system() 함수를 이용해 운영체제의 기본적인 기능을 이용할 수 있다
					 // 명령프롬프트에서 pause명령어는 키보드를 입력하기 전까지 대기하는 기능
	return 0;
}