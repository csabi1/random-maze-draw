#include <iostream>
using namespace std;


void Welcome ()
{
	cout << "-------------------------------"<<endl;
	cout << " WELCOME " <<endl;
	cout << "This is Labirint v1.0"<<endl;
    cout << "-------------------------------"<<endl;
	
	
}

void LabirintusRajzolas(){ system("./draw");}
void LabirintusGeneralas()
{	system("./filegen");
}


void Menu (){
	Welcome();
	bool loop = true;
	do {
	int a=0;
	cout<< "This is the MENU " ; 
	cout<<endl<<"If you wish to generate a new Labirint press 2"<<endl;
	cout<<endl<<"If you wish to draw current Labirint press 1"<<endl;
	cout<<endl<<"If you wish to QUIT press 5"<<endl;
	cin>>a;
	
	if (a == 5 ) {break;}
	if (a == 1 ) { LabirintusRajzolas();
	} else { if (a==2) {LabirintusGeneralas();} 
		
		    else {cout<<"You gave an invalid MENU number";
				loop = true;}
		}
	
	
	}while (loop);
	
}

int main()
{
	//ShellExecute(GetDesktopWindow(), "open", "/home/wwitdtstl/Labirintus", NULL, NULL, SW_SHOWNORMAL);
	
   Menu();
	
	
	
}
