#include<iostream>
using namespace std;
//it works but very much time

bool isBadVersion(int check, int first)
{
    if(check >= first){return true;}
    else { return false;}

}


int firstBadVersion(int n, int first) {
    uint64_t m=n/2;
    int tmp = n;
    while (true)
    {   
        if(m>0){
            if( isBadVersion(m, first)) {
                if(!isBadVersion(m-1, first)) {return m;}
                else { cout<<"flag1 "<< "m= "<<m <<'\n';tmp =m; m = (m)/2;}
            }
            else {
                if(isBadVersion(m+1, first)) {return m+1;}
                else { cout<<"flag2 "<< "m= "<<m <<'\n'; m = (m)/2 + tmp/2;}
            }
        }
        else{return 1;}
        
        }
    
}

int main()
{
    int n = 2147483647 ;
    int first = 2147483644;


    //cin>>n>>first;

    cout<< firstBadVersion(n, first);
    
}
