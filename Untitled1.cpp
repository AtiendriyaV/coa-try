#include<iostream>
using namespace std;
class lion
{
	public:
		int const static legs=4;
		void eat()
		{
			cout<<"\n lion is eating ";
		}
};
class tiger:public lion
{
	public:
		string colour ="brown";
		void roar()
		{
			cout<<"\n tiger is roaring";
			
		}
};
class liger:public tiger
{
	public:
		void newspecis()
		{
			cout<<"\n liger is new";
		}
		
};
int main()
{
	lion l;
	tiger t;
	liger r;
	l.eat();
	t.roar();
	r.newspecies();
}


