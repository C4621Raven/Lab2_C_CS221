#include <stdio.h>
#include <stdlib.h>

void print_all(int array[], int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d ",array[i]);
		i++;
	}	
}

void increase(int a)
{
	a += 10;
}

void alt_increase(int* p_a)
{
	*p_a += 10;
}

int* make_array(int size)
{
	//we should use malloc because malloc creates values on the heap. 
	//If we where to create newArray on the stack the values could get jumbled up with other values being added to the stack
	int* newArray = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
	{
		newArray[i] = 0;
	}
	return newArray;
}

int main(int argc, char* argv[])
{
	int* hVar = malloc(sizeof(int));
	*hVar = 100;
	printf("%d\n\n", *hVar);
	free(hVar);

	int sVar = 10;
	*&sVar = 100;
	printf("%d\n\n", sVar);

	int ary[10];
	ary[0] = 0;
	ary[1] = 10;
	ary[2] = 2;
	ary[3] = 3;
	ary[4] = 4;
	ary[5] = 5;
	ary[6] = 6;
	ary[7] = 7;
	ary[8] = 8;
	ary[9] = 9;
	
	*(ary+1) = 1;
	
	for (int i = 0; i < sizeof(ary)/sizeof(int); i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n\n");

	int* ary2 = malloc(sizeof(int) * 12);
	ary2[0] = 0;
	ary2[1] = 10;
	ary2[2] = 2;
	ary2[3] = 3;
	ary2[4] = 4;
	ary2[5] = 5;
	ary2[6] = 6;
	ary2[7] = 7;
	ary2[8] = 8;
	ary2[9] = 9;
	ary2[10] = 10;
	ary2[11] = 11;

	*(ary2 + 1) = 1;

	for (int i = 0; i < 12; i++)
	{
		printf("%d ", ary2[i]);
	}
	printf("\n\n");

	print_all(ary,10);
	printf("\n");
	print_all(ary2,12);
	printf("\n\n");

	//---------------------------------------------------------------------------------
	int a = 5;
	printf("%d:", a);
	increase(a);
	printf("%d\n", a);

	int* b = malloc(sizeof(int));
	*b = 5;
	printf("%d:", *b);
	alt_increase(b);
	printf("%d\n",*b);

	//since c is pass by value, increase takes in a value and changes the value internaly.
	//alt_increase takes in the pointer, then increases the value at the pointer

	//-------------------------------------------------
	int* makeArray = make_array(5);
	makeArray[0] = 1;
	makeArray[4] = 1;

	print_all(makeArray,5);
}