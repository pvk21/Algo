#pragma once
#include<iostream>
#include<vector>
class runAlgo
{
public:
	std::vector<int> Heapsort(std::vector<int> ,int);
	void static max_heapify(std::vector<int>, int , int );
	int max_element(std::vector<int> );
	void increase_key(std::vector<int>, int, int);
	int parent(int);
	void insert_key(std::vector<int>, int,size_t);
};