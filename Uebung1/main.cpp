#include <iostream> // wenn auskommentiert, dann complier error aufgrund von cout, endl, system nicht definiert

// Ein ö ASCII 148
#define oe char(148)
//#define oeletter char 'ö'

using namespace std; // wenn auskommentiert, dann complier error aufgrund von cout, endl, system nicht definiert


int main()
{
	char oeletter = 'ö';
	cout << "mein erstes c++ programm" << endl;
	cout << "schöne neue welt" << endl;
	cout << "sch" << oe << "ne neue welt" << endl;
	cout << "sch" << oeletter << "ne neue welt" << endl;
	system("pause");
	return 0;
}