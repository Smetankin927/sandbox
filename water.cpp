#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Area(const vector<int>& nums, int l, int r)
{
	return min(nums[l],nums[r])*(r - l); 
}

int maxArea(const vector<int>& nums)
{
	int l=0;
	int r=nums.size()-1;
	int S = Area(nums,l,r);

	while(l<r)
	{
		//cout<<"l= "<<l<<" r= "<<r<<endl;
		int t = r;
		for(int i =r; i>l ; i--)
		{
			if(nums[i]>=nums[t])
			{
				int tmpS = Area(nums, l, i);
				//cout<<i<<"  "<<tmpS<<" "<<S<<endl;
				if(tmpS >= S) { S = tmpS; r=i; }
				}			
		} 
		
		while(nums[l+1] <= nums[l]) {l++;}
		l++;
		//cout<<"l= "<<l<<" r= "<<r<<endl;
		}	
	return S;
	
}

int main(int argc, char *argv[])
{
	vector<int> nums = {1,8,6,2,5,4,8,3,7};
	//int S = maxArea(nums);
	cout<<maxArea(nums);
	return 0;
};
	return 0;
}