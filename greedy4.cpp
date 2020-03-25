//https://www.spoj.com/problems/BALIFE/
//Balife SPOJ
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
	while(1)
	{
		ll n;
		cin>>n;
		if(n==-1)
			break;
		ll arr[n],sum=0;
		for(ll i=0;i<n;i++)
			{
				cin>>arr[i];
				sum=sum+arr[i];
			}
		if(sum%n!=0)
		{
			cout<<"-1"<<endl;
			continue;
		}
		sum=sum/n;
		ll max_ans=0,max=0;
		for(ll i=0;i<n;i++)
		{
		    max=max+arr[i]-sum;
			if(abs(max)>max_ans)
				max_ans=abs(max);
		}
		cout<<max_ans<<endl;
	}

    return 0;
}
