// Resolva neste ficheiro o seu exercício
#include <stdio.h>
#include <windows.h>

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);   
	printf(" #### ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf(" #    ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("    #   \n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
	printf("#    #");
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf(" #     ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("  # #   \n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
	printf("#    #");
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf(" #     ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf(" #####  \n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
	printf(" #### ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	printf(" ##### ");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("#     # \n");
      return(0);
}
