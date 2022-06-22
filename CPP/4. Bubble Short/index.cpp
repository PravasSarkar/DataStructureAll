#include<iostream>

using namespace std;



int main(){
    int n,i,j,k,temp,arr[] = { 5, 1, 4, 2, 8 ,10 , 76, 56, 43, 12 };

    n = sizeof(arr) / sizeof(arr[0]);

    //cout << n;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }

    for(k=0;k<n;k++){
        cout << arr[k] << " ";
    }
    return 0;
}
