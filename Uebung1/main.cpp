#include <iostream> // wenn auskommentiert, dann complier error aufgrund von cout, endl, system nicht definiert

// Ein � ASCII 148
#define oe char(148)
//#define oeletter char '�'

using namespace std; // wenn auskommentiert, dann complier error aufgrund von cout, endl, system nicht definiert


int main()
{
	char oeletter = '�';
	cout << "mein erstes c++ programm" << endl;
	cout << "sch�ne neue welt" << endl;
	cout << "sch" << oe << "ne neue welt" << endl;
	cout << "sch" << oeletter << "ne neue welt" << endl;
	system("pause");
	return 0;
}