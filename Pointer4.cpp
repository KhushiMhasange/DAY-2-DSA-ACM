#include<bits/stdc++.h>
using namespace std;

struct Data
{
	int x;
	char c;
	float f; 

void Printer()
{
	cout<<x<<endl;
	cout<<c<<endl;
	cout<<f<<endl;
}
};

int main()
{
 struct Data d;
 d.x = 4;
 d.c = 'c';
 d.f = 2.5;
 d.Printer();	
}
