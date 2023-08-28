// to find the frequency of occurence of numbers using hash array.
#include <iostream>
using namespace std;

int main(){
    int num = 6;
    int arr[num];
    for(int i=0; i<num; i++)
    cin>>arr[i];

    // pre-computing hash array
    int max_num = 10^4;
    int hash_arr[max_num] = {0};
    for(int i=0; i<num; i++)
    hash_arr[arr[i]]++;
    
    for(int i=0; i<max_num; i++){
        // fetching
        if(hash_arr[i] !=0){
            cout<<i<<" -> "<<hash_arr[i]<<endl;
        }
    }

    // to find most occuring element.
    // limitation: if there are multiple elements occuring most no. of times.
    int max_occ = 0;
    int max_ele;

    for(int i=0; i<max_num; i++){
        if(hash_arr[i] > max_occ){
            max_ele = i;
            max_occ = hash_arr[i];
        }
    }
    cout<<max_ele<<" is the most occuring element";

    return 0;

}