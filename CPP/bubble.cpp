#include<iostream>

using namespace std;

int main(){
    int n,i,j,k,m,temp,arr[] = { 5, 1, 4, 2, 8 ,10 , 76, 56, 43, 12 };

    n = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
