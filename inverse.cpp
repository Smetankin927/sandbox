   #include<iostream>
   #include<vector>
   using namespace std;
   
   void printvec(vector<int>& nums)
   {
    cout<<"[";
    for( auto x : nums)
    {cout<<x<<",";}
    cout<<"]"<<endl;
   }

    void rotate(vector<int>& nums, int k) {
        int tmp;
        int l=0;
        int r=nums.size()-1;

        while(l < k)
        {
            tmp = nums[r];
            for(int i=r; i>0; i--){nums[i] = nums[i-1]; printvec(nums);}
            nums[0] = tmp; 
            l++;
            cout<<"NEXT"<<endl;
        }
        

    }

    int main()
    {
        vector<int> nums = {-1,-100,3,99};
        int k = 2;

        rotate(nums, k);
        for(auto& x : nums)
        {cout<< x<<" ";}
    }