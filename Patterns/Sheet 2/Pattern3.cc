#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<6;i++){

        int val=1;
        for(int j=0;j<=i;j++){
            
            cout<<val<<" ";
            val=val*(i-j)/(j+1);

        }
        cout<<endl;
    }
}