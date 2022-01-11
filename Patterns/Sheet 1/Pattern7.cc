#include<iostream>
using namespace std;

int main(){
     
     int val=5;
     int x=val;
     for(int i=1;i<=6;i++){
         int val=5;
         for(int j=1;j<=i;j++){
             cout<<val;
             val--;  
         }
         cout<<endl;
     }
     for(int i=1;i<=6;i++){
         int val=5;
         for(int j=5;j>=i;j--){
             cout<<val;
             val--;  
         }
         cout<<endl;
     }
}