#include "../std_lib_facilities.h"

int main()
{
	string first_name, friend_name;
	char friend_sex= '0';
	int age;
	
	//questions
	cout<< "Please enter the name of the person you want to write to: ";
	cin>> first_name;
	cout << "Please enter a friend name! ";
	cin >> friend_name;
	cout << "Plese enter 'f' if your friend is female and 'm' if male ";
	cin >> friend_sex;
	cout<< "Plase enter the age of your friend ";
	cin >> age;
	
	// letter
	cout<< endl<< "Dear " << first_name <<","<<endl;
	cout << "How are you, I hope everything is ok with you in this pandemic time. I really hope that we can meet in person soon. "<< endl;
	cout<< "Have you seen " << friend_name << " lately? "<< endl;
	
	if (friend_sex == 'm'){
			cout<< "If you see "<< friend_name << " please ask him to call me!"<< endl;
		}
	else if (friend_sex == 'f'){
			cout<< "If you see "<< friend_name << " please ask her to call me!" << endl;
		}
	
	if (age <=0 || age >110){
		simple_error("You are kidding! ");	
	}	
	
	cout << "I hear you just had a birthday, and you are " << age << " years old :)" <<" Happy birthday."<< endl;
	if (age < 12){
		cout<<"Next year you will be " << age+1 <<"." <<endl;
	}
	else if (age == 17){
		cout<< "Next year you will be able to vote. :)" << endl;
	}
	else if (age >=70){
		cout << "I hope you are enjoying retirement."<< endl;
	}
	cout << "Yours sincerelly, "<< endl << endl<< endl;
	cout << "Péter"<< endl;
	return 0;
}