#include<iostream>
#include <vector>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {

    int low = 0;
    int high = nums.size();
    int mid;
    int result;
    while(low <= high)
    {
        if(target > nums[nums.size()-1]){return nums.size();}
        if(target < nums[0]) {return 0;}
        mid = low + (high - low)/2;
        if(nums[mid] == target) {return mid;}

        else if(nums[mid] > target) {result = mid; high = mid -1;}
        else {low = mid +1;}
    }    

    return result;  
    };

    int main()
    {
        vector<int> nums = {2,3,5,6};
        int target =1;
        cout<< searchInsert(nums, target);
    }
