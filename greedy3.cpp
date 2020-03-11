//Biased problem SPOJ
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll count=0;
        for(ll i=0;i<n;i++)
        {
        	count=count+abs(arr[i]-i-1);
        }
        cout<<count<<endl;
	}

}