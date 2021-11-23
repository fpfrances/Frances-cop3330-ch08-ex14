/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Filipe Frances
 */
#include "Header.h"
void f(const int);

int main()
{
	int a1 = 100;
	const int a2 = 101;
	f(a1);
	f(a2);
	f(102);
	system("pause>0");
}
