#include <stdio.h>

// �Լ��� ����(definition)
int sum(int a, int b)
{
	// !!���� sum2�� ���ǵǱ� ���� sum2�� ȣ����
	return sum2(a, b);
}

int sum2(int a, int b)
{
	return sum3(a, b);
}

int sum3(int a, int b)
{
	return a + b;
}

int sum4(int a, int b)
{
	return a + b;
}

void main(void)
{
	int c = sum(1, 2);
	printf("%d", c);
}