#include <stdio.h>

void main(void)
{
	//NULL����('\0')�� �ڵ����� ����
	char str[20] = "Hello World";
	char str2[20] = {
		'H', 'e', 'l', 'l', 'o',' ',
		'W', 'o', 'u', 'l', 'd', '\0'
	};
	printf("%s", str);
	printf("%s", str2);
}