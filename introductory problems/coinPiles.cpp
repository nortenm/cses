#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		if(a>b) swap(a,b);
		string s = "";
		if(a*2 < b) s="NO";
		else
		{
			a%=3;
			b%=3;
			if(a>b) swap(a,b);
			if((a==0 && b==0)||(a==1 && b==2)) s = "YES";
			else s = "NO";
		}
		cout<<s<<endl;
	}
	return 0;
}
