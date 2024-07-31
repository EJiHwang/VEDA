# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char name[10];

	fgets(name, 10, stdin);			// kim
	name[strlen(name) - 1] = '\0';	// 이거 안하면 strlen(name) = 4
	printf("%s\n", name);			// kim
	printf("%d\n", strlen(name));	// 3

	// 입력한 name 과 "kim" 을 비교 
	printf("%d\n", strcmp(name, "kim"));

	// name 에 "kildong" 을 복사
	if (sizeof(name)>strlen("kildong")) {
		strcpy(name, "kildong");
		printf("%s\n", name);
	}

	// "kildong kim" 으로 합성하고 싶어요
	if (sizeof(name)-strlen(name)>strlen(" kim")) { // strcpy 전에 길이 확인 필수! 
		// sizeof(name)은 name의 크기 = 20, strlen(name)은 길이 = "kildong"의 길이 = 7
		strcat(name, "  kim");
	}
	printf("%s\n", name);

	return 0;
}