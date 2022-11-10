#include<bits/stdc++.h>
using namespace std;

int call_by_value(int n)
{
	cout<<"Address of n in call_by_value function : "<<&n<<endl;
	n *= n;
	return n;
}

void call_by_reference_pointer(int* n)
{
	cout<<"address of n in call_by_reference function : "<<n<<endl;
	*n *= *n;
}

void call_by_reference_address(int& n)
{
	cout<<"address of n in call_by_reference function : "<<&n<<endl;
}

int main()
{
	int n = 8;
	cout<<"Address of n in main() : "<<&n<<endl;
	call_by_reference_pointer(&n);
	call_by_reference_address(n);
	cout<<"Ans : "<<call_by_value(n)<<endl;
	cout<<"Value of n :"<<n<<endl;
	return 0;
}
