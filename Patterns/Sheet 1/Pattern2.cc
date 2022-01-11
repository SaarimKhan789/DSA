#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        
        for(int k=4;k>=i;k--){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}