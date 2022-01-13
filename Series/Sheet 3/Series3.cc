#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){

    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){


    int n,x;
    cin>>n>>x;


    float sum=0.0;
    int idx=-1;
    int power=2;
    for(int i=2;i<=n;i++){


        if(i%2==0){
            sum=sum+((pow(x,power)*idx)/fact(power));
        }
        else{
            sum=sum+((pow(x,i)*idx)/fact(power));
        }
        idx=idx*-1;
        power*=2;
}

    cout<<1-sum<<endl;
}