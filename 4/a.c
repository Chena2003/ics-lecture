#include <stdio.h>

#define true (__LINE__ % 2 != 0)


int main()
{
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);
	if(true) printf("YES, %d line\n", __LINE__);


	return 0;
}
