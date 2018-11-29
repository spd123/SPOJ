#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n){
		string msg;
		cin>>msg;
		int t=msg.length();
		char a[t/n][n];
		int k=0;
		for(int i=0;i<t/n;i++){
			for(int j=0;j<n;j++){ 
				if(i%2==0){
				a[i][j]=msg[k];
				k++;
				}
			
				else{
				a[i][n-j-1]=msg[k];
				k++;
				}
			}
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<t/n;j++)
				cout<<a[j][i];
		cout<<"\n";
		cin>>n;
	}
	return 0;
}
