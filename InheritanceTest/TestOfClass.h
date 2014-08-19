/*
 * TestOfClass.h
 *
 *  Created on: 2014. 8. 20.
 *      Author: wikibootup
 */

#ifndef TESTOFCLASS_H_
#define TESTOFCLASS_H_

#include <iostream>
using namespace std;

class TestOfClass {
private:
	int n_var;

public:
	TestOfClass();
	TestOfClass(int num);
	int Get_n_var(void);

	virtual ~TestOfClass();
};

#endif /* TESTOFCLASS_H_ */
