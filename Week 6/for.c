//for.c
#include <stdio.h>

int main(void) {
	char* string = "Hanbat National University";
	// strlen() = char �迭�� ���� Ȯ�� �ϴ� �Լ�
	for (int i = 0; i < strlen(string); i++) {
		// A�� ASCII code�� 65
		// a�� ASCII code�� 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("index %d: %c\n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; // ' ' ������� ����.
		}
		else {
			printf("index %d: %c\n", i, string[i]);
		}
	}

	return 0;
}