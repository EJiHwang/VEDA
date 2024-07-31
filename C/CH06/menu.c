# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include "scoreFunc.h"
# include "score.h"

// 입력, 출력, 검색 기능을 가진 메뉴 프로그램 

int main() {
	int menuNo; 
	struct score stScore[30];
	struct score* stScorePtr;
	int score;
	int st = 0;		// 학생수

	do {
		printf("\n1. 입력\n");
		printf("2. 출력\n");
		printf("3. 검색\n");				// 학생들의 이름을 바탕으로 검색 실시 
		printf("4. 삭제\n");				// 학생들의 이름을 바탕으로 삭제 실시
		printf("9. 종료\n");
		printf("선택: ");
		scanf("%d", &menuNo); 
		
		switch (menuNo) {
		case 1:
			scoreEnter(stScore, &st);		// 성적 입력 함수 
			break;
		case 2:
			scorePrint(stScore, &st);		// 성적 출력 함수 
			break;
		case 3:
			scoreSearch(stScore, &st);		// 성적 검색 함수
			break;
		case 4:
			scoreDelete(stScore, &st);
			break;
		case 9:
			printf("9. 종료를 선택하셨습니다.\n");
			break;
		default:
			printf("잘못 선택하였습니다.\n");
			break;
		}
	} while (menuNo != 9);

	return 0;
}