#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	while(n!=-1){
		int sum=0,ans=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n==0){
			sum/=n;
			for(int i=0;i<n;i++){
				if(sum>a[i])
				ans+=(sum-a[i]);
			}
			cout<<ans<<"\n";
		}
		else
			cout<<-1<<"\n";
		cin>>n;
	}
	return 0;
}



