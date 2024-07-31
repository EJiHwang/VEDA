# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "score.h"

void scoreEnter(struct score* arr, int* st) {
	for (int i = (*st); i < 30; i++) {
		int tmp;

		printf("\n%d번 학생의 이름을 입력하세요. end 입력 시 입력 중단.:", i + 1); getchar();
		fgets((arr + i)->name, 20, stdin); 
		// printf("%s\n", arr->name);
		(arr+i)->name[strlen((arr+i)->name) - 1] = '\0';
		if ((strcmp((arr+i)->name, "end"))==0) {
			break;
		}

		else {
			(*st)++;
			int j = 0;
			while (j < 3) {
				switch (j) {
				case 0:
					printf("%d번 학생의 국어 점수를 입력하세요. 음수 입력 시 입력을 중지합니다. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("잘못된 점수를 입력했습니다.\n");
					}
					(arr + i)->kor = tmp;
					break;
				case 1:
					printf("%d번 학생의 수학 점수를 입력하세요. 음수 입력 시 입력을 중지합니다. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("잘못된 점수를 입력했습니다.\n");
					}
					(arr + i)->math = tmp;
					break;
				case 2:
					printf("%d번 학생의 영어 점수를 입력하세요. 음수 입력 시 입력을 중지합니다. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("잘못된 점수를 입력했습니다.\n");
					}
					(arr + i)->eng = tmp;
					break;
				}
				j++;
			}
		}	
	}
}

void scorePrint(struct score* sp, int* st) {
	for (int i = 0; i < *st; i++) {
		printf("\n%d번 학생(이름: %s)의 점수는...\n", i + 1, (sp + i)->name);
		printf("- 국어: %d\n", (sp+i)->kor);
		printf("- 수학: %d\n", (sp+i)->math);
		printf("- 영어: %d\n", (sp+i)->eng);
	}
}

void scoreSearch(struct score* sp, int* st) {
	char tmpName[20];
	printf("\n점수를 알고 싶은 학생의 이름을 입력하세요: "); getchar();
	fgets(tmpName, 20, stdin);
	tmpName[strlen(tmpName) - 1] = '\0';
	// printf("%d %d\n", strcmp((sp)->name, tmpName), *st);
	
	int flag = 0;
	for (int i = 0; i < *st; i++) {
		if ((strcmp((sp + i)->name, tmpName))==0) {
			flag = 1;
			printf("\n입력하신 학생의 점수는...\n");
			printf("- 국어: %d\n", (sp + i)->kor);
			printf("- 수학: %d\n", (sp + i)->math);
			printf("- 영어: %d\n", (sp + i)->eng);
			break;
		}
	}
	if (!flag) {
		printf("\n일치하는 이름의 학생이 없습니다.\n");
	}

}

void scoreDelete(struct score* sp, int* st) {
	char tmpName[20];
	printf("\n삭제하고 싶은 학생의 이름을 입력하세요:"); getchar();
	fgets(tmpName, 20, stdin);
	tmpName[strlen(tmpName) - 1] = '\0';

	int flag = 0;
	for (int i = 0; i < *st; i++) {
		if (!(strcmp((sp + i)->name, tmpName))) {
			flag = 1;
			(*st)--;
			for (int j = i; j < *st; j++) {
				*(sp + j) = *(sp + j+1);
			}
		}
	}
	if (!flag) {
		printf("일치하는 이름의 학생이 없습니다.\n");
	}

}