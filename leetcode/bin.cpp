#include<iostream>
#include <vector>
using namespace std;

int search (const vector<int>& nums, int target)
{
    int a = 0;
    int b = nums.size() -1;

    while(a <= b)
    {
        int c = (a+b)/2;

        if(nums[c] == target)
        {return c;}

        else if(nums[c] > target)
        {
            b = c - 1;
        }
        else if(nums[c] < target)
        {
              a = c + 1;
        }
        //cout<<"a= "<<a<<" "<<"b= "<<b<<' '<<"c= "<<c <<endl;

    }
    return -1;
}

int main()
{
    using Myvector = vector<int>;
    Myvector nums = {2,5};
    int target = 0;

    cout << search(nums, target)<<endl;
    
    return 0;

}
