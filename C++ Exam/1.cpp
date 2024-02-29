#include<iostream>
using namespace std;
class Book
{
	 public: // ( Global variable and suppose to be privat 
	         // but in question there is mention of accessing artibutes that why public )
	         
	string title,author;
	int published_year;
	
	 	void set()
	 	{
           
	 		cout<<"Enter Title of book : ";
	 		cin.ignore();
	 		getline(cin,title);
	 		 
	 		cout<< "Enter Author name of book : ";
	 		getline(cin,author);
	 		
	 		cout << "Enter Published year of that book : ";
	 		cin >> published_year;
		}
		void get(int i)
		{
			cout << endl << "     Detail of "<<i+1<<" book "<<endl;
			cout << " Title              :"<<title<<endl;
			cout << " Author             :"<<author<<endl;
			cout << " Published year     :"<<published_year<<endl;
		}
 	
};
int main ()
{
	Book b[3];
	for(int i=0;i<3;i++)
	{
		cout <<endl;
		b[i].set();
		b[i].get(i);
	}
	return 0;
}