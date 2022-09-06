 #include<iostream>
 #include<vector>
 using namespace std;

 int peak(vector<int>& nums)
 {
 	int l = 0;
 	int r = nums.size();
 	int mid = 0;
 	
 	while(l<r)
 	{
 		mid = l + (r-l)/2;
 		if(nums[mid] > nums[l]) {l = mid;}
 		else {r=mid;}
 	}	
 	return l;
 } 

int main(int argc, char *argv[])
{
	vector<int> nums = {1,2};
	cout<<peak(nums);
	return 0;	
}