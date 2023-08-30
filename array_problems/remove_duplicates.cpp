// given a sorted array, remove all duplicate elements from it.
#include <iostream>
using namespace std;

int main(){
    int elements = 10;
    int arr[elements];

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    int new_arr[elements];
    int index = 0;
    new_arr[index] = arr[0];
    for(int i=1; i<elements; i++){
        if(new_arr[index] != arr[i]){
            index++;
            new_arr[index] = arr[i];
        }
        }
    cout<<"Array without duplicates:"<<endl;
    for(int i=0; i<=index; i++){
        cout<<new_arr[i]<<" ";
    }
    return 0;
    }
    