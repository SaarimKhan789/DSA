#include<iostream>
#include<math.h>
using namespace std;


int main(){


    int n;
    cin>>n;
    int x=0;
    float sum=0.0;
    int val=2;


   for(int i=1;i<=n;i++){


       if(i%2!=0){
           
           sum=sum+pow(3,x);
           x++;
       }
       else{
           
           sum=sum+val;
           val=val*3;
       }
   }

   cout<<sum<<endl;
}