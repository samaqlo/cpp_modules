#include<stdio.h>
#include<string.h>

struct zbi
{
	int d;
	char c;
	char *s;
};

int main()
{
	struct zbi A;
	A.c = 'k';
	char *p1 = (char *)&A;
	// p1 += 4;

	char *p = "phobos";

	long long addr = &p;

	printf("[%c]\n", *p1);
	//no access to A;
	// d = 1337;
	//c = 'H';
	//s = "phobos";
	// &A, data, len;
	memset(&A,0,4);
	memset(&A,5,2);
	memset(&A,57,1);

	memset((char *)&A+4, 'h',1);
	memset((char *)&A+8, addr ,1);
	// printf("[%c]\n", *();
	// printf("[%ld]\n", sizeof(A));
	printf("%d -- %c -- %s\n", A.d, A.c, A.s);

}

