# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>

int main() {
	char name[10];

	fgets(name, 10, stdin);			// kim
	name[strlen(name) - 1] = '\0';	// �̰� ���ϸ� strlen(name) = 4
	printf("%s\n", name);			// kim
	printf("%d\n", strlen(name));	// 3

	// �Է��� name �� "kim" �� �� 
	printf("%d\n", strcmp(name, "kim"));

	// name �� "kildong" �� ����
	if (sizeof(name)>strlen("kildong")) {
		strcpy(name, "kildong");
		printf("%s\n", name);
	}

	// "kildong kim" ���� �ռ��ϰ� �;��
	if (sizeof(name)-strlen(name)>strlen(" kim")) { // strcpy ���� ���� Ȯ�� �ʼ�! 
		// sizeof(name)�� name�� ũ�� = 20, strlen(name)�� ���� = "kildong"�� ���� = 7
		strcat(name, "  kim");
	}
	printf("%s\n", name);

	return 0;
}