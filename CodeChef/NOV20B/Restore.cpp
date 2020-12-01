#include<bits/stdc++.h>
using namespace std;
int main(){
	//using sieve of erathroneses to geneneate prime numbers
	long long int m=4000005;
	bool x[m+1];
	memset(x,true,sizeof(x));
	for(long long int i=2;i*i<=m;i++)
		if(x[i]==true)
			for(long long int j=i*i;j<=m;j+=i)
				x[j]=false;
	long long int t=0;
	cin>>t;
	while(t--){
		long long int s=2;
		long long int n;
		cin>>n;
		long long int b[n];
		for(long long int i=0;i<n;i++)
			cin>>b[i];
		unordered_map<long long int, long long int> a;
		for(long long int i=0;i<n;i++){
			if(a.find(b[i])==a.end()){
				while(x[s]==0)
					s++;
				a[b[i]]=s;
				s++;
			}
		}
		for(long long int i=0;i<n;i++)
			cout<<a[b[i]]<<" ";
		cout<<"\n";
	}
	return 0;
}