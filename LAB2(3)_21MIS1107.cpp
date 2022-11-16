#include<iostream>
using namespace std;
template < class T >
class MR
{
	public:
		T a,b;
		void MRSWAP(T a, T b)
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
	MR<float>ob;
	ob.MRSWAP(10.33,16.44);
}
