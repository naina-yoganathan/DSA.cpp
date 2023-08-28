#include <iostream>
using namespace std;

void swap( int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int elements = 10;
    int arr[elements];

    // inputting array elements
    for(int i=0; i<elements; i++)
        cin>>arr[i];

    //sorting
    for(int i=0; i<elements-1; i++){
        int min_index = i;
        for(int j=i; j<elements; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
   

    // displaying sorted array
    for(int i=0; i<elements; i++)
        cout<<arr[i]<<" ";

}