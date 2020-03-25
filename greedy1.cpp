//https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/
//counting money problem
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long

vector<int>vec;
int main()
{
	int arr[]={1,2,5,10,50,100};
	int n=sizeof(arr)/sizeof(arr[0]);

    int deno;
    cin>>deno;
    while(deno)
    {
    	int i=n-1;
    	while(i>=0)
    	{
    		if(deno>=arr[i])
    		{
    			deno=deno-arr[i];
    			vec.push_back(arr[i]);
    			break;
    		}
    		else
    		{
    			i--;
    		}
    	}
    }
    for(int i=0;i<vec.size();i++)
    	cout<<vec[i]<<" ";
}
