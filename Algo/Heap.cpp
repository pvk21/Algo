#include "runAlgo.h"
#include<iostream>
void runAlgo::max_heapify(int* numArray, int n, int i)
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
int max_Element(int* numArray)
{
	return numArray[0];
}
void extract_max(int* numArray)
{

}