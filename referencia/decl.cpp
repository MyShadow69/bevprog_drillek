#include "std_lib_facilities"

int f(int);

int main()
{
	int i = 2;

	cout << f(i) << '\n';

}

int f(int x)
{
	return 2*x;
}