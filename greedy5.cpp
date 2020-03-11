//Defkin SPOJ
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
ll x[1000000];
ll y[1000000];

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll w,h;
		cin>>w>>h;
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>x[i]>>y[i];
		}
        sort(x,x+n);
        sort(y,y+n);
        ll dx =x[0],dy =y[0];
		
		for(int i = 1;i<n;i++)
		{
			dx = max(dx,x[i] - x[i-1]);
			dy = max(dy,y[i] - y[i-1]);
		}
		dx = max(dx, w + 1 - x[n-1]);
		dy = max(dy, h + 1 - y[n-1]);
		cout<<(dx-1)*(dy-1);
	}

	return 0;
}