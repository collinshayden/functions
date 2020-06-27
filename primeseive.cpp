//this will return a vector of all primes from 2 to n, where n is defined in the function call. 
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

std::vector<int> seive(int n)//sets return type to an integer vector
{
  bool boolArr[n];//array of true/false. primes will be marked true
  size_t arrsize = sizeof(boolArr) / sizeof(bool); 

  for (int i = 0; i < arrsize; i++){
    boolArr[i] = true;//initializes all values as true
  } boolArr[0] = false; boolArr[1] = false;//sets 0 and 1 to false, since seive starts at 2

  for (int i = 2; i < sqrt(n)+1; i++){
    if (boolArr[i]){
      for (int j = i*i; j < n; j += i){
        boolArr[j] = false;//sets non primes to false
      }
    }
  } 
  vector<int> primeVector;//creates vector of integers
  for (int i = 0; i < arrsize; i++){
    if (boolArr[i]){//if index i of boolarr is true(prime)
      primeVector.push_back(i);//add i to end of the vector
    }
  } return primeVector;
}

int main()
{
  vector<int> vect = seive(1000);
  for (int i: vect){//i is elements of vect
    cout<<i<<endl;
  }
}
