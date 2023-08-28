#include <iostream>
using namespace std;

void swap(int arr[], int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int findPosition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low; 
    int j = high;
    while(i<j){
        while(arr[i] < pivot && i<high){
            i++;
        }
        while(arr[j] > pivot && j>low){
            j--;
        }
        if(i<j){
        swap(arr, arr[i], arr[j]);
        i++;
        j--;
    }
    }
    swap( arr[low], arr[j]);

    return j;
    }


void QS(int arr[], int low, int high ){
    if(low<high){
        int partitionIndex = findPosition(arr, low, high);
        QS(arr, low, partitionIndex-1);
        QS(arr, partitionIndex+1, high);
}}

int main(){
    //inputting array
    int elements = 5;
    int arr[elements];
    for(int i=0; i<elements; i++){
        cin>>arr[i];
    }

    QS(arr, 0, elements-1);

    for(int j=0; j<elements; j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}