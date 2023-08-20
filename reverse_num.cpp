// reverse a number
#include <iostream>
using namespace std;

int main(){

int num, reverse = 0,temp;
cout<<"Enter number: ";
cin>>num;

while(num!=0){
    temp = num%10;
    reverse = reverse*10 + temp;
    num = num/10;
}

cout<<"Reversed number: "<<reverse;

}


