# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include "scoreFunc.h"
# include "score.h"

// �Է�, ���, �˻� ����� ���� �޴� ���α׷� 

int main() {
	int menuNo; 
	struct score stScore[30];
	struct score* stScorePtr;
	int score;
	int st = 0;		// �л���

	do {
		printf("\n1. �Է�\n");
		printf("2. ���\n");
		printf("3. �˻�\n");				// �л����� �̸��� �������� �˻� �ǽ� 
		printf("4. ����\n");				// �л����� �̸��� �������� ���� �ǽ�
		printf("9. ����\n");
		printf("����: ");
		scanf("%d", &menuNo); 
		
		switch (menuNo) {
		case 1:
			scoreEnter(stScore, &st);		// ���� �Է� �Լ� 
			break;
		case 2:
			scorePrint(stScore, &st);		// ���� ��� �Լ� 
			break;
		case 3:
			scoreSearch(stScore, &st);		// ���� �˻� �Լ�
			break;
		case 4:
			scoreDelete(stScore, &st);
			break;
		case 9:
			printf("9. ���Ḧ �����ϼ̽��ϴ�.\n");
			break;
		default:
			printf("�߸� �����Ͽ����ϴ�.\n");
			break;
		}
	} while (menuNo != 9);

	return 0;
}