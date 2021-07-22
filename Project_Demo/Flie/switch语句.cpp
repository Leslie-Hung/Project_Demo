#include<stdio.h>
#include<stdio.h>
int main() {
	int x;
	printf("猜数字游戏！！！");
	printf("请输入数字。。。");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1:
		printf("perfect！！！");
		break;
	case 2:
		printf("大了大了");
		break;
	case 3:
		printf("小了小了");
		break;
	default:
		break;
	}
}