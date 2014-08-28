// reference : http://www.learncpp.com/cpp-tutorial/96-overloading-operators-using-member-functions/

#include <iostream>
using namespace std;

class Cents
{
private:
    int m_nCents;
 
public:
    Cents(int nCents) { m_nCents = nCents; }
 
    // Overload -cCents
    Cents operator-(const Cents &c2);

	// operator- using friend function
	friend Cents operator-(const Cents &c1, const Cents &c2);

	// accessor
	int GetCents();
};
 
// note: this function is a member function!
Cents Cents::operator-(const Cents &c2)
{
    return Cents(m_nCents-c2.m_nCents);
}

Cents operator-(const Cents &c1, const Cents &c2)
{
	return Cents(c1.m_nCents - c2.m_nCents);
}

int Cents::GetCents()
{
	return m_nCents;
}

int main()
{
	Cents c1(10);
	Cents c2(4);
	Cents c3(3);
	cout << "c1.m_nCents = " << c1.GetCents() << endl;
	cout << "c2.m_nCents = " << c2.GetCents() << endl;
	cout << "c3.m_nCents = " << c3.GetCents() << endl;

	//this operation implements to c1.GetCents() - c2.GetCents()
	c1 = c1 - c2;
	cout << "c1 - c2 = " << c1.GetCents() << endl;

	c2 = c2 - c3;
	cout << "c2 - c3 = " << c2.GetCents() << endl;

	return 0;	
}
