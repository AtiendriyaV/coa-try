#include<iostream>
using namespace std;
template <class T>
void MRSWAP( T a, T b)
{
	cout<<"\n BEFORE SWAPPING...\n A="<<a;
	cout<<"  and B= "<<b<<endl;
	T Temp=a;
	a = b;
	b = Temp;
	cout<<"\n AFTER SWAPPING ....\n A = "<<a;
	cout<<" and B = "<<b<<endl;
}

int main()
{
	MRSWAP(10,16);
	MRSWAP("BRUCE","WAYNE");
}
