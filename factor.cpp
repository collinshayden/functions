//function to output factors of n, including 1 and n
#include <iostream>
#include <vector>
using namespace std; 

std::vector<int> factor(int n) 
{
  vector<int> factorVect; int step; 
  if (n % 2 != 0){//odd numbers cannot have even divisors, so the step can be by 2 for odd numbers, making the algorithm 25% more efficient
     step = 2;
  }
  for (int i = 1; i < n/2 + 1; i+= step){
    if (n % i == 0){
      factorVect.push_back(i);
    }
  } 
  factorVect.push_back(n);//includes n as a factor
  return factorVect;
}

int main()
{
  for (int i: factor(11)){cout<<i<<endl;}
}
