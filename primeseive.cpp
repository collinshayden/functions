//this will output all primes from 2 to n, defined in the function call
#include <iostream>
#include <math.h>
using namespace std;

int seive(int n)
{
  bool boolArr[n];//array of true/false. primes will be marked true
  size_t arrsize = sizeof(boolArr) / sizeof(bool); 

  for (int i = 0; i < arrsize; i++){
    boolArr[i] = true;
  } boolArr[0] = false; boolArr[1] = false;//sets 0 and 1 to false, since seive starts at 2

  for (int i = 2; i < sqrt(n)+1; i++){
    if (boolArr[i]){
      for (int j = i*i; j < n; j += i){
        boolArr[j] = false;//sets non primes to false
      }
    }
  } 
  for (int i = 0; i < arrsize; i++){
    if (boolArr[i]){
    cout<<"num: ";cout<<i;cout<<" bool: ";cout<<boolArr[i]<<endl;
    }
  }
}

int main()
{
  seive(20);
}