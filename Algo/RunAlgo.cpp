#include<iostream>
#include "RunAlgo.h"
#include<vector>
using namespace std;
int main()
{
	vector<int> array = {16,14,10,8,7,9,3,2,4};
	size_t n = array.size();
	int index = 2;
	runAlgo run;
	//run.Heapsort(array,n);
	run.insert_key(array, 45, n);
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << "\n";
	}
}