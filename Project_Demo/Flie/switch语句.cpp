#include<stdio.h>
#include<stdio.h>
int main() {
	int x;
	printf("猜数字游戏！！！");
	printf("请输入数字。。。");
	
	switch (x)
	{
	case 1:
		printf("1");
		scanf_s("%lu", &x);
		break;
	case 2:
		printf("2");
		scanf_s("%lu", &x);
		break;
	case 3:
		printf("3");
		scanf_s("%lu", &x);
		break;
	}
}