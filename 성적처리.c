#include <stdio.h>

void main(void)
{
	int C_score;
	printf("씨언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);

	if (90 <= C_score && C_score <= 100)
		printf("A");
	else if (80 <= C_score && C_score < 90)
		printf("B");
	else if (70 <= C_score && C_score < 80)
		printf("C");
	else if (60 <= C_score && C_score < 70)
		printf("D");
	else 
		printf("E");
	printf("\n");


	
		int CA_score;
		printf("자바점수를 입력하시오 : ");
		scanf("%d", &CA_score);

			if (90 <= CA_score && C_score <= 100)
				printf("A");
			else if (80 <= CA_score && C_score < 90)
				printf("B");
			else if (70 <= CA_score && C_score < 80)
				printf("C");
			else if (60 <= CA_score && C_score < 70)
				printf("D");
			else
				printf("E");
		printf("\n");


			int CU_score;
			printf("컴퓨터구조 점수를 입력하시오 : ");
			scanf("%d", &CU_score);

				if (90 <= CU_score && CU_score <= 100)
					printf("A");
				else if (80 <= CU_score && CU_score < 90)
					printf("B");
				else if (70 <= CU_score && CU_score < 80)
					printf("C");
				else if (60 <= CU_score && CU_score < 70)
					printf("D");
				else
					printf("E");
			printf("\n");
}