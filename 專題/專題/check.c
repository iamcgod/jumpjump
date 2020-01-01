#include <time.h>
 void check(int *start, char *d,char *f,int line)
{
	int pp = 0, cnt = 0;
	for (int i = 0; i < line; i++)
	{
		cnt += *(d+50*i+2);
	}
	cnt += *(f+452);
	if (cnt == line)
	{
		system("pause");
		*(start) =time(NULL);
	}
}

