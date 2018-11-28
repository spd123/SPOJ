#include<bits/stdc++.h>
using namespace std;
void xx(int x,int y,int z){
	if(abs(y-x)==abs(z-y))
		cout<<"AP"<<" "<<z+(z-y)<<"\n";
	else{ 
		if((x<y)&&(abs(x)>abs(y)))
		cout<<"GP"<<" "<<z/(x/y)<<"\n";
		else
		cout<<"GP"<<" "<<z*(y/x)<<"\n";
		}
}

int main(){
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)){
		if(a==0 && b==0 && c==0)
			break;
		xx(a,b,c);
	}
	return 0;
}
