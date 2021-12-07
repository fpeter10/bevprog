#include "../../std_lib_facilities.h"

namespace UDChrono{
class Year   //évre
{
	static constexpr int min= 1800;
	static constexpr int max= 2077;
public:
	class Invalid{};
	Year(int x): y(x) {if (x < min || x > max) throw Invalid{};}
	int year() {return y;}
	void increment(){y++; if (y> max) throw Invalid{};}
private:
	int y;	
};

Year operator++(Year& year)
{
	year.increment();
}

ostream& operator<< (ostream& os, Year year)
{
	return os <<year.year();
}

const vector<string> months= 
{
	"january", "february", "march", "april", "may", "june", "july", "august", "september", "oktober", "november", "december"
}; 
// hónap felsorolások

enum class Month{
	jan, feb, mar, apr, may, jun, jul, aug, sep, okt, nov, dec
};   

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);  // a ? egyszerűsített if ha igaz ami utána jön ha hamis a : mögött
	return m;
}

ostream& operator<<(ostream& os, Month m)  // saját típusra nem tudja hogy kell kiírni
{
	os << months[int(m)];  //az ostreamre rakom a months értékét
}

class Date{ 
private:    
	Year year;
	Month month;
	int day;
public:
	class Invalid {};
	Date():year(Year{2001}), month(Month::jan), day(1) {}
	Date(Year y, Month m, int d): year(y),month(m), day(d) {if (!is_valid()) throw Invalid{};}  // értékadás lokális tagoknak és hiba kezelés
	bool is_valid();
	void add_day(int n);
	Year get_year() const {return year;}
	Month get_month() const {return month;}
	int get_day() const {return day;}	   
};

bool Date::is_valid()
{
	if (day < 1 || day > 31) return false;

	return true;
}

void Date::add_day(int n)   // dátumban lépkedés
{
	day += n;
	if(day > 31)
	{
		++month;
		day -= 31;
		if (month == Month::jan)
		{
			++year;
		}
	}
}
} // UDChrono End

int main()
try {
	UDChrono::Date today{UDChrono::Year{1978}, UDChrono::Month::jun, 25};
	cout<< "Date today: " << today.get_year() << '.' << today.get_month() << '.' << today.get_day() <<endl;

	UDChrono::Date tomorrow(today);
	tomorrow.add_day(1);

	cout<< "Date tomorrow: " << tomorrow.get_year() << '.' << tomorrow.get_month() << '.' << tomorrow.get_day() <<endl;

	return 0;
}
catch (UDChrono::Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1;
}
catch (UDChrono::Year::Invalid) {
	cout << "Error: Invalid year\n";
	return 3;
}
catch(exception&e){
	cout << e.what() << endl;
	return 2;
}