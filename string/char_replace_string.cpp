//replace occurence of a char with other
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void replace (string t)
{
     replace(begin(t),end(t),' ' ,'_');
     cout<<t;
}
int main()
{
    string t;
    t="sdfjksd sdfsdjhfjk sdfs";
    replace(t);
}
