#include<stdio.h>
#include<conio.h>
#include"Header.h"



void main()
{
	int Arr[10000], i, Length;

	printf("Please insert the number of elements you have in the array[max 10000]: ");
	scanf_s("%d", &Length);

	for (i = 0; i < Length; i++)
	{
		printf("Insert the element in the position %d: ", i+1);
		scanf_s("%d", &Arr[i]);
	}

	Insert(Arr, Length);

	printf("|");
	for (i = 0; i < Length; i++)
	{
		printf("%2d|", Arr[i]);
	}



	_getch();
}