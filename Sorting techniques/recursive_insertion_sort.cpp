#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n, int i){
    if(i==n){
        return;
    }
    for(int j=i; j>=0; j--){
        if(arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
    insertion_sort(arr, n, i+1);
}

int main(){
    int arr[] = {2, 12, -56, 35, 87, 3, 23, 10, 0, -345};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, n, 1);
    for(auto c : arr){
        if(c==arr[n-1]){
            cout<<c<<endl;
            return 0;
        }
        cout<<c<<", ";
    }
    return 0;
}