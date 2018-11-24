#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int sum=0;
		while(n>0){
			sum += n/5;
			n/=5;
		}
		cout<<sum<<"\n";
	}

		return 0;
}
