#include "runAlgo.h"
#include<iostream>
#include<vector>
void runAlgo::max_heapify(std::vector<int> numArray, int n, int i)
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
int runAlgo::max_element(std::vector<int> numArray)
{
	return numArray[0];
}
/*int runAlgo::extract_max(std::vector<int> numArray,int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	    runAlgo::max_heapify(numArray,n,i);
	if (n < 1)
	{
		std:: cout << "No element in heap";
	}
	int max = numArray[0];
	numArray[0] = numArray[n - 1];
	n = n - 1;
	runAlgo::max_heapify(numArray,n,0);
	return max;
}*/
void runAlgo::increase_key(std::vector<int> numArray,int index,int key)
{
	if (key < numArray[index])
	{
		std::cout << "New key is smaller than new key";
	}
	numArray[index] = key;
	while (index != 0 && numArray[parent(index)] < numArray[index])
	{
		std::swap(numArray[index],numArray[parent(index)]);
		index = parent(index);
	}
}
void runAlgo::insert_key(std::vector<int> numArray, int key,size_t n)
{
	numArray.resize(numArray.size() + 1);
	numArray[numArray.size() - 1] = -2309;
	increase_key(numArray, numArray.size() - 1, key);
}
int runAlgo::parent(int k)
{
	return (k-1)/2;
}