/*
 * Triangle.cpp
 *
 *  Created on: 2014. 8. 15.
 *      Author: wikibootup
 */
#include "Triangle.h"

Triangle::Triangle() {
	// TODO Auto-generated constructor stub
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

void Triangle::DecreasingBlank(int line_num, int init_line)
{
	int i;
	for(i = init_line ; i <= line_num ; i++)
		cout << " ";
}

void Triangle::IncreasingBlank(int line_num, int init_line)
{
	int i;
	for(i = init_line ; i > 0 ; i--)
		cout << " ";
}

void Triangle::IncreasingStar(int init_line, int multiply_num)
{
	int i;
	int raise_var = (init_line - 1) * multiply_num + 1;

	for(i = raise_var ; i > 0 ; i--)
		cout << "*";
}

void Triangle::DecreasingStar(int line_num, int init_line, int multiply_num)
{
	int i;
	int decrease_var = (line_num - init_line) * multiply_num + 1;

	for(i = decrease_var ; i > 0 ; i--)
		cout << "*";
}

void Triangle::Create_Triangle(int line_num, int init_line, int multiply_num)
{
	for( ; init_line <= line_num ; init_line++)
	{
		DecreasingBlank(line_num, init_line);
		IncreasingStar(init_line, multiply_num);
		cout << endl;
	}
}
void Triangle::Inverted_Create_Triangle(int line_num, int init_line, int multiply_num)
{
	for( ; init_line <= line_num ; init_line++)
	{
		IncreasingBlank(line_num, init_line);
		DecreasingStar(line_num, init_line, multiply_num);
		cout << endl;
	}
}

void Triangle::Diamond(int line_num)
{
	int init_line = 1;
	int multiply_num = 2;
	Create_Triangle(line_num, init_line, multiply_num);
	Inverted_Create_Triangle(line_num, init_line + 1, multiply_num);
}

void Triangle::Right_Angled_Right_Angle(int line_num)
{
	int init_line = 1;
	int multiply_num = 1;
	for( ; init_line <= line_num ; init_line++)
	{
		DecreasingBlank(line_num, init_line);
		IncreasingBlank(line_num, init_line + 1);
		IncreasingStar(init_line, multiply_num);
		cout << endl;
	}
}

void Triangle::Left_Angled_Right_Algle(int line_num)
{
	int init_line = 1;
	int multiply_num = 1;

	Create_Triangle(line_num, init_line, multiply_num);
}

void Triangle::Normal_Triangle(int line_num)
{
	int init_line = 1;
	int multiply_num = 2;
	Create_Triangle(line_num, init_line, multiply_num);
}


