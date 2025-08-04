#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = size(nums);
    int i=0, j=0;
    for(int c=0; c<n; c++){
        if(nums[c]==1){
            i++;
            if(j<i){
                j=i;
            }
        } else{
            i=0;
        }
    }
    cout<<j<<endl;
    return 0;
}