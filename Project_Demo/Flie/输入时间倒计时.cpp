#include<stdio.h>
#include<Windows.h>

int main() {
	int x;
	int i;
	printf("������ʱ�䣬��λs\n");
	scanf_s("%lu", &x);
	for (size_t i = x; i > 0; i--)
	{	
		Sleep(1000);
		system("CLS");
		printf("%d\n", i);
	}
	Sleep(1000);
	system("CLS");
	printf("����ʱ����,�ټ�\n");
	return 0;
}