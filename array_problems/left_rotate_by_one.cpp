#include <iostream>
using namespace std;

int main(){
    int elements = 5;
    int arr[elements];

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    int temp = arr[0];
    for(int i=0; i<elements-1; i++){
        arr[i] = arr[i+1];
        }
    arr[elements-1] = temp;

    for(int j=0; j<elements; j++){
        cout<<arr[j]<<" ";
    }
}
    