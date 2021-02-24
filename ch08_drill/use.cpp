#include "std_lib_facilities.h"
#include "my.h"

int foo;

int main()
{
  int x = 7;
  int y = 9;
  swap_v(x, y); // lefut de nem cserél
  cout << "Return by value(int):\n";
  print(x);
  print(y);
  cout << "Return by reference(int):\n";
  swap_r(x, y); // lefut és jó eredményt ad
  print(x);
  print(y);
  // swap_const(x, y); // nem működik mert konstans
  const int cx = 7;
  const int cy = 9;
  cout << "Return by value(const):\n";
  swap_v(cx, cy);  // lefut de jó eredményt
  print(cx);
  print(cy);
  cout << "Return by reference(const):\n";
  //swap_r(cx, cy); // nem működik a konstans paraméterek miatt
  print(cx);
  print(cy);
  double dx = 7.7;
  double dy = 9.9;
  cout << "Return by value(double):\n";
  swap_v(dx, dy); // nem cseréli ki, és levágja a tizedesjegyet
  print(dx);
  print(dy);
  cout << "Return by reference(double):\n";
  //swap_r(dx, dy); // nem fut le a double miatt
  print(dx);
  print(dy);
  foo = 7;
  print_foo();
  print(99);
}