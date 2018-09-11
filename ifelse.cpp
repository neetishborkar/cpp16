#include<iostream>
using namespace std;
class Control
{
	public:
		int x;
	void ifelseDemo()
	{
		cout<<"Enter the value Number :"<<endl;
		cin>>x;
		if (x%2==0)			//"=="is to compare two numbers value "=" is used to assign the value to a variable
			{
				cout<<"num : "<< x << " is even number"<<endl;
			}
		else
			{
				cout<<"num : "<< x << " is odd number" <<endl;
			}
	}
};
int main()
{
	Control ifelse;
	ifelse.ifelseDemo();
return 0;
}


 
