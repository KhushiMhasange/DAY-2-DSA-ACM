#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ar[5] = {10,20,30,40,50};
	int*p = ar;
	cout<<ar<<endl;
	cout<<*p<<endl;
	cout<<&ar[0]<<endl;
	cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<" "<<p[3]<<" "<<p[4]<<endl;
}
