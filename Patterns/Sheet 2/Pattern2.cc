#include<iostream>
using namespace std;

int main(){

    int a=0,b=1;
    cout<<1<<endl;
    for(int i=2;i<=5;i++){

        for(int j=1;j<=i;j++){

            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;

        }

        cout<<endl;
    }
}