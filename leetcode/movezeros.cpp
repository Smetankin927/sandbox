#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& nums)
{
	int i=0;
	int j=0;
	
	for(i; i<nums.size(); i++)
	{
		if(nums[i] != 0)
		{
			int tmp = nums[j];
			nums[j] = nums[i];
			nums[i] = tmp;
			j++;
		}
		}
	
};
void printvector (const vector<int>& nums)
{
	cout<<"[";
	for (auto& x : nums)
	{cout<<x<<",";}
	cout<<"]";
}
int main(int argc, char *argv[])
{
	vector<int> nums = {0};
	moveZeros(nums);
	printvector(nums);
}