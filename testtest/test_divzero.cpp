#include <iostream>
using namespace std;

int DivZero(int a, int b, int c)
{
    string throw_msg = "All parameters should be > 0";
    if( a<= 0 || b <= 0 || c <= 0 ) {
        throw throw_msg;
    }
    return a + b*c + b/c;
}

int main()
{
    try {
        cout << DivZero(1,2,0) << endl;
    }
    
    catch (string e) {
        cout << e << endl;
        return 1;
    }
    return 0;
}
