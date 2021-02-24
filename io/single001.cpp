#include "../std_lib_facilities.h"

void skip_to_int()
{
	if(cin.fail())
	{
		cin.clear();
		for(char ch; cin >> ch; )
		{
			if (isdigit(ch) || ch == '-')
			{
				cin.unget();
				return;
			}
		}
	}
	else
	{
		error ("No input!\n");
	}
}

int get_int()
{
	int n = 0;
	while(true)
	{
		if (cin >> n) return n;
		cout << "Sorry, that was not a number\n";
		skip_to_int();
	}
}

int get_int(int low, int high)
{
	while(true)
	{
		int n = get_int();
		if (low <= n && high >= n) return n;
		cout << "Not in ["<< low << ":" << high <<"] range!\n";
	}
}

int main()
try {

	int n = get_int(1, 10);
	cout << "Thanks: "<< n << endl;

	return 0;

} catch(runtime_error& e){
	cout<<"Error: " << e.what() << endl;
	return 1;
}