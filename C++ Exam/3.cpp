#include<iostream>
using namespace std;
class Animal
{
	string name,sound;
	public:
		void setter()
		{
			cout << "     Press Enter  ";
			getline(cin,name);
		}
		void getter()
		{
			cout << "   Sounds of animals :"<< endl;
	    }
	    virtual void make_sound()=0;
    
};
class Dog : public Animal
{
	public:
	void make_sound()
	{
		cout << " Dog sound = 'Bow Bow' "<<endl;
	}
};
class Cat : public Animal
{
	public:
	void make_sound()
	{
		cout << " Cat sound = 'meeawo' "<<endl;
	}
};

int main()
{
	Dog d;
	d.make_sound();
	
	Cat c;
	c.make_sound();
	return 0;
}