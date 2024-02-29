#include<iostream>
using namespace std;
class Person
{
	string name,address;
	int age;
	public:
		Person(string name,string address,int age)
		{
			this->name=name;
			this->address=address;
			this->age=age;	
		}
		void set()
		{
			// input in taken below
		}
		void get(int i)
		{
				cout << endl << "     Detail of "<<i+1<<" Person "<<endl;
				cout << "Name       : "<<this->name<<endl;
				cout << "Address    : "<<this->address<<endl;
				cout << "Age        : "<<this->age<<endl;		
		}
	
};
int main()
{
	int n,i;
	cout << "Enter number of person for details :";
	cin >> n;
	
	string name,address;
	int age;
	
	for(i=0;i<n;i++)
	{
            cout <<endl;		
	        cout<<"Enter Name of person : ";
	 		cin.ignore();
	 		getline(cin,name);
	 		 
	 		cout<< "Enter Address of person : ";
	 		getline(cin,address);
	 		
	 		cout << "Enter Age of person : ";
	 		cin >> age;
	 		
	 		Person p(name,address,age);
	 			p.get(i);
	 			cout<<endl;
	}
	
	return 0;
}