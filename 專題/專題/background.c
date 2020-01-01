#include <windows.h>
#include <time.h>
inline void background(int line,char *d,int starttime,int col )
{	
	static int cc;
	if (rand() % 50 == 0)
		for (int i = 1; i < line; i++)
			*(d+i*col+col-1) = 1;
	
	if ((time(NULL) - starttime) % 10 == 0)
	{
		if (cc  % 2 == 0)
			system("color 07");
		else
			system("color 70");
		cc++; 
	}
}