//Expedi SPOJ
//its wrong,but i dont know what is wrong
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
vector<pair<ll,ll>>vec;
bool comp(pair<ll,ll>p1,pair<ll,ll>p2)
{
	return p1.first<p2.first;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			ll p,q;
			cin>>p>>q;
			vec.push_back(make_pair(p,q));
		}
		pair<ll,ll>p;
		cin>>p.first>>p.second;
        d=p.first;
		for(int i = 0;i<n;i++)
		{
			vec[i].first = d - vec[i].first;
		}
        sort(vec.begin(),vec.end(),comp);
        ll flag=0,cool=0,count=p.second;
        ll t=0;
        for(int i=0;i<n;i++)
        {
        	if(p.second>=(vec[i].first-t))
        	{
        		p.second=p.second-(vec[i].first-t)+vec[i].second;
        		flag++;
        		count=count+vec[i].second;
        		t=vec[i].first;
        	}
        	if(count>=d)
        	{
                cool=1;
        		break;
        	}
        }
        if(cool)
        	cout<<flag<<endl;
        else
        	cout<<"-1"<<endl;
	}
    vec.clear();
}