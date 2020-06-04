#include <iostream>
#include <math.h>
using namespace std;

int numLength(int n)//this takes n and returns the number of digits in n. 
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

//output: num: 795238 length: 6
