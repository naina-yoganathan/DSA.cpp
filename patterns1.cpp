#include <iostream>
using namespace std;

/*
if num = 3 
pattern 1:
* * *
* * *
* * *

pattern 2:
*
* *
* * *

pattern 3:
1
1 2
1 2 3

pattern 4:
1
2 2
3 3 3

pattern 5:
* * *
* *
*

pattern 6:
1 2 3
1 2 
1

pattern 7:
  *
 ***
***** 

pattern 8:
*****
 ***
  *

pattern 9:
  *
 ***
*****
*****
 ***
  *

pattern 10:
*
**
***
**
*

pattern 11:
1
0 1
1 0 1

pattern 12:
1    1
12  21
123321

pattern 13:
1
2 3
4 5 6


*/

int main() {
    int num, patno;
    cout<<"enter num: ";
    cin>>num;
    cout<<"enter pattern: ";
    cin>>patno;

    switch(patno){
        case 1:
        {
            for (int i = 0; i < num; i++) {
                for (int j = 0; j < num; j++) {
                    cout << "* ";
                }
                cout << "\n";
            }
            break;
        }
        

        case 2:
        {
            int count = 1;
            for(int i=0; i<num; i++){
                for(int j=0; j<count; j++){
                    cout<<"* ";
                }
                count++;
                cout<<"\n";
            }
            break;
        }

        case 3:
        {
            int count = 1;
            for(int i=0; i<num; i++){
                for(int j=1; j<=count; j++){
                    cout<< j <<" ";
                }
                count++;
                cout << endl;
            }
            break;
        }

        case 4:
        {
            int count = 1;
            for(int i=0; i<num; i++){
                for(int j=1; j<=count; j++){
                    cout<< count<< " ";
                }
                count++;
                cout << endl;
            } 
            break;}

        case 5:
        {
            int count = num;
            for( int i=0; i<num; i++){
                for(int j=count; j>0; j--){
                    cout<<"* ";
                }
                count--;
                cout << endl;
            }
            break; }

        case 6:{
            int count = num;
            for(int i=0; i<num; i++){
                for(int j=1; j<=count; j++){
                    cout << j <<" ";
                }
                count--;
                cout << endl;
            }break;}

        case 7:{
            int n = num;
            for(int i=1; i<=num; i++){
                int no_spaces = (n*2-1)/2;
                for(int j=no_spaces; j>0; j--){
                    cout<<" ";
                }
                int stars = i*2-1;
                for(int j=0; j<stars; j++){
                        cout<<"*";
                    }
                cout<<endl;
                n--;
            } 
            break;}

        case 8:{
            int n = num;
            int spaces;
            int stars;
            for(int i=0; i<num; i++){
                spaces = i;
                stars = n*2-1;
    
                if(spaces!=0){
                    for(int j=0; j<spaces; j++){
                        cout<<" ";
                    }
                }
                for(int k=0; k<stars; k++){
                    cout<<"*";
                }
                cout<<endl;
                n--;
            }
            break;}

        case 9:{
            int n = num;
            int stars;
            for(int i=1; i<=num; i++){
                int spaces = n-1;
                stars = i*2-1;
                for(int j=0; j<spaces; j++){
                    cout<<" ";
                }
                for(int j=0; j<stars; j++){
                    cout<<"*";
                }
                cout<<endl;
                n--;
            }
            n = num;
            for(int i=0; i<num; i++){
                int spaces = i;
                if(spaces!=0){
                    for(int j=0; j<spaces; j++){
                        cout<<" ";
                    }
                }
                stars = n*2-1;
                for(int k=0; k<stars; k++){
                    cout<<"*";
                }
                n--;
                cout<<endl;
            }
            break;}

        case 10:{
            int n=num;
            for(int i=1; i<=num; i++){
                for(int j=0; j<i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            for(int i=1; i<=n; i++){
                for(int k=n-i; k>0; k--){
                    cout<<"*";
                }
                cout<<endl;
            
            }
        break; }
        case 11:{
            int n=num;
            int start;
            for(int i=1; i<=num; i++){
                if(i%2 != 0) start = 1;
                else start = 0;
                for(int j=0; j<i; j++){
                    cout<<start<<" ";
                    start = 1-start;
                }
                cout<<endl;
        }
        break;}

        case 12:{
            for(int i=0; i<num; i++){
                for(int j=1; j<=i+1; j++){
                    cout<<j;
                }
                int spaces = (num-1)*2;
                for(int k=0; k<((num-1-i)*2); k++){
                    cout<<" ";
                }
                for(int l=i+1; l>0; l--){
                    cout<<l;
                }
                cout<<endl;
        
        }break;}

        case 13:{
            int count=1;
            for(int i=1; i<=num; i++){
                for(int j=0; j<i; j++){
                    cout<<count<<" ";
                    count++;
                }
                cout<<endl;
            }
        break; }

        


        

    }

        return 0;
}
        


    


