#include "../../std_lib_facilities.h"


struct Point{
    int x,y;
};

int main()
try{
    cout << "Enter seven (x y) Point: \n";
    // 7 Point input
    vector<Point> original_points;
    int x;
    int y;
    for(int i=0; i<7; i++){
    
        cin >> x;
        cin >> y;
        original_points.push_back(Point{x,y});
    }
    // print original vector
    for (const auto& r : original_points)
        cout << '(' << r.x << ',' << r.y << ')' << endl;
    // mydata.txt and output
    string txtname;
    txtname = "mydata.txt";

    ofstream ost {txtname};
    if (!ost) error ("can't open output file", txtname);

    for (const auto& r : original_points)
        ost << r.x << " " <<r.y << endl;

    // input
    ifstream ist {txtname};
    if (!ist) error ("can't open input file", txtname);
    // processed vector
    vector<Point> processed_points;
    while(ist >> x >> y){
        processed_points.push_back(Point{x,y});
    }
    // print both vectors
    cout << "Original vector:" << endl;
    for (const auto& r : original_points)
        cout << '(' << r.x << ',' << r.y << ')' << endl;
    cout << "Processed vector:" << endl;
    for (const auto& r : processed_points)
        cout << '(' << r.x << ',' << r.y << ')' << endl;
    
    // compare vectors
    for (int i=0; i < original_points.size(); i++){
        if (original_points[i].x != processed_points[i].x)
            error("Something's wrong!");
        if (original_points[i].y != processed_points[i].y)
            error("Something's wrong!");
    }

    return 0;
} catch (runtime_error& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
} catch (...) {
    cerr << "Some error\n";
    return 2;
}