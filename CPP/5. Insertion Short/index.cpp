#include<iostream>

using namespace std;

int main(){
    int n,i,j,k,m,temp,arr[] = { 5, 1, 4, 2, 8 ,10};

    n = sizeof(arr)/sizeof(arr[0]);

    for(i=1;i<n;i++){
            temp = arr[i];
            j=i-1;
            while(j>=0 && arr[j] > temp){
                arr[j+1]=arr[j];
                   j--;
            }

            arr[j+1]=temp;
    }

    for(k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
