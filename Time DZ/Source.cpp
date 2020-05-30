#include "Time.h"

int main()
{
	Time t1(5, 34, 59);
	t1.Print();
	t1.Add1Second();
	cout << "~Add 1 second" << endl;
	t1.Print();
	cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~" << endl;
	cout << "5555 seconds" << endl;
	Time t2(5555);
	t2.Print();
	cout << "t2 + t1" << endl;
	Time t3 = t2 + t1;
	t3.Print();

	system("pause");
	return 0;
}