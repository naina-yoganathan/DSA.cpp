#include <iostream>
using namespace std;

int main(){
    int elements = 10;
    int arr[elements];

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int sec_max = 0;
    for(int i=0; i<elements; i++){
        if(arr[i]> max){
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i]>sec_max && arr[i]!= max){
            sec_max = arr[i];
        }
    }
    cout<<"max is: "<<max<<endl<<"second max is: "<<sec_max;
}