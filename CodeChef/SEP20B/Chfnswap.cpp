#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll func(ll n){
	return (n*(n+1))/2;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;
		ll sum=(n*(n+1))/2;
		ll ans1=0;
		if(sum&1)
			ans1=0;
		else{
			double temp=sum/2;
			double k=(sqrt(8*temp+1)/2) - 0.5;
			double x,i;
			x=modf(k,&i);
			ll ans=(ll)k;
			if(x==0)
				ans1=func(ans-1) + func(n-ans-1);
			ans1+=n-ans;
		}
		cout<<ans1<<"\n";
	}
}





