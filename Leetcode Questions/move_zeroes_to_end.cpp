#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2, 5, 1,0, 56, 0, 45, 23, 5, 7, 0, -9, 0, 6, -56, 0, 0, -67, 8 ,0, 0, 0, -8 ,7, 567, 9};
    int n = size(nums);

    int i=0, j=0;
    while(j<n){
        if(nums[i]==0 || nums[j]==0){
            while(j<n && nums[j]==0){
                j++;
            }
        }
        nums[i]=nums[j];
        i++;
        j++;
    }
    while(i<n){
        nums[i++]=0;
    }

    for(auto c : nums){
        cout<<c<<", ";
    }
    return 0;
}