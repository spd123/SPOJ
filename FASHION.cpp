#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;i++)
			cin>>m[i];
		for(int i=0;i<n;i++)
			cin>>w[i];
		sort(m,m+n);
		sort(w,w+n);
		int sum=0;
		for(int i=0;i<n;i++){
			sum += m[i]*w[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}

