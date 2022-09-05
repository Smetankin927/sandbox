 #include <iostream>
 #include <vector>
 using namespace std;
int search(const vector<int>& nums, int target)
{
	int l =0;
	int r = nums.size();
	int mid =0;
	while(l < r)
	{
		mid =  l + (r-l)/2;
		if(nums[mid] == target){return mid;}
		if(nums[mid] < target)
		{
			if(nums[l]<=target && nums[l]>nums[mid]) {r = mid-1;}
			else {l = mid+1;}
		}
		else if(nums[mid] > target)
		{
			if(nums[l]>target && nums[l] <= nums[mid]){ l = mid+1;}
			else{r = mid -1;}
		}
	}
	
	if(nums[l] == target){return l;}
	return -1;
}

/*
tescases
[4 5 6 7 0 1 2 3] 6 == 2 
[4 6 7 0 1 2 3]     5==-1
[0 1 2 3 4 5 6 7]  3==3 8==-1
[1]  1 ==0 2==-1
[1,2] 
*/
int main(int argc, char *argv[])
{
	vector<int> nums = {0,1,2,3,4,5,6,7};
	int target = 4;
	cout<< search(nums, target);
	return 0; 
}ms = {1,2};
	int target = 1;
	cout<< search(nums, target);
	return 0; 
}