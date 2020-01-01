#include <time.h>
inline void speed(int starttime)
{ 
	if (time(NULL) - starttime < 20)
		Sleep(10 * (20 - (time(NULL) - starttime)));
}