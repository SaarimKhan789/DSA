#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
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

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    BubbleSort(arr,n);

}