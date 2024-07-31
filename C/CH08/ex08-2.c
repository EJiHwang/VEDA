# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int score[30];
	int rank[30];
	int stCount = 0;

	while (stCount < 30) {
		scanf("%d", &score[stCount]);
		if (score[stCount] == -1)
			break;
		stCount++;
	}

	for (int i = 0; i < stCount; i++) {
		rank[i] = 1;
		for (int j = 0; j < stCount; j++) {
			if (score[i] < score[j]) {
				rank[i] += 1;
			}
		}
		printf("%d ", rank[i]);
	}

	return 0;
}