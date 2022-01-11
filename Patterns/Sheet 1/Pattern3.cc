#include<iostream>
using namespace std;

int main(){
     
     for(int i=1;i<=5;i++){
        
        for(int k=0;k<=i-1;k++){
            cout<<" ";
        }

        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}