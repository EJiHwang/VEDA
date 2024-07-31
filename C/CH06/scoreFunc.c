# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "score.h"

void scoreEnter(struct score* arr, int* st) {
	for (int i = (*st); i < 30; i++) {
		int tmp;

		printf("\n%d�� �л��� �̸��� �Է��ϼ���. end �Է� �� �Է� �ߴ�.:", i + 1); getchar();
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
					printf("%d�� �л��� ���� ������ �Է��ϼ���. ���� �Է� �� �Է��� �����մϴ�. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("�߸��� ������ �Է��߽��ϴ�.\n");
					}
					(arr + i)->kor = tmp;
					break;
				case 1:
					printf("%d�� �л��� ���� ������ �Է��ϼ���. ���� �Է� �� �Է��� �����մϴ�. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("�߸��� ������ �Է��߽��ϴ�.\n");
					}
					(arr + i)->math = tmp;
					break;
				case 2:
					printf("%d�� �л��� ���� ������ �Է��ϼ���. ���� �Է� �� �Է��� �����մϴ�. : ", i + 1);
					scanf("%d", &tmp);
					if (tmp < 0) {
						printf("�߸��� ������ �Է��߽��ϴ�.\n");
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
		printf("\n%d�� �л�(�̸�: %s)�� ������...\n", i + 1, (sp + i)->name);
		printf("- ����: %d\n", (sp+i)->kor);
		printf("- ����: %d\n", (sp+i)->math);
		printf("- ����: %d\n", (sp+i)->eng);
	}
}

void scoreSearch(struct score* sp, int* st) {
	char tmpName[20];
	printf("\n������ �˰� ���� �л��� �̸��� �Է��ϼ���: "); getchar();
	fgets(tmpName, 20, stdin);
	tmpName[strlen(tmpName) - 1] = '\0';
	// printf("%d %d\n", strcmp((sp)->name, tmpName), *st);
	
	int flag = 0;
	for (int i = 0; i < *st; i++) {
		if ((strcmp((sp + i)->name, tmpName))==0) {
			flag = 1;
			printf("\n�Է��Ͻ� �л��� ������...\n");
			printf("- ����: %d\n", (sp + i)->kor);
			printf("- ����: %d\n", (sp + i)->math);
			printf("- ����: %d\n", (sp + i)->eng);
			break;
		}
	}
	if (!flag) {
		printf("\n��ġ�ϴ� �̸��� �л��� �����ϴ�.\n");
	}

}

void scoreDelete(struct score* sp, int* st) {
	char tmpName[20];
	printf("\n�����ϰ� ���� �л��� �̸��� �Է��ϼ���:"); getchar();
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
		printf("��ġ�ϴ� �̸��� �л��� �����ϴ�.\n");
	}

}