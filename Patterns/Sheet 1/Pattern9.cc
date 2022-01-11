#include<iostream>
using namespace std;

int main(){

    int spaces=0;
    char ch='E';

    for(int i=1;i<=5;i++){

        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=5;j>=i;j--){
            if(j==5 || j==i)
            cout<<ch<<" ";
            else
            cout<<"  ";
        }
        spaces++;
        ch--;
        cout<<endl;

    }

}