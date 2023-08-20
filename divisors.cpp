//print all divisors of a number.

#include <iostream>
using namespace std;

int main(){

int number, num, index=0;
int divisors[100];
cout<<"Enter number: ";
cin>>number;
num = number;

for(int i=1; i<=number; i++){
    if(number%i == 0){
        divisors[index] = i;
        index++;
    }
}

size_t array_size = sizeof(divisors)/sizeof(divisors[0]); //since sizeof gives size in bytes.

cout<<"Divisors: "<<endl;
for(int j=0; j<index; j++){
    cout<<divisors[j]<<endl;
}


return 0;
}