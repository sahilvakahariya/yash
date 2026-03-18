#include<iostream>
using namespace std;
class calculator
{
	public:
	int a,b;
	void getdata()
	{
		cout<<"\n enter two number";
		cin>>a>>b;
	}
	
	void add()
	{
		cout<<"\n addition =" << a+b << endl;
	}
	void sub()
	{
		cout<<"\n substration =" << a-b << endl;
	}
	void mul()
	{
		cout<<"\n multiplication =" << a*b << endl;
	}
	void div()
	{
		if(b!= 0)
		cout<<"\n division =" << a/b << endl;
		else
		cout<<"\n division is not possible" << endl;
		
	}
};
int main()
{
	calculator c;

	c.getdata();
	c.add();
	c.sub();
	c.mul();
	c.div();
	return 0;
}

	

