// to find the greatest common divisor of two numbers.

#include<bits/stdc++.h>
using namespace std;

// ------------------NOT OPTIMAL------------------
// int main(){
//  int num1, num2, gcd;
//  cout<<"Enter two numbers: ";
//  cin>>num1>>num2;

//  for(int i=1; i<=min(num1,num2); i++){
//     if( num1%i == 0 && num2%i == 0)
//     gcd = i;
//  }

//  cout<<"GCD is: "<<gcd;


//-------------------OPTIMAL----------------------

int GreatestCommonDivisor(int a, int b) {
	if (b == 0) {
		return a;
	}
	return GreatestCommonDivisor(b, a % b);
}
int main()
{   
    int num1, num2, gcd;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
	cout <<"The GCD of the two numbers is "<<GreatestCommonDivisor( num1, num2);
}

 