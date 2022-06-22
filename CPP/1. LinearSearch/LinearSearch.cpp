//CSE 075 08307

#include<iostream>

using namespace std;

int main(){

    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};

    int n = sizeof(arr)/sizeof(arr[0]);

    //Finding the Number
    int i,num,num2=NULL,inx;
    cout << "Input Your Number : ";
    cin >> num;
    for(i=0;i<n;i++){
            if(num == arr[i]){
                num2 = arr[i];
                inx = i;
                break;
            }
    }

    if(!num2){
        cout << "No Number like : "<<num;
    }else{
        cout << "Your Number is : "<<num2<<" And Index is : "<<inx+1;
    }

    return 0;
}
