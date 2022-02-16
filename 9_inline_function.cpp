#include <iostream>
using namespace std;

inline int
add (int a, int b)
{
  return a + b;
}

main ()
{
  int c = add (5, 4);
  cout << "THe addition of a and b is - " << c;
}
