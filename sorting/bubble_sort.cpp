#include <iostream>
using namespace std;

void swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int elements = 5;
    int arr[elements];

    // inputting array elements
    for(int i=0; i<elements; i++)
        cin>>arr[i];

    // sorting
    for(int i=0; i<elements-1; i++){
        for(int j=0; j<elements-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
       
   

    // displaying sorted array
    for(int i=0; i<elements; i++)
        cout<<arr[i]<<" ";

return 0;
}
