#include "RunAlgo.h"
#include<iostream>
void max_heapify(int*, int, int);
void build_max_heap(int* , int);
void runAlgo::Heapsort()
{
	int array[] = { 10,90,7,100,4,78,203};
	int n = sizeof(array) / sizeof(array[0]);
	build_max_heap(array, n);
	for (int i = 0; i < 7; i++)
	{
		std::cout << array[i]<<"\n";
	}
}
void max_heapify(int* numArray,int n,int i)
{
	int Largest = i;
	int Left = 2 * i + 1;
	int Right = 2 * i + 2;
	if (Left < n && numArray[Left] > Largest)
	{
		Largest = Left;
	}
	
	if (Right < n && numArray[Left] > numArray[Largest])
	{
		Largest = Right;
	}
	if (Largest != i)
	{	
		std::swap(numArray[i], numArray[Largest]);
		max_heapify(numArray, n, Largest);
	}	
}
void build_max_heap(int *numArray,int n)
{
	for (int i = n/2 - 1; i > 0; i--)
	{
		max_heapify(numArray, n, i);
	}
}
