#include ".././std_lib_facilities.h"

int main()
{
	cout << "Please enter a real number:\n";
	
	double n;
	cin >> n;
	
	cout << "n==" << n<< endl
		<< "n+1==" << n+1<< endl
		<< "3*n==" << 3*n<< endl
		<< "2*n==" << n+n <<endl
		<< "n squared=" << n*n <<endl
		<< "half of n=" << n/2 <<endl
		<< "square root of n=" << sqrt(n) <<endl
		<< endl;
	return 0;
}