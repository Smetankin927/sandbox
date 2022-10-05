   #include<iostream>
   #include<vector>
   #include <iterator>
   #include <algorithm>
   using namespace std;
   
   void printvec(vector<int>& nums)
   {
    cout<<"[";
    for( auto x : nums)
    {cout<<x<<",";}
    cout<<"]"<<endl;
   }

   void moveZeroes(vector<int>& nums) {
        int l=nums.size()-1;
        int r=nums.size()-1;

        while(l>=0)
        {
            while(nums[l] != 0 && l>0)
            {
                
                l--;
            }
            if(nums[l] == 0)
            {reverse(nums.begin()+l, nums.begin()+r+1);
            r--;
            printvec(nums);
            reverse(nums.begin()+l, nums.begin()+r+1);
            
            }
            l--;
        printvec(nums);
        }
        
    }

    int main()
    {
        vector<int> nums = {0,1,0};
        moveZeroes(nums);
        return 0;
    }