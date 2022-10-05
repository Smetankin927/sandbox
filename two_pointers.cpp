#include<iostream>
#include<vector>
using namespace std;

 vector<int> sortedSquares(vector<int>& nums) {
        

        vector<int> result(nums.size(),0);
        
        int l = 0;
        int r = nums.size()-1;
        int i =1;
        int size = nums.size();
        
        while(l <= r && nums[r] != nums[l])
        {
            if(nums[r]*nums[r] > nums[l]*nums[l]) 
            {result[size-i] = nums[r]*nums[r]; r--;}

            else if(nums[r]*nums[r] < nums[l]*nums[l])
            {result[size-i] = nums[l]*nums[l]; l++;}

            else if(nums[r]*nums[r] == nums[l]*nums[l]) 
            {
                cout<<"here";
                result[size-i] = nums[l]*nums[l];
                i++;
                result[size-i] = nums[r]*nums[r];
                r--; l++;
            }
            i++;
        }
        for(l; l<=r; l++)
        {
            result[size - i] =  nums[l]*nums[l];
            i++;
        }
        
        return result;
    };
    int main()
    {
        
        vector<int> nums = {-1,1};
        vector<int> result = sortedSquares(nums);
        for( auto x : result)
        {cout<< x<< endl;}
        return 0;
    }