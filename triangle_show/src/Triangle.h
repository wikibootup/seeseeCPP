/*
 * Triangle.h
 *
 *  Created on: 2014. 8. 15.
 *      Author: wikibootup
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <iostream>
using namespace std;


class Triangle {
public:
	Triangle();
	virtual ~Triangle();

	void DecreasingBlank(int line_num, int init_line);
	void IncreasingBlank(int line_num, int init_line);
	void IncreasingStar(int init_line, int multiply_num);
	void DecreasingStar(int line_num, int init_line, int multiply_num);
	void Create_Triangle(int line_num, int init_line, int multiply_num);
	void Inverted_Create_Triangle(int line_num, int init_line, int multiply_num);
	void Diamond(int line_num);
	void Right_Angled_Right_Angle(int line_num);
	void Left_Angled_Right_Algle(int line_num);
	void Normal_Triangle(int line_num);
};

#endif /* TRIANGLE_H_ */
