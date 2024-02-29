#include<iostream>
using namespace std;
class Shape 
{
	public:
		virtual void area()=0;
		virtual void draw()=0;
	
};
class Circle :public Shape
{
	public:
		void area()
		{
			cout << endl;
			cout << "   Area of Circle is (2 x pi x radius x radius) " << endl;
		}
		void draw()
		{
			cout << "   Imagine a Drawing of circle " <<endl;
		}
	
};
class Rectangle :public Shape
{
     public:
		void area()
		{
			cout << endl;
			cout << "   Area of Rectangle is (length X width) " << endl;
		}
		void draw()
		{
			cout << "   Imagine a Drawing of rectangle " <<endl;
		}	
};
int main()
{
	Shape *s[2];
	Circle c;
	Rectangle r;
	
	s[0]=&c;
	s[1]=&r;
	
	for (int i=0;i<2;i++)
	{
		s[i]->area();
		s[i]->draw();
		
	}
	return 0;
}