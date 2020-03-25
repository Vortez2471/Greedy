//https://www.codechef.com/problems/TACHSTCK
//Chopsticks codechef
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
	ll n,d;
	cin>>n>>d;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	ll flag=0;
	for(ll i=0;i<n;)
	{
		if(arr[i+1]-arr[i]<=d)
		{
			flag++;
			i=i+2;
		}
		else
		{
			i++;
		}
	}
	cout<<flag<<endl;
}
