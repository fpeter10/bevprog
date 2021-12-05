#include "../std_lib_facilities.h"

void swap_v(int a, int b)
	{
		int temp;
		temp= a;
		a= b;
		b= temp;
 		cout << a << '\t' << b << endl;
 	return;
	}

void swap_r(int& a, int& b)
	{
		int temp;
		temp= a;
		a= b;
		b= temp;
		cout << a << '\t' << b << endl;
 		return;
	}

/*
void swap_cr(const int& a, const int& b)
	{
		int temp;
		temp= a;
		a=b;
		b=temp;
		
		cout << a << '\t' << b << endl;
 		return;
	}
*/

main()
{
	cout << "7 and 9 value and ref"<< endl;
	int x= 7;
	int y= 9;
	swap_r(x,y);
	swap_v(7,9);

	cout << "const 7 and const 9 value and const ref"<< endl;
	const int cx=7;
	const int cy=9;
	swap_v(cx,cy);
	swap_v(7.7,9.9);

	cout << "double 7.7 and 9.9 value and const ref"<< endl;
	double dx=7.7;
	double dy=9.9;
	swap_v(cx,cy);
	swap_v(7.7,9.9);

	return 0;
}


