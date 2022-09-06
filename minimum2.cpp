#include<iostream>
#include<vector>
using namespace std;
int minel(vector<int>& nums)
{
	int l=0;
	int r=nums.size()-1;
	int m = 0;
	
	 while(l<r)
	 {
	 	m= l + (r-l)/2;
	 	//cout<<l<<" "<<r<<" "<<m<<endl;
	 	if( nums[r] < nums[l] && nums[l]<= nums[m]) {l=m+1;}
	 	else {r = m;}
	 	}
	 	return nums[l]; 
}


int main(int argc, char *argv[])
{
	vector<int> nums = {2,3,4};
	cout<<minel(nums);

	return 0;	
}