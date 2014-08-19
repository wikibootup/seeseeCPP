//============================================================================
// Name        : InheritanceTest.cpp
// Author      : 
// Version     :
// Copyright   : by wikibootup
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
private and public member
overloading function
shallow copy
operator overloading
*/
#include <iostream>
#include "TestOfClass.h"

using namespace std;

int main() {
	TestOfClass test_of_default_constructor;
	TestOfClass test_of_constructor_contained_parameter(15);
	TestOfClass test_of_constructor_shallow_copy =
			test_of_constructor_contained_parameter;

	int from_n_var = test_of_constructor_shallow_copy.Get_n_var();
	cout << from_n_var << endl;

	return 0;
}
