#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void displayDetails()
		{
			cout << "     Details of animal " << endl <<endl;
		}
};
class Dog : public Animal
{
	public:
		virtual void displayDetails()
		{
			cout << "     Dogs are wild " << endl;
		}	
};
class Cat : public Animal
{
	public:
		virtual void displayDetails()
		{
			cout << "     Cat are cute " << endl;
		}	
};

int main()
{
	Animal *a[2];
	Animal m;
	Cat c;
	Dog d;
	a[0]=&c;
	a[1]=&d;
	
	m.displayDetails();
	a[0]->displayDetails();
	a[1]->displayDetails();
	return 0;
}