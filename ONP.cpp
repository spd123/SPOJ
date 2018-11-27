#include<bits/stdc++.h>
using namespace std;
int precedance(char c){
	if(c=='^')
		return 3;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return -1;
}
void onp(string exp){
	string new_exp;
	stack<char>s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='(')
			s.push(exp[i]);
		else if(exp[i]>='a' && exp[i]<='z')
			new_exp+=exp[i];
		else if(exp[i]==')'){
			while(s.top()!='(' && !s.empty()){
				new_exp+=s.top();
				s.pop();
			}
			if(s.top()=='(')
				s.pop();
		}
		else {
			while(!s.empty() && (precedance(s.top())>=precedance(exp[i]))){
			new_exp+=s.top();
			s.pop();
			}
			s.push(exp[i]);
		}
		}
		cout<<new_exp<<"\n";
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		string expression;
		cin>>expression;
		onp(expression);
	}
	return 0;
}

