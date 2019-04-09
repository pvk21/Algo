#include "RunAlgo.h"
#include<iostream>
void max_heapify(int*, int, int);
void runAlgo::Heapsort()
{
	int array[] = {16,14,10,8,7,9,3,2,4,1};
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

