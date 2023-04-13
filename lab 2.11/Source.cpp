#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
	system("chcp 1251");
	char str_1[100];
	char str_2[100];
	do {
		printf("¬ведите строку ");
		gets_s(str_1);
	} while (str_1[0] == NULL);
	int amount = strlen(str_1);

	char keys[] = "1234567890";
	char key = '1';
	char* pointer;

	int stringLen = 0;
	int start = 0, j = 0;
	for (int index = 0; index < keys[index]; index++) {
		pointer = strchr(str_1, keys[index]);
		str_1[amount] = keys[index];
		for (start, j; start < amount; start++) {

			if (str_1[start] == *pointer) {
				start++;
				pointer = strchr(pointer + 1, keys[index]);
			}

			if (str_1[start] != *pointer) {
				str_2[j] = str_1[start];
				j++;
				stringLen++;
			}
		}
	}
	str_2[stringLen] = '\0';

	//str_2[index] = '\0';
	//printf("The first number in str is at position %d.\n", index + 1);
	printf("%s", str_2);
}