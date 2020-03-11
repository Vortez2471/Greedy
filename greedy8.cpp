//knapsack problem codechef
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
long long cost[200000+10];
int main()
{
	int n,w,c,m,W = 0;
	//Separate one and two for even and odd casses
	vector<int> one,two,One,Two;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d %d",&w,&c);
		//Insert weight 1 items in one vector
		if(w == 1)
		one.push_back(c);
		//Insert weight 2 items in two vector
		else
		two.push_back(c);
		W += w;
	}
	//sort the two vectors
	sort(one.begin(),one.end());
	sort(two.begin(),two.end());
	One = one;
	Two = two;
	long long sum = 0,cur = 0,res = 0;
	//even case
	for(int i = 2;i<=W;i+=2)
	{
		//res1 --> when we take atmost two 1 wight items
		//res2 --> when we take single 2 weight item
		long long res1 = 0, res2 = 0;//calc res2
		if(two.size() > 0){
		res2 = two[two.size()-1];
	}
	//calculate res1
	if(one.size() > 1)
	{
		res1 = one[one.size()-1] + one[one.size()-2];
	}
	else if(one.size() > 0)
	{
		res1 = one[one.size() - 1];
	}
	//if res2 > res1 remove the 2 weight item
	if(res2 > res1)
	{
		two.pop_back();
		res += res2;
	}
	//remove at most two 1 weight items
	else
	{
		if(one.size() > 1)
		{
			one.pop_back();
			one.pop_back();
	    }
		else
			one.pop_back();
		res += res1;}
		//update the max cost for weight i
		cost[i] = res;
	}
	//odd case
	//subtract 1 to make the weight sum even
	res = 0;
	//Find the most expensive 1 weight item
	//and remove it from the list
	if(One.size() > 0)
	{
		res = One[One.size()-1];
		One.pop_back();
	}
	cost[1] = res;
	//Similar to even case
	for(int i = 3;i<=W;i+=2)
	{
		long long res1 = 0, res2 = 0;
		if(Two.size() > 0)
		{
			res2 = Two[Two.size()-1];
		}
		if(One.size() > 1)
		{
			res1 = One[One.size()-1] + One[One.size()-2];
		}
		else if(One.size() > 0)
		{
			res1 = One[One.size()-1];
		}
		if(res2 > res1)
		{
			Two.pop_back();
			res += res2;
		}
		else
		{
			if(One.size() > 1)
			{
				One.pop_back();
				One.pop_back();
			}
			else
				One.pop_back();
			res += res1;
		}
			cost[i] = res;
	}
	for (int i = 1; i <= W; i++) 
	{
		if (i > 1) printf(" ");
		printf("%lld", cost[i]);
	}
	printf("\n");

	return 0;
}