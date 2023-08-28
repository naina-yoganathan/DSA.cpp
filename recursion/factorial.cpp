#include <iostream>
using namespace std;

void fact(int n, int i, int result){
    if(i>n){
        cout<<"Factorial: "<<result;
        return;
    }
    result = result*i;
    fact(n, ++i, result);
}

int main(){

int n = 4;
int i=1;
int res = 1;
fact(n, i, res);

}