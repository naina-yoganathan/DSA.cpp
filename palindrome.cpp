// to check if a number is a palindrome
#include <iostream>
using namespace std;

int main(){

    int number,num, temp, reverse=0;
    cout<<"enter num: ";
    cin>>number;
    num = number;

    while(num!=0){
        temp = num%10;
        reverse = reverse*10 + temp;
        num = num/10;
    }

    if(number == reverse)
    cout<<"Number is a palindrome";

    else
    cout<<"Number is not a palindrome";

return 0;
}