#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int task1();
int task2();

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_CTYPE, "RUS");

	task1();
	task2();

	return 0;

}

int task1() {
	char c;

	printf("Введите букву или цифру\n");

	scanf("%c", &c);//считывание с консоли

	switch (c)

	{

	case '1':

		printf("Введена цифра.\n\n");
								
		break;					
								
	case '2':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '3':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '4':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '5':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '6':					
								
		printf("Введена цифра.\n");
								
		break;					
								
	case '7':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '8':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '9':					
								
		printf("Введена цифра.\n\n");
								
		break;					
								
	case '0':					
								
		printf("Введена цифра.\n\n");

		break;

	default:

		printf("Это буква.\n\n");

	}

	return 0;
}

task2() {
	float x;
	char c;
	float y;

	printf("Введите выражениe\n");
	scanf("%f%c%f", &x, &c, &y);

	switch (c) {
	case '+': printf("=%f\n", x + y);
	case '-': printf("=%f\n", x - y);
	case '*': printf("=%f\n", x * y);
	case '/': printf("=%f\n", x / y);
	case '**': printf("=%f\n", pow(x, y));
	}

	return 0;
}