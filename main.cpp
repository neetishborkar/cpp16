//============================================================================
// Name        : 51.cpp
// Author      : neetish borkar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Math
{
public:
    double a,b;
    double c;                            //instance variable
	 void input()
	{														
//if variables are defined in a function it is a local variable
		 cout<<"Enter first number"<<endl;
		 cin>>a;
		 cout<<"Enter secod number"<<endl;
		 cin>>b;
		 add();
		 sub();
		 div();
	}
	void add()
	{
		c=a+b;
		cout << "result"<<c<< endl;
	}
	void sub()
	{
		c=a-b;
		cout << "result"<<c<< endl;
	}
	void div()
	{
		c=a/b;
		cout << "result"<<c<< endl;
	}
};
int main() {
	Math math; 																				//object creation
	math.input();
return 0;
}

