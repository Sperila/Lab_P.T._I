#include<stdio.h>
//#include"Header.h"

int Insert(int *a, int Length)
{
	int i, j, Var;
	for (i = 0; i < Length; i++)
	{
		Var = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > Var))
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
	a[j] = Var;
	}
	return 0;
}