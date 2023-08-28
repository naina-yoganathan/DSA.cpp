// sum of first n natural numbers.
#include <iostream>
using namespace std;

int sum_first_n(int n, int sum, int i){
    if(i>n)
    return sum;
    sum += i;
    sum_first_n(n, sum, ++i);
}

int main(){
int sum = 0;
int n = 10;
int final_sum = sum_first_n(n, sum, 0);
cout<<"Sum = "<<final_sum;
}