// to check if a number is an armstrong number.
// Armstrong number --> sum of digits raised to no. of digits is the number itself.
// eg: 153 = 1^3 + 5^3 + 3^3
#include <iostream>
using namespace std;

int main(){

int number, num, no_digits = 0, digit, raised_to = 1, sum = 0;
cout<<"Enter number: ";
cin>>number;
num = number;

// to calculate no. of digits
while(num!=0){
    num = num/10;
    no_digits++;
}

num = number;
while(num != 0){
    digit = num%10;
    for(int i=0; i<no_digits; i++){
        raised_to = raised_to*digit;
    }
    sum += raised_to;
    num = num/10;
    raised_to = 1;
}

if(sum == number)
cout<<"It is an Armstrong number.";

else
cout<<"Not an Armstrong number.";

return 0;
}