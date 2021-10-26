#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	// pi : i(4官捞飘)狼 林家, pc : c狼 林家, pd : d狼 林家
	printf("%p %p %p \n", pi, pc, pd);
	printf("%p %p %p \n", pi+1, pc+1, pd+1);
}