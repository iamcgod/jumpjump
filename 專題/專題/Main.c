#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "init.c"
#include "background.c"
#include "read.c"
#include "speed.c"
#define col 50
#define line 10
long int starttime;
int colorcnt = 0;
char dd[line][col];
char ff[line][col];
void gotoxy(int xpos, int ypos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);
}

int main(void)
{
	starttime = time(NULL);
	init();
	char cc[50];
	sprintf(cc, "mode con cols=%d lines=%d", col, line + 2);
	system(cc);
	system("color 70");
	system("title =¸õ¸õ¹CÀ¸");
	for (int i = 1; i < line; i++)
		dd[i][col - 1] = 1;
	while (1)
	{
		srand(time(NULL));
		for (int i = 0; i < col; i++)
		{
			background(line, dd,starttime, col);
			read(line,ff);
			for (int a = 0; a < line; a++)
			{
				for (int b = 0; b < col; b++)//??e??????
				{
					if (dd[a][b] == 1 || ff[a][b] == 1)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
					if (dd[a][b] == 1)
					{
						if (b != 0)
						{
							dd[a][b] = 0;
							dd[a][b - 1] = 1;
						}
						else
						{
							dd[a][b] = 0;
						}
					}
				}
				printf("\n");
			}
			printf("              Survive Time : %lu\n", time(NULL) - starttime);
			speed(starttime);
			int a = &starttime;
			check(a,dd,ff,line);
			gotoxy(0, 0);
		}
	}
	return 0;
}






