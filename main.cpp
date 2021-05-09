#include <iostream>
using namespace std;

template<int n>
class Factorial
{ 
  public:
  enum { RET=Factorial<n-1>::RET*n };
};

template <>
class Factorial<0>
{ 
  public:
  enum{RET=1};
};




int main() {
  cout << "Factorial(7)= " << Factorial<7>::RET << endl;
}