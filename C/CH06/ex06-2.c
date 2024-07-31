# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// 05) 어떤 수가 소수인지 아닌지 확인하는 프로그램 

int main() {
	while (1) {
		int n;
		scanf("%d", &n);
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("소수가 아닙니다.\n");
				break;
			}
		}
	}

	return 0;
}