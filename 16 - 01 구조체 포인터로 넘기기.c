#include <stdio.h>

typedef struct {
	int x;
	int y;
}point;

void main(void)
{
	point a = { 3, 4 };
	point* ptr = &a;

	//����ü���� ��������
	printf("%d %d \n", a.x, a.y);
	
	//�����͸� ���� ��������
	printf("%d %d", *ptr);
}