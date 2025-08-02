#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int j=partition(arr, low, high);
        quick_sort(arr, low, j-1);
        quick_sort(arr, j+1, high);
    }
}

int main(){
    vector<int> arr = {2, 12, -56, 35, 87, 3, 23, 10, 0, -345};
    quick_sort(arr, 0, arr.size()-1);

    for(auto c : arr){
        if(c==arr[arr.size()-1]){
            cout<<c<<endl;
            return 0;
        }
        cout<<c<<", ";
    }
    return 0;
}