// do-while.c
#include <stdio.h>

int main(void) {
	int age;

	printf("welcome to �츮��!\n");

	do {
		printf("\nEnter your age: ");
		scanf_s("%d", &age);

		if (age >= 18) {
			printf("Access granted!\n");
			printf("Welcom to the SECRET section!\n");
			// break;
		}
		else if(age >0){
			printf("Sorry, you must be 18 or older!\n");
		}
		else {
			printf("Invalid inout. Enter a positive number.\n");
		}
	} while (age <= 0); // �´� ���̸� �Է��� �� ���� �ݺ�..

	printf("Program end.\n");

	return 0;
}