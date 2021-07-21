#include<stdio.h>
int main()
{
	int i, x, y, z;
	printf("请输入一个数字\n");
	scanf_s("%d", &i);
	//i = 2;
	x = i++;
	y = i * 256;
	z = y / 4;
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%d\n", z);
	return 0;
}