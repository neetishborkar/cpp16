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
		if (x<35)			//"=="is to compare two numbers value "=" is used to assign the value to a variable
			{
				cout<<"Fail"<<endl;
			}
		else if (x>=35 && x<60)
			{
				cout<<"Pass"<<endl;
			}
		else if (x>=60 && x<75)
			{
				cout<<"First Class"<<endl;
			}
		else
			{
				cout<<"Dinstinction"<<endl;
			}
	}
};
int main()
{
	Control ifelse;
	ifelse.ifelseDemo();
return 0;
}


 
