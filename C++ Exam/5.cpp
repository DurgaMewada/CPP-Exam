#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		void setter()
		{
			cout << "Enter value of a : ";
			cin >> a;
			
			cout << "Enter value of b : ";
			cin >> b;
		}
		void getter()
		{
			cout << "   Result " << endl;
		}
		Complex operator-(Complex &c2)
		{
			Complex temp;
			temp.a=a-c2.a;
			temp.b=b-c2.b;
			
			cout <<endl<< "     "<< temp.a<<"+"<<temp.b;
			return temp;
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.setter();
	c2.setter();
	c3=c1-c2;
	c3.getter();
 
	return 0;
}