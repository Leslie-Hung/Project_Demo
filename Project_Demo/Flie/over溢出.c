#include<stdio.h>
void main() {
	short a, b;
	a = 32767;
	b = a + 1;
	printf("%d\n%d", a, b);
	//	32767: 0111111111111111
	//	-32768:1000000000000000
}