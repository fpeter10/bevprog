#include "../../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
    {
        for(int i=0; i < 10; ++i)
            os << a[i] << endl;
    }

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
    // array a 10 ints
    cout << "array a:" << endl;
    int* a = new int[10];
    for(int i=0; i < 10; ++i){
        a[i] = 0;
    }
    // print array
    for(int i=0; i < 10; ++i){
        cout << a[i] << endl;
    }
    //deallocate
    delete[] a;

    // array b to 100-109
    cout << "array b:" << endl;
    int* b = new int[10];
    for(int i=0; i < 10; ++i){
        b[i] = i+100;
    }
    print_array10(cout,b);
    delete[] b;

    // array c to 11 elements 100-110
    cout << "array c:" << endl; 
    int* c = new int[11];
    for(int i=0; i < 11; ++i){
        c[i] = i+100;
    }
    print_array(cout,c,11);
    delete[] c;

    // array d to 20 elements 100-119
    cout << "array d:" << endl;
    int* d = new int[20];
    for(int i=0; i < 20; ++i){
        d[i] = i+100;
    }
    print_array(cout,d,20);
    delete[] d;

    // vector b 100-109
    cout << "vector b:" << endl;
    vector<int> vb(10);
    for(int i=0; i < 10; ++i){
        vb[i] = i+100;
    }
    print_vector(cout,vb,10);

    // vector c 100-110
    cout << "vector d:" << endl;
    vector<int> vc(11);
    for(int i=0; i < 11; ++i){
        vc[i] = i+100;
    }
    print_vector(cout,vc,11);

    // vector d 100-119
    cout << "vector d:" << endl;
    vector<int> vd(20);
    for(int i=0; i < 20; ++i){
        vd[i] = i+100;
    }
    print_vector(cout,vd,20);

    return 0;
}