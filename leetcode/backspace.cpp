#include<iostream>
#include<string>
using namespace std;

void backspaceCompare(string s, string t) 
{
    int pt = t.size()-1;
    int ps = s.size()-1;
    bool flag = true;

while(ps>=0 && pt>=0)
{
    while(t[pt] == '#'){pt -= 2;}
    while(s[ps] == '#'){ps -= 2;}
    if(s[ps] != t[pt])
    {
        flag =  false;
        break;
    }

    ps--;pt--;
    
}
cout<<flag;

int main()
{
    string s = "d#a#b#";
    string t = "c#a#b#";
    backspaceCompare(s,t);
    return 0;
}