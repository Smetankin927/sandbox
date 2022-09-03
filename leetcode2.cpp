#include<iostream>
#include<vector>
using namespace std;

vector<int> search( const vector<int>& nums, int target)
{
	int fl = 0; //LEFT
	int fr = nums.size();
	int sl = 0; // RIGHT
	int sr = nums.size();
	
	while(fl < fr)
	{ 
		int mid = fl+(fr-fl)/2;
		if (nums[mid] < target)
		{
			fl = mid+1;
			}
		else { fr = mid;}
	}
	while( sl< sr)
	{
		int mid= sl+(sr-sl)/2;
		if(nums[mid] < target)
		{
			cout<<1;
			sl = mid+1;
		}
	else {sr = mid; cout<<2;}
	}
	if (fl > sr) { return vector<int> {-1,-1}; }
	//cout<<nums[fl]<<" "<<nums[sr];
	//cout<<fl<<" "<<sr;
	return vector<int>  {fl,sr};
}

void printvector( const vector<int>& nums)
{
	cout<<"[";
	for(int x : nums)
	{cout<<x<<", ";}
	cout<<"]";
	cout<< endl;
}

int main(int argc, char *argv[])
{
 vector<int> nums = {1, 2, 3};
 int target = 3;
vector<int> result = search (nums, target);
 printvector(result);
}