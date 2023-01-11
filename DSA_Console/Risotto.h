#pragma once
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

class LinkedClass {
public:
	vector<int> nums;

	int* ArrayMethod();

	void LinkedMethod();

	bool TestMethod();
};
