#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h>

//������� �� ������ ��� �����. ���������� ���������� ��������� ����.

/*���� ������. ����������, ����� ������ � ��� �����������
������: 'x' ��� 'w'. ���� ������-�� �� �������� ���, �������
��������� �� ����.*/

/*���� ������. �������� ����� ������� ������� ��� ���������
�������.*/

void remove_numbers(char* str_1, int amount) {
	char keys[] = "1234567890";
	char *pointer;
	int countNumber = 0;
	
	while (pointer = strpbrk(str_1, keys)) {
		if (pointer = strpbrk(str_1, keys))
			countNumber++;
		memmove(pointer, pointer + 1, amount);
	}

	printf("%s\n", str_1);
	printf("%d", countNumber);
}

void early_symbol(char* str, int counter) {
	char* storageW;
	char* storageX;
	
	storageW = strchr(str, 'w');
	storageX = strchr(str, 'x');

	int positionW = (int)(storageW - str + 1);
	int positionX = (int)(storageX - str + 1);

	if (storageX == 0) {
		positionX = -1;
	}
	if (storageW == 0) {
		positionW = -1;
	}

	if (positionX < positionW and positionX >= 0) printf("x ���� ������ ��� w\n");
	if (positionW < positionX and positionW >= 0) printf("w ���� ������ ��� x\n");

	if (positionX < 0) {
		printf("x ��� � �������\n");
	}
	if (positionW < 0) {
		printf("w ��� � �������\n");
	}
}

void insert_two_random_symbol(char* str, char* storageStr, int counter) {
	counter = counter * 3;

	for (int i = 0, j = 0; i <= counter; i += 3, j++) {
		storageStr[i] = str[j];
		storageStr[i + 1] = rand() % ('Z' - 'A' + 1) + 'A';
		storageStr[i + 2] = rand() % ('Z' - 'A' + 1) + 'A';
	}

	printf("����� ������ � 2 ���������� ���������\n");
	printf("%s\n", storageStr);
}


int main() {
	srand(time(NULL));
	system("chcp 1251");
	char str[100];
	char storageStr[100];
	int strNumeric[10] = {1,2,3,4,5,6,7,8,9,0};

	printf("1 - ������� �� ������ ��� �����. ���������� ���������� ��������� ����\n");
	printf("2 - ���� ������. ����������, ����� ������ � ��� ����������� ������: 'x' ��� 'w'.���� ������ - �� �� �������� ���, ������� ��������� �� ����\n");
	printf("3 - ���� ������. �������� ����� ������� ������� ��� ��������� �������\n");
	int choice_task;
	do {
		printf("�������� � �������  �� 1 �� 3\n"); scanf_s("%d", &choice_task);
	} while (choice_task < 1 or choice_task > 3);

	printf("������� ������\n");
	//scanf_s("%s", &str, 100);
	while (getchar() != '\n');
	gets_s(str);
	int storage;
	int counter = strlen(str);
	str[counter] = '\0';

	switch (choice_task)
	{
	case 1:
		remove_numbers(str, counter);
		break;

	case 2:
		early_symbol(str, counter);
		break;

	case 3:
		insert_two_random_symbol(str, storageStr, counter);
		break;
	}
}