#include <stdio.h>

void main(void)
{
	//NULL문자('\0')가 자동으로 포함
	char str[20] = "Hello World";
	char str2[20] = {
		'H', 'e', 'l', 'l', 'o',' ',
		'W', 'o', 'u', 'l', 'd', '\0'
	};
	printf("%s", str);
	printf("%s", str2);
}