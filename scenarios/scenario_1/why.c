#include <stdio.h>

struct x 
{
	int a[8];
	int b;
};

int main(int argc, char** argv) 
{
	struct x x;
	x.b=42;

	for (int i=0;i<=8;++i) 
		x.a[i]=i;

	printf("%d\n", x.b);

	return 0;
}

