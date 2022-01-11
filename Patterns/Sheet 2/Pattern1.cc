#include<iostream>
using namespace std;

int main(){

    int spaces=5;
    int  x=7;

    for(int i=1;i<=3;i++){

        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=x;j<=7;j++){
            cout<<j;
        }
        x--;
        spaces-=2;
        cout<<endl;
    }

    for(int i=1;i<=7;i++){
        cout<<i;
    }
    cout<<endl;

     spaces=1;
     x=5;

    for(int i=3;i>=1;i--){

        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=x;j<=7;j++){
            cout<<j;
        }
        x++;
        spaces+=2;
        cout<<endl;
    }


}