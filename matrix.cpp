#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define VEC matrix[i]
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
        // m  строк n столбцов
        int m = matrix.size();
        int n = matrix[0].size()-1;
       
        int i =0;
        for(i=0; i<m; i++)
        {
        	if(matrix[i][0]<= target && matrix[i][n] >= target){break;}
        }
return binary_search(VEC.begin(), VEC.end(), target);        
        
    };
    
    
int main(int argc, char *argv[])
{
	vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	int target = 11;
	cout<<searchMatrix(matrix, target);
	return 0;
}