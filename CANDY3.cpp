#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		cout<<"\n";
		long long sum=0;
		long long n,temp,m;
		scanf("%lld",&n);
	        m=n;	
		while(n--){
			scanf("%lld",&temp);
			sum=(sum+temp)%m;
		}
		if(sum==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
