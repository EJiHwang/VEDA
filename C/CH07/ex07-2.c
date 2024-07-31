# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include "fact.h"

int main() {
	while (1) {
		int n;
		scanf("%d", &n);
		printf("%d\n", fact(n));
	}
	return 0;
}