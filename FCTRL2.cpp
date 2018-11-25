#include<bits/stdc++.h>
using namespace std;
#define max 500
int multiply(int result[],int size,int number){
	int carry=0;
	for(int i=0;i<size;i++){
	int product = carry + number*result[i];
	result[i]= product%10;
	carry = product/10;
	}
	while(carry>0){
		result[size]=carry%10;
		carry/=10;
		size++;
	}
	return size;
}

void factorial(int n){
	int result[max];
	result[0]=1;
	int size=1;
	for(int i=2;i<=n;i++){
		size=multiply(result,size,i);
	}
	for(int j=size-1;j>=0;j--)
		cout<<result[j];

}
int main(){
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    factorial(n);
	    cout<<"\n";
    }
    return 0;
}

