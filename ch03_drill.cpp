#include "std_lib_facilities.h"

int main()
{

	int age = 0;
	char friend_sex = 0;
	string first_name, friend_name;
	
	cout<<"Enter the persons's name you want to write to: ";
	
	cin>>first_name;
	
	cout<<"Dear "<<first_name<<endl;
	
	cout<<"How are you doing? ";
	
	cout<<"Everything is fine here. ";
	
	cout<<"I miss you \n";
	
	cin>>friend_name;
	
	cout<<"Have you seen "<<friend_name<<" recently? \n";
	cout<<"(m/f): ";

	cin>>friend_sex;
	
	if(friend_sex=='m')
	{
		cout<<"If you see "<<friend_name<<" please ask him to call me\n";
	}

	else if(friend_sex=='f')
	{
		cout<<"If you see "<<friend_name<<" please ask her to call me\n";
	}

	else
	{
		cout<<"wrong input \n";
	}
	
	cout<<"age:";

	cin>>age;

	try
	{
		if(age<=0 || age>=110)
		{
			throw runtime_error("\nyour kidding");
		}
		
		cout<< "I hear you just had a birthday and you are "<<age<<" years old.\n";

		if(age<12)
		{
			cout<<endl<<"next year you will be "<<age+1<<" years old \n";
		}

		else if(age==17)
		{
			cout<<"next year you will be able to vote \n";
		}

		else if(age>70)
		{
			cout<<"i hope you are enjoying your retirement \n";
		}
	}
	catch (const runtime_error &ex)
	{
		cerr << ex.what()<<endl;
	}

	cout<<endl<<"Yours sincerely\n"<<endl<<"Szabó Árpád \n";
}