/*
 * TestOfClass.cpp
 *
 *  Created on: 2014. 8. 20.
 *      Author: wikibootup
 */

#include "TestOfClass.h"

TestOfClass::TestOfClass() {
	// TODO Auto-generated numstructor stub
	cout << "numstructor called!" << endl;
}

TestOfClass::TestOfClass(int num) {
	// TODO Auto-generated numstructor stub
	cout << "integer " << num <<" is inserted in the numstructor" << endl;
	n_var = num;
}

int TestOfClass::Get_n_var()
{
	return n_var;
}

TestOfClass::~TestOfClass() {
	// TODO Auto-generated destructor stub
}

