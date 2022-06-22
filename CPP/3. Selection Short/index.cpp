#include<iostream>

using namespace std;

int main(){
    int n,i,j,temp,k,data[] = {20, 12, 10, 15, 2, 3, 9, 7, 11, 4};

    n = sizeof(data) / sizeof(data[0]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(data[i]>data[j]){
                //cout<<data[i]<<" "<<data[j]<<endl;
                //cout<<temp<<endl;
                temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    for(k=0;k<n;k++){
        cout<<data[k]<<" ";
    }
    return 0;
}
