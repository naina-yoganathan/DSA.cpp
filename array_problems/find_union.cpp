// to find the union of two arrays
#include <iostream>
#include <set>
using namespace std;

int main(){
    int arr1[] = {3,6,9,12,15,16};
    int arr2[] = {2,3,6,9,0,12};
    set<int> s;

    for(int i=0; i<6; i++){
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    }
    set<int>::iterator it = s.begin();
    for(; it!=s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}