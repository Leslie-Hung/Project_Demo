#include<stdio.h>
#include<windows.h>
void main() {
	printf("int = %lu\n", sizeof(int));
	printf("long = %lu\n", sizeof(long));
	printf("float = %lu\n", sizeof(float));
	printf("short = %lu\n", sizeof(short));
	printf("double = %lu\n", sizeof(double));
	printf("loneg double = %lu\n", sizeof(long double));
}