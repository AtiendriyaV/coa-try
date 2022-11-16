#include<iostream>
using namespace std;
#define max 5
template <class T>
class MRSTACK
{
	int top;
	T item;
	 T Arr_stk[max];
	
	public:
		MRSTACK()
		{
			top=0;
		}
		void push(int E)
		{
			if(top==max)
			{
				cout<<"\n Stack is full";
				exit(0);
			}
			else
			{
				top=top+1;
				Arr_stk[top]=E;
			}
		}
		T pop()
		{
			if (top==0)
			{
				cout<<"\n Stack is full";
				exit(0);
			}
			else
			{
			 T E= Arr_stk[top];
				top=top-1;
				return E;
			}
		}
		void Display()
		{
		    for(int i=top;i>0;i--)
		    cout<<Arr_stk[i]<<" ";
	}
};
int main()
{
	MRSTACK <int> ob;
	ob.push(10);
	ob.push(20);
	ob.push(30);
	ob.push(5);
	ob.push(100);
	ob.Display();
	
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	cout<<"\n THE ITEM  POPED IS :"<<ob.pop()<<endl;
	ob.Display();
}
