#include<iostream>
using namespace std;

int main(){
     
     int star=1;
     int space=4;

     for(int i=1;i<=5;i++){

         for(int k=1;k<=space;k++){
             cout<<" ";
         }
         for(int j=star;j>=1;j--){
             cout<<j;
         }
         space--;
         star+=2;

         cout<<endl;

     }
}