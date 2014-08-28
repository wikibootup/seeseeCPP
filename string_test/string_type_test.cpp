#include <iostream>

using namespace std;

int main()
{
	string des = "apple";
	string src1 = " is ";
	string src2 = "delicious";
	des += src1 += src2;

	cout << des << endl;
	return 0;
}
