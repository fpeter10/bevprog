
#include "../std_lib_facilities.h"
constexpr double cm_to_m= 0.01;
constexpr double inch_to_m= 0.0254;
constexpr double feet_to_m= 0.3048;

// it converts cm, in, ft to meter
double convert_to_meter(double value, string un){
	if (un== "m"){
		return value;
	}
	if (un== "cm"){
		return value* cm_to_m;
	}
	if (un== "in"){
		return value* inch_to_m;
	}
	if (un== "ft"){
		return value* feet_to_m;
	}
}
// it checks the entered unit
bool legal_unit(string un){
	bool good_un= false;
	
	if(un== "m" || un== "cm" || un== "in" || un== "ft"){
	good_un= true;
	return good_un;
	}
}

int main()
{
	double num, meters,sum= 0, num_of_val= 0;
	double smallest= numeric_limits<double>::max(), largest= numeric_limits<double>::lowest();
	string unit= "0";
	vector<double>dv;

	cout<< "Please add a number and a unit (cm, m, in, ft are accepted)"<< endl;
	
	while(cin>> num>> unit){
		if(legal_unit(unit))
		{
			meters= convert_to_meter(num, unit);
			cout<< "You entered: " << num<< " " << unit <<endl;
			//cout << " that is equal to " << meters<< " meters"<< endl;

			if(meters< smallest){
				smallest= meters;
				cout<< "The smallest so far"<< endl;
			}
			if(meters > largest){
				largest= meters;
				cout<< "The largest so far"<< endl;
			}
			sum += meters;			
			num_of_val= num_of_val +1;
			dv.push_back(meters);
		}
		else{
			cout<< "Illegal unit, try again"<< endl;
		}
	}

	cout<< "Thank you for using the program. " <<endl << "The largest was: " << largest <<"m" <<endl;
	cout<< "The smallest was: "<< smallest<<"m"<<endl <<"The sum of the entered values were: "<<sum << "m"<< endl;
	cout<< "And you entered "<< num_of_val<< " values" << endl;
	cout<< "The entered values in order were: "<< endl;
	sort(dv);
	for(int i=0; i< dv.size(); i++)
		cout<<" "<< dv[i]<< "m" << endl;
	
	return 0;
}