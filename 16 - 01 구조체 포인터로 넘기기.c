#include <stdio.h>

typedef struct {
	int x;
	int y;
}point;

void main(void)
{
	point a = { 3, 4 };
	point* ptr = &a;

	//구조체에서 직접접근
	printf("%d %d \n", a.x, a.y);
	
	//포인터를 통한 간접접근
	printf("%d %d", *ptr);
}