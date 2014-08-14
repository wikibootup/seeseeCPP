#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	int line_num;
	line_num = 10;

	cout << "You can just watch the Trianles without doing anything "
		 << endl;

	Triangle triangle;

	triangle.Right_Angled_Right_Angle(line_num);
	triangle.Left_Angled_Right_Algle(line_num);
	triangle.Normal_Triangle(line_num);
	triangle.Diamond(line_num);

	return 0;
}
