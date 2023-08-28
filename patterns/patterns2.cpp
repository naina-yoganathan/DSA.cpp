/*
pattern 14:
A
AB
ABC

pattern 15:
ABC
AB
A

pattern 16:
A
BB
CCC

pattern 17:
   A
  ABA
 ABCBA
ABCDCBA

pattern 18:
E
DE
CDE
BCDE
ABCDE

pattern 19:
n = 5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

pattern 20:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

pattern 21:
n=6
******
*    *
*    *
*    *
*    *
******

pattern 22:
n = 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/
#include<iostream>
using namespace std;
#include <cstring> //for concatenating strings,

int main() {
    int num, patno;
    cout<<"enter num: ";
    cin>>num;
    cout<<"enter pattern: ";
    cin>>patno;

    switch(patno){
        case 14:{
            char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            for(int i=1; i<=num; i++){
                for(int j=0; j<i; j++){
                    cout<<alph[j];
                }
                cout<<endl;
            }
            break;
        }

        case 15:{
            char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            int count;
            for(int i=0; i<num; i++){
                count = 0;
                for(int j=num; j>i; j--){
                    cout<<alph[count];
                    count++;
                }
                cout<<endl;
            }
            break;
        }

        case 16:{
        char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=0; i<num; i++){
            for(int j=0; j<=i; j++){
                cout<<alph[i];
            }
            cout<<endl;
        }
        break;
        }

        case 17:{
            int n=num;
            int spaces, no_letters, forward_letters, backward_letters;
            for(int i=0; i<num; i++){
                char ch = 'A';
                spaces=(n*2-1)/2;
                for(int j=0; j<spaces; j++){
                    cout<<" ";
                }
                no_letters = (i+1)*2-1;
                forward_letters = no_letters/2 +1;
                for(int k=0; k<forward_letters; k++){
                    cout<<ch;
                    ch++;
                }
                backward_letters = forward_letters-1;
                ch -= 2;
                for(int l=0; l<backward_letters; l++){
                    cout<<ch;
                    ch--;
                }
                cout<<endl;
                n--;

            }
            break; }

        case 18:{
        int n= num;
        char ch = 'E';
        for(int i=0; i<num; i++){
            for(int l=0; l<i; l++){
                ch--;
            }
            for(int k=0; k<=i; k++){
                cout<<ch;
                ch++;
            }
            ch = 'E';
            cout<<endl;
        }
        break;}

        case 19:{
            // TOP HALF
            for( int i=0; i<num; i++){
                int spaces;

                for(int j=num-i; j>0; j--){
                    cout<<"*"; }
                spaces = i*2;
                while(spaces){
                    cout<<" ";
                    spaces--;
                }
                for(int j=num-i; j>0; j--){
                    cout<<"*"; }
                cout<<endl;
                }
            // BOTTOM HALF
            for( int i=num-1; i>=0; i--){
                int spaces;

                for(int j=num-i; j>0; j--){
                    cout<<"*"; }
                spaces = i*2;
                while(spaces){
                    cout<<" ";
                    spaces--;
                }
                for(int j=num-i; j>0; j--){
                    cout<<"*"; }
                cout<<endl;
                }
                
            break; }

        case 20:{
            // TOP HALF
            int spaces;
            for(int i=1; i<num; i++){
                for(int j=0; j<i; j++){
                    cout<<"*";
                }
                spaces = (num-i)*2;
                while(spaces){
                    cout<<" ";
                    spaces--;
                }
                for(int j=0; j<i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            // MIDDLE LINE
            for(int i=0; i<num*2; i++)
            cout<<"*";
            cout<<endl;

            // BOTTOM HALF
            for(int i=num-1; i>0; i--){
                for(int j=0; j<i; j++)
                cout<<"*"; 
                
                spaces = (num-i)*2;
                while(spaces){
                    cout<<" ";
                    spaces--;
                }

                for(int j=0; j<i; j++)
                cout<<"*"; 

                cout<<endl;
            }
            break;
        }

        case 21:{
            int spaces;
            for(int i=0; i<num; i++)
            cout<<"*";
            cout<<endl;
            for(int j=0; j<num-2; j++){
                cout<<"*";
                spaces=num-2;
                while(spaces){
                    cout<<" ";
                    spaces--;
                }
                cout<<"*";
                cout<<endl;
            }
            for(int i=0; i<num; i++)
            cout<<"*";
            break;
    }

    case 22:{
        for(int i=0; i<2*num-1; i++){
            for(int j=0; j<2*num-1; j++){
                int top = i;
                int left = j;
                int bottom = (2*num - 2)-i;
                int right = (2*num -2)-j;
                cout<<(num - min( min(top,bottom), min(left,right)))<<" ";
            }
            cout<<endl;
        }
    }




    }
}