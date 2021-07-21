#include<stdio.h>
#include<Windows.h>

int main(){
	int i, x, y, z;								//创建变量
	printf("请输入一个数字\n");
	scanf_s("%d", &i);							//输入变量i的数值
	//i = 2;
	x = i++;									//变量数值计算式2
	y = i * 256;								//变量数值计算式2
	z = y / 4;									//变量数值计算式2
	printf("计算X的数值中。。。\n");
	Sleep(500);									//延时语句500ms=0.5s
	printf("计算成功，x=%d\n", x);
	Sleep(500);									//延时语句500ms=0.5s
	printf("计算Y的数值中。。。\n");
	Sleep(500);									//延时语句500ms=0.5s
	printf("计算成功，y=%d\n", y);
	Sleep(500);									//延时语句500ms=0.5s
	printf("计算Z的数值中。。。\n");
	Sleep(500);									//延时语句500ms=0.5s
	printf("计算成功，z=%d\n", z);
	return 0;
}