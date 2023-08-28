#include <iostream>
using namespace std;

int main(){
    int elements = 5;
    int arr[elements];

    //inputting array elements
    for(int i=0; i<elements; i++)
    cin>>arr[i];

    //insertion sort
    for(int i=1; i<elements; i++){
        int current = arr[i];
        int prev_index = i-1;
        while(arr[prev_index]>current && prev_index >=0){
            arr[prev_index + 1] = arr[prev_index];
            prev_index--;
        }
        arr[prev_index+1] = current;
    }


    //displaying sorted array
    for(int i=0; i<elements; i++)
    cout<<arr[i]<<" ";

}