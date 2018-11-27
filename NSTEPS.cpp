#include<bits/stdc++.h>
using namespace std;
void number(int x,int y){
	if(x==y || x-y==2){
		if(x%2==0 && y%2==0)
			cout<<x+y<<"\n";
		else if(x%2!=0 && y%2!=0)
			cout<<x+y-1<<"\n";
		else if(x==1 || y==1)
			cout<<x*y<<"\n";
	}
		else
			cout<<"No Number\n";
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		number(x,y);
	}
	return 0;
}


