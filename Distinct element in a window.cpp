#include <bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}


void countDistinct(int a[], int k, int n)
{
    for(int i=0;i<n-k+1;i++)
        {
            set<int> s(a+i,a+k+i);                                 
            
                cout<<s.size()<<" ";                             
 
        }
}