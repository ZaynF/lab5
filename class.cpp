#include<iostream>
#include<string>
#include<cstdlib>
#include"class.h"

using namespace std;

HugeInt::HugeInt(int a){
	int p[1000]={0};
	string s;

	for(int i=0;a!=0;i++){
		ans[i]=a%10;
		a=a/10;
	}
}

HugeInt::HugeInt(string b){
	for(int i=0;i<1000;i++){
		ans[i]=(b[i]-48)%10;
	}
}

HugeInt HugeInt::operator+(HugeInt add){
	HugeInt m;
	for(int i=1000-1;i>=0;i--){
		m.ans[i]=ans[i]+add.ans[i];
	}

	for(int j=0;j<1000;j++){
		m.ans[j+1]+=m.ans[j]/10;
		m.ans[i]%=10;
	}

	return m;
}

HugeInt HugeInt::operator-(HugeInt sub){
	HugeInt n;
	for(int i=0;i<1000;i++){
		n.ans[i]=ans[i]-sub.ans[i];
	}

	for(int j=0;j<1000-1;j++){
		if(n.ans[i]<0){
			n.ans[i+1]--;
				n.ans[i]+=10;
		}
	}

	return n;
}

ostream &operator<<(ostream& out,const HugeInt &w){
	for(int i=1000-1;i>=0;i--){
		if(w.ans[i]!=0){
			for(;i>=0;i--){
				out<<w.ans[i];
			}
		}
	}

	return out;
}

istream &operator>>(istream& in,HugeInt &w){
	int q[1000];
	string l;
	in>>l;
	for(int i=0;i<l.size();i++){
		w.ans[i]=(l[i]-48)%10;
	}

	return in;
}
