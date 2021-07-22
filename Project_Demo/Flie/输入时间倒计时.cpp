#include<stdio.h>
#include<Windows.h>

int main() {
	int x;
	int i;
	printf("请输入时间，单位s\n");
	scanf_s("%lu", &x);
	for (size_t i = x; i > 0; i--)
	{	
		Sleep(1000);
		printf("%d\n", i);
	}
	Sleep(1000);
	system("CLS");
	printf("倒计时结束,再见\n");
	return 0;
}