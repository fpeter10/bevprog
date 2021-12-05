#include "../../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
    {
        for(int i=0; i < n; ++i)
            os << a[i] << endl;
    }

void print_vector(ostream& os, vector<int> v, int n)
    {
        for(int i=0; i < n; ++i)
            os << v[i] << endl;
    }

int main()
{
    int* p1 = new int(7);
    cout << "the p1 points to: " << p1 << endl
        << "value of p1:  " << *p1 << endl;

    int* p2 = new int[7] {1,2,4,8,16,32,64};
    cout << "the p2 points to: " << p2 << endl;
    cout << "value of p2: " << endl;
    print_array(cout,p2,7);

    int* p3 = p2;
    p1 = p2;
    p3 = p2;

    cout << "the p1 points to: " << p1 << endl
        << "value of p1: " << *p1 << endl;
    cout << "the p2 points to: " << p2 << endl
        << "value of p2: " << *p2 << endl;

    delete[] p2;

    p1 = new int[10] {1,2,4,8,16,32,64,128,256,512};
    p2 = new int[10];
    for(int i=0; i < 10; ++i){
        p2[i] = p1[i];
    }

    delete[] p1;
    delete[] p2;

    cout << "vector: "<< endl;
    vector<int> v1 = {1,2,4,8,16,32,64,128,256,512};
    vector<int> v2(10);
    for(int i=0; i < 10; ++i){
        v2[i] = v1[i];
    }
    cout << "v1: "<< endl;
    for(int i=0; i < 10; ++i){
        cout << v1[i]<< "\t"; 
    }
    cout<< endl;

    cout << "v2: " << endl;
    for(int i=0; i < 10; ++i){
        cout << v2[i]<< "\t"; 
    }
    cout<< endl;

    return 0;
}