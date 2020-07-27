//function to output factors of n
#include <iostream>
#include <vector>
using namespace std; 

std::vector<int> factor(int n) 
{
  vector<int> factorVect;
  for (int i = 1; i < n/2 + 1; i++){
    if (n % i == 0){
      factorVect.push_back(i);
    }
  } 
  factorVect.push_back(n);
  return factorVect;
}

int main()
{
  for (int i: factor(28)){cout<<i<<endl;}
}