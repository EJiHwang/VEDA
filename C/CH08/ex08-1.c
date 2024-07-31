# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int score[30];
	int total = 0;		// ÃÑÁ¡ 
	int stCount = 0;	// ÇÐ»ý¼ö 

	while (stCount < 30) {
		scanf("%d", &score[stCount]);
		if (score[stCount] == -1) 
			break;
		total += score[stCount++];
	}
	printf("average : %.2f\n", (float)total/stCount);

	return 0;
}