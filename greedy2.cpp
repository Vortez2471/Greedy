//activity selection problem SPOJ
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

bool comp(pair<ll,ll>p1,pair<ll,ll>p2)
{
	return p1.second<p2.second;
}

vector<pair<ll,ll>>vec;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			ll n,m;
			cin>>n>>m;
			pair<ll,ll>p;
			p=make_pair(n,m);
			vec.push_back(p);
		}
		sort(vec.begin(),vec.end(),comp);

		ll count=vec[0].second;
		ll flag=1;
		for(ll i=1;i<n;i++)
		{
			if(vec[i].first>=count)
				{
					count=vec[i].second;
					flag++;
				}
		}
		cout<<flag<<endl;
		vec.clear();
	}

}