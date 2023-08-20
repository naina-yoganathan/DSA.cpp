//counting number of digits in a number.

#include <iostream>
using namespace std;

int main(){

int num = 0;
int count = 0;
cout<<"Enter a number: ";
cin>>num;

while(num>0){
    num = num/10;
    count++;
}

cout<<"number of digits: ";
cout<<count;

return 0;

}