/*
 * Shiv
 */
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int> 
#define fr(a,b) for(int i=a;i<b;i++)
using namespace std;
int n,c,barn[100005];
bool check(int dist){
	int count=1;
	int l = barn[0];
	fr(1,n){
		if(barn[i]-l>=dist){
			l = barn[i];
			count++;
		}
	}
	if(count>=c)
		return true;
	else
		return false;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c;
		fr(0,n)
			cin>>barn[i];
		sort(barn,barn+n);
		int low = barn[0];
		int high = barn[n-1];
		int mid,pos=0;
		while(low<=high){
			mid = (low+high)/2;
			if(check(mid)){
				pos = mid;
				low = mid+1;
			}
			else 
				high = mid-1;
		}
		cout<<pos<<"\n";
	}
	return 0;
}



