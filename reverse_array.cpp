#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
void reverse(string s)
{
    int start=0;
    int end = s.size()-1 ;
    
    while(start<end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main()
{
	string str;
	cin>>str;
	
	reverse(str);
	cout<<str;
    
	return 0;
}
