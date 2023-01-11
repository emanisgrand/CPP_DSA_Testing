#include "Risotto.h"

void LinkedClass::LinkedMethod()
{
	cout << "quick";
}

bool LinkedClass::TestMethod()
{
	return false;
}

int* LinkedClass::ArrayMethod()
{
	// set a constant size type variable to 100
	const size_t sizeType{ 100 };
	// initialize an array to the value in the variable
	int returnArray[sizeType];
	// range-based for loop. loops over the range of values in 
	// the array while hiding the details of how iteration is achieved
	for (auto& x : returnArray) x = 0;

	return returnArray;
}