// Programmer:  Andrew McCormick
// Class:       CS-4250 Assignment 7
// Program:     main.c
// Date:        5-9-2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHARSIZE 1000

void f1();
void f2();
void f3();

int main()
{
	
	//f1();

	//f2();

	f3();

	return EXIT_SUCCESS;
}

void f1()
{
	char charArr[CHARSIZE];

	static int n = 0;

	static long int addr = 0;

	n++;

	//addr = atoi(&charArr[0]);

	printf("Call #%d     at %p\n", n, (void *) charArr);
	printf("AR Size     #%d is %1d\n", n, addr - (long int)charArr);

	addr = (long int)charArr;
	
	if(n < 10)
	{
		f1();
	}
}

void f2()
{
	char charArr[CHARSIZE];

	static int n = 0;

	static long int addr = 0;

	n++;

	printf("Call #%d     at %p\n", n, (void *) charArr);
	printf("AR Size     #%d is %1d\n", n, addr - (long int)charArr);
	printf("Stack Size  #%d is %1d\n", n, (addr - (long int)charArr) * n);

	addr = (long int)charArr;
	
	f2();
}	

void f3()
{
	char *charArr = malloc(sizeof(char) * CHARSIZE);

	char c;

	static int n = 0;

	static long int addr = 0;

	n++;

	printf("Call #%d     at %p\n", n, &c);
	printf("AR Size     #%d is %1d\n", n, addr - (long int)&c);
	
	addr = (long int)&c;
	
	if(n < 10)
	{
		f3();
	}

	free(charArr);
}
