//for.c
#include <stdio.h>

int main(void) {
	char* string = "Hanbat National University";
	// strlen() = char 배열의 길이 확인 하는 함수
	for (int i = 0; i < strlen(string); i++) {
		// A의 ASCII code는 65
		// a의 ASCII code는 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("index %d: %c\n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; // ' ' 출력하지 않음.
		}
		else {
			printf("index %d: %c\n", i, string[i]);
		}
	}

	return 0;
}