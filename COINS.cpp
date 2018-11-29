#include<bits/stdc++.h>
using namespace std;
map<long long,long long>m;
long long coins(long long n){
	if(n<12)
		return n;
	if(m[n]!=0)
		return m[n];
	else
		m[n]= max(coins(n/2)+coins(n/3)+coins(n/4),n);
	return m[n];
}
int main(){
	long long n;
	while(cin>>n){
	long long ans=coins(n);
	cout<<ans<<"\n";
	}
	return 0;
}
