#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class labirintData{
	

	
	int v[16][16]={ {0} };
    public:void init()
	{
		string blank;
		ifstream myfile;
		myfile.open("base.txt");
		for (int i =1; i < 16; i++)
		{
			for (int j =1; j < 16; j++)
			{
				myfile >> v[i][j];
			} getline (myfile,blank);
		}
		
		myfile.close();
	}
	
	
	public:void kiir()
	{
		
		for (int i =1; i < 16; i++)
		{
			for (int j =1; j < 16; j++)
			{
				if (v[i][j] == 0 ) { cout<<" "; }
				if (v[i][j] == 1 ) { cout<<"█"; }
			}cout<<endl;
		}
	}
	private:
 };
int main()
{
	labirintData uj;
	uj.init();
	uj.kiir();
	
}
