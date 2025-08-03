#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &nums, int start, int end){
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}

int main(){
    vector<int> nums = {0, 3};
    int k = 1;
    int n = size(nums);
    
    if(k>n){
        k=k%n;
    }
    reverse(nums, 0, n-k-1);
    reverse(nums, n-k, n-1);
    reverse(nums, 0, n-1);
    
    for(auto c : nums){
        if(c==nums[n-1]){
            cout<<c<<endl;
            return 0;
        }
        cout<<c<<", ";
    }
    return 0;
}