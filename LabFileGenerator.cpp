#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


int random(int from, int to){
    return rand() % (to - from + 1) + from;
}

int v[16][16]={ {1} };


void init(){
	
	for (int i =1; i < 16; i++)
		{
			for (int j =1; j < 16; j++)	{	v[i][j] = 1;	} }
	
}
void CustomLabirint ()

{
	
	int irany = random(1,4);
		for (int i =1; i < 16; i++)
		{
			for (int j =1; j < 16; j++)
			{
				
				if (irany == 1 )
				{
						
					v[i][j] = 0;
				}
				
			    irany = random(1,4);

				
			} 
		}
		
	
}


void filebaIr()
{
		
	  string a="base.txt";
		ofstream o(a);
		for (int i =1; i < 16; i++)
		{
			for (int j =1; j < 16; j++)
			{
				  o << v[i][j]<<" ";
			}  o<<endl;
		}
		
	
}

int main()
{
   srand(time(0)); 
    init();
  CustomLabirint();

 // cout<<v[5][6];
   filebaIr();


 
  

}
