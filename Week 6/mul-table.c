// mul-table.c
#include <stdio.h>

int main(void) {
	int i, j;
	// �� ���� �� 1~9 ����ϱ�
	printf("    "); // ù ��° ���� ����
	for (i = 1; i <= 9; i++) {
		printf("%4d", i); //%4d = space 4�� ����
	}
	printf("\n");

	// �� ���
	printf("   -------------------------------------\n");

	// ������ ���̺� ����ϱ�
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i); // �� ���� ���
		for (j = 1; j <= 9; j++) {
			printf("%4d", i * j); // ��� ���
		}
		printf("\n");
	}
	return 0;
}