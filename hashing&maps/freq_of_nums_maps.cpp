#include <bits/stdc++.h>
using namespace std;

int main(){

    int elements = 10;
    int arr[elements];
    for(int i=0; i<elements; i++)
        cin>>arr[i];

    //using unordered map for frequency counting
    unordered_map<int,int> mpp;
    for(int i=0; i<elements; i++)
        mpp[arr[i]]++;

    //iterating through the map
    for( auto it : mpp) //auto is used for automatic type casting
        cout<<it.first<<" -> "<<it.second<<endl;

    // displaying most occuring element.
    // limitation: if there are multiple elements occuring most no. of times.
    int max_occ = 0;
    int max_ele;
    for( auto it : mpp){
        if( it.second > max_occ){
            max_ele = it.first;
            max_occ = it.second;
        }
    }
    cout<<max_ele<<" is the most occuring element.";

return 0; 
}