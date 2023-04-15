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
//		printf("¬ведите строку ");
//		gets_s(str_1);
//	} while (str_1[0] == NULL);
//	int amount = strlen(str_1);
//
//	char keys[] = "1234567890";
//	char* pointer;
//	int countNumber = 0;
//	int start = 0, j = 0;
//	for (int index = 0; index < keys[index]; index++) {
//		int stringLen = 0;
//		pointer = strchr(str_1, keys[index]);
//		str_1[amount] = keys[index];
//		if (pointer != NULL) {
//			for (start, j; start < amount; start++) {
//				if (str_1[start] == *pointer and pointer != NULL) {
//					start++;
//					countNumber++;
//					pointer = strchr(pointer + 1, keys[index]);
//					if (pointer == NULL)
//						break;
//				}
//
//				if (str_1[start] != *pointer) {
//					str_2[j] = str_1[start];
//					j++;
//					stringLen++;
//					str_1[start] = NULL;
//				}
//			}
//			str_2[stringLen] = '\0';
//			amount = strlen(str_2);
//			start = 0;
//			j = 0;
//			for (int i = 0; i < amount;i++) {
//				str_1[i] = str_2[i];
//				str_2[i] = NULL;
//			}
//		}
//		str_1[amount] = '\0';
//	}
//	printf("%s\n", str_1);
//	printf("%d", countNumber);
//}