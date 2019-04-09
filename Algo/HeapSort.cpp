#include "RunAlgo.h"
#include<iostream>
void max_heapify(int*, int, int);
void build_max_heap(int* , int);
void runAlgo::Heapsort()
{
	int array[] = { 4,1,3,2,16,9,10,14,18,7};
	int n = sizeof(array) / sizeof(array[0]);
	for (int i = n / 2 - 1; i >= 0; i--)
		max_heapify(array, n, i);

	// One by one extract an element from heap 
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end 
		std::swap(array[0], array[i]);

		// call max heapify on the reduced heap 
		max_heapify(array, i, 0);
	}
	std::cout << "Sorted Array using Heapsort";
	for (int i = 0; i < n; i++)
	{
		std::cout << "\n" << array[i];
	}
}
void max_heapify(int* numArray,int n,int i)
{
	int Largest = i;
	int Left = 2 * i + 1;
	int Right = 2 * i + 2;
	if (Left < n && numArray[Left] > numArray[Largest])
	{
		Largest = Left;
	}
	
	if (Right < n && numArray[Right] > numArray[Largest])
	{
		Largest = Right;
	}
	if (Largest != i)
	{	
		std::swap(numArray[i], numArray[Largest]);
		max_heapify(numArray, n, Largest);
	}	
}
