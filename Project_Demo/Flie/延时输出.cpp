#include<stdio.h>
#include<Windows.h>

int main(){
	int i, x, y, z;								//��������
	printf("������һ������\n");
	scanf_s("%d", &i);							//�������i����ֵ
	//i = 2;
	x = i++;									//������ֵ����ʽ2
	y = i * 256;								//������ֵ����ʽ2
	z = y / 4;									//������ֵ����ʽ2
	printf("����X����ֵ�С�����\n");
	Sleep(500);									//��ʱ���500ms=0.5s
	printf("����ɹ���x=%d\n", x);
	Sleep(500);									//��ʱ���500ms=0.5s
	printf("����Y����ֵ�С�����\n");
	Sleep(500);									//��ʱ���500ms=0.5s
	printf("����ɹ���y=%d\n", y);
	Sleep(500);									//��ʱ���500ms=0.5s
	printf("����Z����ֵ�С�����\n");
	Sleep(500);									//��ʱ���500ms=0.5s
	printf("����ɹ���z=%d\n", z);
	return 0;
}