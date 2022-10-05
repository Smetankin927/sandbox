#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printvector(const vector<vector<int>> result)
{
    cout<<'[';
    for(int i=0; i<result.size(); i++)
    {
        cout<<'[';
        for(int j=0; j<result[i].size(); j++)
        {
            cout<<result[i][j]<<',';
        }
        cout<<"], "; 
    }
    cout<<']';
}

//vector<vector<int>> 
void threeSum(vector<int>& nums) {
        vector<vector<int>> result = {};
        int l =0;
        for(l; l<nums.size()-2; l++)
        {
            cout<<l<<endl;
            for(int m=l+1; m<nums.size()-1;m++)
            {
                int r =nums.size()-1;
                while(r>m)
                {
                    int sum = nums[l] + nums[m] + nums[r];
                    if(sum == 0)
                    {
                        result.push_back({nums[l] , nums[m] , nums[r]});
                    }
                    while(nums[r-1] == nums[r]){r--;}
                    r--;

                }
                while(nums[m+1] == nums[m]){m++;}
            }

            while(nums[l+1] == nums[l]){l++;}
            

        } 
printvector(result);
    }


    int main()
    {
        vector<int> nums = {1,1,2,2};
        sort(nums.begin(), nums.end());
        threeSum(nums);
        return 0;
    }