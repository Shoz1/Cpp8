#include "pch.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list <float> mylist;
	list <float> ::iterator myiter;

	for (int i(0); i != 10; i++) {
		int var = rand() % 10 - 5;

		if (var > 0)
			mylist.push_back(var);
		else {
			mylist.push_back(var);
			mylist.push_back(1.5);
		}
	}

	while (!mylist.empty()) {
		cout << "Number: " << mylist.front() << std::endl;
		mylist.pop_front();
	}
}
