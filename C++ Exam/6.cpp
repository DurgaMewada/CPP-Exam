#include<iostream>
#include<fstream>
using namespace std;

class File_manager
{
	string data;
	public:
		void read_data()
		{
			ofstream fout;
			fout.open("file.txt");
			
			cout << "Enter ";
			getline(cin,data);
			
			fout << "File handling error !";
			
			ifstream fin;
			fin.open("file1.txt");
			
			try
			{
				if(fin)
				{
					while(getline(fin,data))
					{
						cout << data <<endl;
					}
				}
				else
				{
					throw runtime_error("File not found");
				}
			}
			catch(runtime_error error)
			{
				cout<< error.what() <<endl;
			}
			catch(...)
			{
				cout << "Error "<< endl;
				
			}
		}
};
int main ()
{
	File_manager f;
	f.read_data();
	return 0;
}