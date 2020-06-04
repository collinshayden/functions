#include <iostream>
#include <math.h>
using namespace std;

int numLength(int n)
{
  int length;
  length = floor(log10(n)) + 1;
  return length;
}

int main()
{
  int n = 795238;
  cout<<"num: ";cout<<n;cout<<" length: ";cout<<numLength(n)<<endl;
}

