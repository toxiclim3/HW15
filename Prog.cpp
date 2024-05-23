#define INT
#include "Function.h"
#include "Function.cpp"



#include <iostream>

using namespace std;



int main()
{
	const int size = 10;
	int array[size];

	init(array,size);
	cout(array, size);
	min(array, size);
	max(array, size);
	sort(array, size);
	array = edit(array, size);
}