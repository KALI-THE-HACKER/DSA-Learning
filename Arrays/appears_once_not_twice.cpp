#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {4,1,2,1,2, 4, 3, 0, 3};
    int n = size(nums);
    int xor1=0;
    for(int i=0; i<n; i++){
        xor1 = (xor1^nums[i]);
    }
    cout<<(xor1)<<endl;
    return 0;
}