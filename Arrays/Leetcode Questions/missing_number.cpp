#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int n = size(nums);
    
    int xor1=0;
    int xor2=0;
    for(int i=0; i<n; i++){
        xor1=xor1^nums[i];
        xor2=xor2^(i+1);
    }
    cout<<(xor1^xor2)<<endl;
    return 0;
}