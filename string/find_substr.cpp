//find postion of a char in a string
// and subtring 
#include<bits/stdc++.h>
using namespace std;
void find(string t)
{
    int tt=t.find(',');
    //substring from 0 to pos
    string a=t.substr(0,tt);
    //substring from tt+1 to end pos
    string b=t.substr(tt+1);
    // 1 and tt inclusive
    string c=t.substr(1,tt);
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{
     string t;
     cin>>t;
     find(t);
} 

