#include<iostream>
using namespace std;
//it works but very much time

bool isBadVersion(int check, int first)
{
    if(check >= first){return true;}
    else { return false;}

}


int firstBadVersion(int n, int first) {
   int left = 0;
   int right = n;
   int mid;
   int res;
   while(left <= right)
   {
        mid = left + ( ight-left)/2;        
        if(isBadVersion(mid, first))
        {

            right = mid-1;
            res = mid
        }
        else {left = mid+1;}
   }
   return res;
    
}

int main()
{
    int n = 3;
    int first = 3;


    //cin>>n>>first;

    cout<< firstBadVersion(n, first);
    
}
