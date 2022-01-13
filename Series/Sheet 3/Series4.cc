#include<iostream>
#include<math.h>
using namespace std;


int main(){


    int n,x;
    cin>>n;


    int a=0,b=1;
    int c=0;
    
    for(int i=3;i<=n;i++){
        
        c=a+b;
        a=b;
        b=c;       
    }

    cout<<c<<endl;
}