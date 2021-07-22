#include<stdio.h>
#include<Windows.h>
int main() {
	int i;
	for (size_t i = 5; i > 00; i--)
	{
		Sleep(1000);
		printf("%d\n", i);
	}
	Sleep(1000);
	printf("goodbye\n");
	for (size_t i = 0; i < 5; i++)
	{
		Sleep(1000);
		printf("%d\n", i);
	}
	return 0;
}