#include "Function.cpp"
#include "Function.h"


#include <iostream>

using namespace std;

#define DOUBLE

int main()
{
	const int size = 10;
	double array[size];

	init(array,size);
	cout(array, size);
	min(array, size);
	max(array, size);
	sort(array, size);
	array = edit(array, size);
}