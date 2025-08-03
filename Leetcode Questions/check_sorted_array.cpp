#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2,1,3,4};
    int c = 0;
    for(int i=1; i<size(arr); i++){
        if(arr[i]-arr[i-1]<0){
            c++;
        }
    }
    if(c==1){
        if(arr[size(arr)-1]-arr[0]>0){
            c++;
        }
    }
    if(c<=1){
        cout<<"TRUE"<<endl;
        return 1;
    }
    cout<<"FALSE"<<endl;
    return 0;
}