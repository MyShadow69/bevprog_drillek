#include "../std_lib_facilities.h"


struct Reading {
	int hour;
	int temperature;
};

int main()
try{

	cout<<"Enter input file name: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};

	if (!ist) error ("cant open input file ", iname);

	vector<Reading> temps;

	int hour;
	int temperature;
	while(ist >> hour >> temperature)
	{
		if (hour < 0 || hour > 23) error ("Hour our of range");
		temps.push_back(Reading{hour,temperature});
	}


	cout << "Enter output file name: ";
	string oname;
	cin >> oname;

	ofstream ost {oname};

	if(!ost) error ("cant open output file", oname);

	
	for(const auto& r : temps)
		ost << r.hour << " " << r.temperature << endl;

	return 0;

} catch (runtime_error& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...){
	cerr << "Some error \n";
	return 2;
}