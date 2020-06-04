#include <iostream>
#include <math.h>

using namespace std;

int ith(int n, int i){//ith digit starting from the end. 1 would return the last digit, 2 the second to last, etc. 
    return n % (int)pow(10,i)/(int)pow(10, i - 1);
}

int main(){
    int n = 123456789;
    cout <<ith(n, 3)<<endl;
}