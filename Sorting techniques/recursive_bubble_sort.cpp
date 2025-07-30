#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    if(n<=1){
        return;
    }
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    bubble_sort(arr, n-1);
}

int main(){
    int arr[] = {2, 12, -56, 35, 87, 3, 23, 10, 0, -345 ,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, n);
    for(auto c : arr){
        if(c==arr[n-1]){
            cout<<c<<endl;
            return 0;
        }
        cout<<c<<", ";
    }
    return 0;
}