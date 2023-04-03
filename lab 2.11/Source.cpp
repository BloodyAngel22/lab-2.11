//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <limits.h>
//
//int main() {
//	system("chcp 1251");
//	char str_1[100];
//	char str_2[100];
//	do {
//		printf("Введите строку ");
//		gets_s(str_1);
//	} while (str_1[0] == NULL);
//	int amount = strlen(str_1);
//	printf("Длина строки %d\n", amount);
//
//
//	/*#pragma region strncpy
//		int counter;
//		printf("Введите сколько симолов копируем\n");
//		do {
//			scanf_s("%d", &counter);
//		} while (counter > amount or counter < 0);
//		if (counter == 0) {
//			printf("Ничего не было скопировано");
//			return 0;
//		}
//		strncpy(str_2, str_1, counter);
//		str_2[counter] = '\0';
//		printf("%s", str_2);
//	#pragma endregion*/
//
//	//memchr
//	int position_w, position_x;
//	bool* storage;
//
//	#pragma region LetterCheck
//	storage = (bool*)memchr(str_1, 'w', amount);
//	bool storage_w = storage;
//	if (storage_w == 1) {
//		char* a = (char*)memchr(str_1, 'w', amount);
//		position_w = (a - str_1 + 1);
//	}
//	else position_w = INT_MAX;
//
//	storage = (bool*)memchr(str_1, 'x', amount);
//	bool storage_x = storage;
//	if (storage_x == 1) {
//		char* a = (char*)memchr(str_1, 'x', amount);
//		position_x = (a - str_1 + 1);
//	}
//	else position_x = INT_MAX;
//
//
//	if (position_w < position_x) printf("'w' идет раньше чем 'x'\n");
//	else if (position_x < position_w) printf("'x' идет раньше чем 'w'\n");
//
//	if (position_w == INT_MAX) printf("'w' нет в строке\n");
//	if (position_x == INT_MAX) printf("'x' нет в строке\n");
//
//	if (position_w != INT_MAX)
//		printf("№ позиции 'w' %d\n", position_w);
//	if (position_x != INT_MAX)
//		printf("№ позиции 'x' %d\n", position_x);
//#pragma endregion
//
//	//if (storage_w < storage_x)
//	//	printf("'w' идет раньше чем 'x'");
//	//if (storage_x < storage_w) 
//	//	printf("'x' идет раньше чем 'w'");
//}