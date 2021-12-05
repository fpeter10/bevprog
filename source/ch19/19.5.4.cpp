#include "../std_lib_facilities.h"

unique_ptr<vector<int>> make_vec()
{
	unique_ptr<vector<int>> p {new vector<int>};


	for (int i = 0; i < 100; ++i)
	{
		p -> push_back(i);
	}

	cout << "The elements of the vector: ";

	for (int i = 0; i < p->size(); ++i)
	{
		cout << i << " ";
	}

	return p;
}

int main(){


make_vec();
cout << endl;


return 0;	
}