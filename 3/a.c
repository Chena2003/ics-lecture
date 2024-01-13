#include <stdio.h>

#define A "aaaaaaaaaa"
#define ten(A) A A A A A A A A A A
#define B ten(A)
#define C ten(B)
#define D ten(C)
#define E ten(D)
#define F ten(E)
#define G ten(F)

int main()
{
	puts(G);

	return 0;
}
