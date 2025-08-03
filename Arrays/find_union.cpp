#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr1 = {1, 2, 4, 5, 8};
    vector<int> arr2 = {2, 3, 5, 6, 7, 8 , 9, 10, 11, 12, 13};

    int n = size(arr1);
    int m = size(arr2);

    vector<int> unionvec;
    int i=0, j=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            unionvec.push_back(arr1[i++]);
        }
        else if(arr2[j]<arr1[i]){
            unionvec.push_back(arr2[j++]);
        }
        else{
            unionvec.push_back(arr1[i++]);
            j++;
        }
    }

    while(i<n){
        unionvec.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        unionvec.push_back(arr2[j++]);
    }
    for(auto c : unionvec){
        cout<<c<<", ";
    }
    return 0;
}