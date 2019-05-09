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
	
	f1();

	f2();

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

	printf("Call #%d     at %p\n", n, (void *) &charArr);
	printf("AR Size     #%d is %p\n", n, addr);

	addr = (void *) &charArr[0];
	
	if(n < 10)
	{
		f1();
	}
}

void f2()
{

}

void f3()
{

}
