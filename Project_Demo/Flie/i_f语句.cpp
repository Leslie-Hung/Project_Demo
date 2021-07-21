#include<stdio.h>
int main()
{
	int i, x, y, z;
	printf("请输入一个数字\n");
	scanf_s("%d", &i);
	//i = 2;
	if (i < 1) {
		x = ++i;
		y = x * 256;
		z = y / 4;
	}else {
		x = --i;
		y = x * 128;
		z = y / 2;
	}
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%d\n", z);
	return 0;
}