# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// 05) � ���� �Ҽ����� �ƴ��� Ȯ���ϴ� ���α׷� 

int main() {
	while (1) {
		int n;
		scanf("%d", &n);
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("�Ҽ��� �ƴմϴ�.\n");
				break;
			}
		}
	}

	return 0;
}