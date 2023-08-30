#include <iostream>
using namespace std;

int main(){
    int elements = 10;
    int arr[elements];
    bool sorted = true;

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    
    for(int i=0; i<elements-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }
    
    sorted? cout<<"Array is sorted" : cout<<"Array is not sorted";
}