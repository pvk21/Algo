#include "RunAlgo.h"
#include<iostream>
#include<vector>
std::vector<int> runAlgo::Heapsort(std::vector<int> array,int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		runAlgo::max_heapify(array, n, i);

	// One by one extract an element from heap 
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end 
		std::swap(array[0], array[i]);

		// call max heapify on the reduced heap 
		runAlgo::max_heapify(array, i, 0);
	}
	std::cout << "Sorted Array using Heapsort\n";
	return array;
}

