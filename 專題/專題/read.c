#include <conio.h>
inline void read(int line,char *f)
{
	if (_kbhit() == 1)
	{

		*(f+452 )= 0;
		*(f+2) = 1;
		char ch = _getch();
	}
	else
	{
		*(f + 452) = 1;
		*(f+2) = 0;
	}
}