#include <iostream>
using namespace std;

void printNum(int n, int i){
    if(i>n)
    return;
    cout<<i<<endl;
    printNum(n, ++i);
}

int main(){

int n = 25;
int i=1;
printNum(n, i);

}