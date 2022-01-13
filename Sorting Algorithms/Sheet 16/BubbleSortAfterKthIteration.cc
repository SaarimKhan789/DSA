#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n,int k){

    for(int i=0;i<n;i++){
        
        if(i==k){
            break;
        }
        for(int j=0;j<n-1-i;j++){

            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n,k;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;

    BubbleSort(arr,n,k);

}