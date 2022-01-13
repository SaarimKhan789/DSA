#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){

    int temp;
    for(int i=0;i<n;i++){

        int temp=arr[i];

        int j=i-1;

        while(j>=0 && temp<arr[j]){

            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;
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

    InsertionSort(arr,n);

}