///INHERITANCE///
#include<iostream>
using namespace std;

class Animal
{
	public:
		int const static legs=4;
		void Eat()
		{
			cout<<"\nANIMAL IS EATING";
		}
};
class Dog: public Animal
{
	public:
		void bark()
		{
			cout<<"\n DOG IS BARKING";
		}
};

class BabyDog : public Dog
{
	public:
		void weep()
		{
			cout<<"\nBABYDOG IS WEEPING";
		}
};

class Lion : public Animal
{
	public:
		void roar()
		{
			cout<<"\nLION IS ROARING";
		}
};

class Tiger : public Animal
{
	public :
		void roar()
		{
			cout<<"\nTIGER IS ROARING";
		}
};

class Liger : public Lion , public Tiger
{
	public:
		void roar()
		{
			cout<<"\nLIGER IS ROARING";
		}
};

int main()
{
	Dog d;
	d.bark();
	d.Eat();
    
    BabyDog b;
    b.weep();
    Lion l;
    l.roar();
    Tiger t;
    t.roar();
    Liger L;
    L.roar();
}
