#include "../std_lib_facilities.h"

vector<int> gv = {1,2,4,8,16,32,64,128,256,512};

void f(vector<int> v){
    vector<int> lv(v.size());
    for(int i = 0; i < lv.size(); ++i)
        lv[i] = gv[i];
    for(int i = 0; i < lv.size(); ++i)
        cout << lv[i] << ' ';
    cout << endl;

    vector<int> lv2 = v;
    for(int i = 0; i < lv2.size(); ++i)
        cout << lv2[i] << ' ';
    cout << endl;
}


int main()
{
    cout << "gv: "<< endl;
    f(gv);

    cout << "vv: "<< endl;
    vector<int> vv(10);
    vv[0] = 1;
    for(int i = 1; i < 10; ++i)
        vv[i] = vv[i-1]*(i+1);

    f(vv);

    return 0;
}