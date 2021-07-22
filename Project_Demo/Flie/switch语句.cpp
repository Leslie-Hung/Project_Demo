#include<stdio.h>
#include<stdio.h>
int main() {
	int x;
	printf("猜数字游戏！！！");
	printf("请输入数字。。。");
	scanf_s("%lu", &x);
	switch (x)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	}
}