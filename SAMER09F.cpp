#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
	return (n==1 || n==0)? 1:n*fact(n-1);
}

int main(){
	int t;
	while(cin>>t && t!=0){
		int result=0;
		for(int i=1;i<=t;i++){
			result+=i*i;
		}
		cout<<result<<"\n";
	}
	return 0;
}
