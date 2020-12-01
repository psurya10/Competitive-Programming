#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007


void answer();

int main(){
    answer();
    return 0;
}
ll power1(ll x,ll n){
	ll res=1;
	while(n){
		if(n&1)
			res=res*x%mod;
		n=n/2;
		x=x*x%mod; 
	}
	return res;
}

ll div1(ll a, ll b){
	return (a% mod *(power1(b,mod-2)%mod))%mod;
}

ll sol1(ll n, ll r){
	ll ans=1;
	ll k=min(r, n-r);
	for(int i=0;i<k;i++){
		ans=(ans%mod*(n-i)%mod)%mod; 
	    ans=div1(ans,i+1); 
	}
	return ans%mod;
}


void answer(){
	int t;
	cin>>t;
	while(t-->0){
		ll n;
		cin>>n;
		ll a[n], ans;
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll max=0, max_value=0;
		for(int i=0;i<n;i++){
			if(max<a[i]) 
				max=a[i];
		}
		for(int i=0;i<n;i++){
		    if(max==a[i]) 
		    max_value++; 
		}

		if(n==1){
			cout<<2<<'\n';
			continue;
		}
		if(max_value%2!=0)
			ans=power1(2,n)%mod;
		else{
			ans=power1(2,n)%mod-((power1(2,n-max_value)%mod)*sol1(max_value, max_value/2)%mod)%mod;
		} 
		if(ans<0)
			ans=(ans+mod)%mod;
		cout<<ans%mod<<'\n';
	}
}
