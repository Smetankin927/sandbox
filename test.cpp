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

  /* void moveZeroes(vector<int>& nums) {
        int l=nums.size()-1;
        int r=nums.size()-1;

        while(l>=0)
        {
            while(nums[l] != 0 && l>=0)
            {
                l--;
            }
            //cout<< *(nums.begin()+l) <<' ' << *(nums.begin()+r)<<endl;
            reverse(nums.begin()+l, nums.begin()+r+1);
            //cout<< *(nums.begin()+l) <<' ' << *(nums.begin()+r)<<endl;
            reverse(nums.begin()+l, nums.begin()+r);
            printvec(nums);

        }

    }*/

    int main()
    {
        vector<int> nums = {1,2,3,4,5,0,6,7};

        int l=nums.size()-1;
        int r=nums.size()-1;
        
        while(nums[l] != 0 && l>=0)
            {
                l--;
            }
            reverse(nums.begin()+l, nums.begin()+r+1);
            cout<< *(nums.begin()+l) <<' ' << *(nums.begin()+r)<<endl;
            r--;
            reverse(nums.begin()+l, nums.begin()+r+1);
            printvec(nums);
        
        return 0;
    }