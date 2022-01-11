#include<iostream>
using namespace std;

int main(){

   
    int sp=4;
    
    for(int i=1;i<=5;i++){

        for(int k=1;k<=sp;k++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            if(j==1 || j==i)
           cout<<i<<" ";
           else
           cout<<"  ";
        }
        sp--;
        cout<<endl;
    }
    sp=1;

    for(int i=4;i>=1;i--){

        for(int k=1;k<=sp;k++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            if(j==1 || j==i)
           cout<<i<<" ";
           else
           cout<<"  ";
        }
        sp++;
        cout<<endl;
    }


}