#include <iostream>
using namespace std;

int main(){
    int elements = 10;
    int arr[elements];
    int places = 3;
    int temp[places];

    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    for(int j=0; j<places; j++){
        temp[j] = arr[j];
    }
    for(int i=0; i<elements-places; i++){
        arr[i] = arr[i+places];
        }
    for(int k=0; k<places; k++){
        arr[elements-places+k] = temp[k];
    }

    for(int j=0; j<elements; j++){
        cout<<arr[j]<<" ";
    }
}
    