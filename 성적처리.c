﻿#include <stdio.h>

void main(void)
{
	int score;
	printf("점수를 입력하시오 : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)

	if (90 <= score <= 100)
		printf("A");
	else if (80 <= score < 90)
		printf("B");
	else if (70 <= score < 80)
		printf("C");
	else if (60 <= score < 70)
		printf("D");
	else 
		printf("E");
}