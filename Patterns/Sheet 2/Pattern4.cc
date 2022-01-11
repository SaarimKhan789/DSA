#include<iostream>
using namespace std;

int main(){

    int spaces=0;
   

    for(int i=1;i<=5;i++){

        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        spaces++;
        cout<<endl;
    }
    spaces=4;
    for(int i=1;i<=4;i++){

        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<"*";
        }

        spaces--;
        cout<<endl;
    }
}