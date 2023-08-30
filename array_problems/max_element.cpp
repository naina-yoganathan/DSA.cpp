#include <iostream>
using namespace std;

int main(){
    int elements = 10;
    int arr[elements];

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=0; i<elements; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    cout<<"max is: "<<max;
}