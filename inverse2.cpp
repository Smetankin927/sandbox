   #include<iostream>
   #include<vector>
   using namespace std;
   void reverse(vector<int>& nums, int start, int stop);
   
   void printvec(vector<int>& nums)
   {
    cout<<"[";
    for( auto x : nums)
    {cout<<x<<",";}
    cout<<"]"<<endl;
   }

    void rotate(vector<int>& nums, int k) {
        reverse(nums,0, nums.size());
        
        reverse(nums,k%nums.size(), nums.size());
        reverse(nums,0, k%(nums.size()));

        

    };

    void reverse(vector<int>& nums, int start, int stop)
    {
        printvec(nums);
        
        for(int i = stop-1; i>(start+(stop-start-1)/2); i--)
        {
            int tmp = nums[i]; //nums от 1 не определен k-1=1 nums[1] не определен so %
            nums[i] = nums[start + (stop-i-1)];
            nums[start + (stop-i-1)] = tmp ;}
        printvec(nums);
        
    };

    int main()
    {
        vector<int> nums = {1,2};
        int k = 0;
        rotate(nums,k);
        
        for(auto& x : nums)
        {cout<< x<<" ";}
    }