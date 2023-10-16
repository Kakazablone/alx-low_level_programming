#include <unistd.h>
#include <string.h>

int rand()
{
	static int iter = -1;

	iter++;
	if (iter == 0)
		return 8;
	if (iter == 1)
		return 8;
	if (iter == 2)
		return 7;
	if (iter == 3)
		return 9;
	if (iter == 4)
		return 23;
	if (iter == 5)
		return 74;
	return iter * iter % 30000;
}
