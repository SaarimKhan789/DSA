#include<iostream>
using namespace std;

int main(){

    int spaces=0;
    int n;
    cin>>n;
   

    for(int i=1;i<=n;i++){

        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        spaces++;
        cout<<endl;
    }
    spaces=n-1;
    for(int i=1;i<=n-1;i++){

        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }

        spaces--;
        cout<<endl;
    }
}