#include<iostream>
using namespace std;
template < class T >
class MR
{
	public:
		int a,b;
		void MRSWAP(int a, int b)
		{
			cout<<"\n BEFORE SWAPPING...\n A="<<a;
			cout<<"  and B= "<<b<<endl;
			T Temp=a;
			a = b;
			b = Temp;
			cout<<"\n AFTER SWAPPING ....\n A = "<<a;
			cout<<" and B = "<<b<<endl;	
		}		
};

int main()
{
	MR<int>ob;
	ob.MRSWAP(10,16);
}
