#include<iostream>
#include<string>

using namespace std;

class HugeInt{
	public:
		int n;
		int i;
		HugeInt(int a=0);
		HugeInt(string);
		HugeInt operator+(HugeInt);
		HugeInt operator-(HugeInt);

		friend ostream &operator<<(ostream& ,const HugeInt&);
		friend istream &operator>>(istream& ,HugeInt&);

		int ans[1000];
		//int y[1000];
		//int z[1000];
		//int ans[1000];
};


