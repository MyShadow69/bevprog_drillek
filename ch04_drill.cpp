#include "std_lib_facilities.h"

int main()
{
	double a, small, big, num, temp, sum=0, met;
	int count = 0;
	bool x=true, y=true;
	string unit;
	vector <double> numbs;

	/*
	while(cin>>a)
	{
		if (x==true)
		{
			small=a;
			x=false;
		}
		else if(a<small)
		{
			cout<<a<<", this is the smallest number yet\n";
			small=a;
		}
		else if(a>big)
		{
			cout<<a<<", this is the largest number yet\n";
			big=a;
		}

		else
		{
			cout<<a<<" "<<endl;
		}
	}
	*/


	while(cin>>num>>unit)
	{

		if(unit=="m")
		{
			met=num;
			cout<<met<<" m\n";
			if(y==true)
			{
				small=met;
				y=false;
			}
			else if(met<small)
			{	
				cout<<"this is the smallest so far \n";
				small=met;
			}

			else if(met>big)
			{
				cout<<"this is the biggest so far \n";
				big=met;
			}
		}
		else if(unit=="cm")
		{
			met=num/100;
			cout<<met<<" m\n";
			if(y==true)
			{
				small=met;
				y=false;
			}
			else if(met<small)
			{	
				cout<<"this is the smallest so far \n";
				small=met;
			}

			else if(met>big)
			{
				cout<<"this is the biggest so far \n";
				big=met;
			}
		}
		else if(unit=="in")
		{
			met = num*(2.54/100);
			cout<<met<<" m\n";
			if(y==true)
			{
				small=met;
				y=false;
			}
			else if(met<small)
			{	
				cout<<"this is the smallest so far \n";
				small=met;
			}

			else if(met>big)
			{
				cout<<"this is the biggest so far \n";
				big=met;
			}
		}
		else if(unit=="ft")
		{
			met = num*(30.48/100);
			cout<<met<<" m \n";
			if(y==true)
			{
				small=met;
				y=false;
			}
			else if(met<small)
			{	
				cout<<"this is the smallest so far \n";
				small=met;
			}

			else if(met>big)
			{
				cout<<"this is the biggest so far \n";
				big=met;
			}

		}


		else if(unit!="m"||"cm"||"in"||"ft")
		{
			cout<<"rossz input\n";
			continue;
		}

		sum+=met;
		count++;
		numbs.push_back(met);



	}
	sort(numbs);
	
	cout << "sum: " << sum << " m" <<endl;
	cout << "smallest: "<<small<<" m"<<endl<<"biggest: "<<big<<" m"<<endl;
	cout << "number of inputs: "<<count<<endl;
	cout <<endl<<"values: \n";

	for (double numb : numbs)
	{
		cout<< numb <<" m\n";
	}

	return 0;
}