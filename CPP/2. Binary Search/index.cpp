#include<iostream>

using namespace std;

int BinarySearch(int n , int x , int arry[]){

    int i,low,high,mid;

    low = 0;
    high = n-1;
    mid = (low + high) / 2;

    //cout << mid;

    for(i=0;low <= high;mid = (low + high) / 2){
        if(arry[mid] == x){
            return mid;
        }

        if(arry[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n, result , x , array[] = {3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 17, 20};

    n = sizeof(array)/sizeof(array[0]);

    cout << "Enter Your Searching Number : ";

    cin >> x;

    result = BinarySearch(n,x,array);

    if(result == -1){
        cout << "The Number is Not Present in the Array";
    }else{
        cout << "Your Number is in Index No : "<< result;
    }

    return 0;
}
