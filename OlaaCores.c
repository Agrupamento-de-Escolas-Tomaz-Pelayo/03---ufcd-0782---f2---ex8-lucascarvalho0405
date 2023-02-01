// Resolva neste ficheiro o seu exercício
#include<stdio.h>
#include<windows.h>
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("Ola Mundo! \n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf("Ola Mundo! \n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
	printf("Ola Mundo! \n");
	return(0);

}

