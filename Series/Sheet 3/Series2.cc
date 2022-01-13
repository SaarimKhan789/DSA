#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;


    float sum=0.0;
    int s=0;

    for(int i=1;i<=n;i++){

        s=s+i;
        sum=sum+s;
    }

    cout<<sum<<endl;
}