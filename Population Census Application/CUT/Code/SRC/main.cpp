/************************************************************************************************************************************
** FILENAME        : main.cpp
** DESCRIPTION     : The main function contains the login details and password into list and for entering into main menue.
**
** REVISION HISTORY :  
** DATE        NAME          REASON
**--------------------------------------------------------------------------------------------------------------------------------------
** 19 SEP      user1         creating of main function.
**
******************************************************************************************************************************************
**/
#include<iostream>
#include<string>
#include "main_menus.cpp"
#include "file_handling.cpp"
using namespace std;
//-------------------main--------------------//
/*************************************main*******************************************************************************************
** FUNCTION NAME   :  main
** DESCRIPTION     :  this function checks the login details like admin and password and also for entering into main menue
** RETURN          :  void
**
*********************************************************************************************************************************************/


int main()
{

	//puting the login details like admin and password into list;
	system("clear");
	file_to_list();
	string ch = "a";
	void (*p[2])(){Dynaland_Zone_Wise_Registration, Dynaland_Central_Representative};
	while(ch != "3")
	{
		cout<<endl<<endl<<"************** Welcome to Dynaland Population Census Protal **************"<<endl<<endl<<endl;
		cout<<"--------- Main Menu ---------"<<endl<<endl<<"1. Dynaland Zone Wise Registration"<<endl<<"2. Dynaland Central Representative"<<endl<<"3. Exit"<<endl;
		cout<<endl<<"Enter your choice"<<endl<<endl;
		
		cin.clear();
		cin.sync();
		getline(cin,ch);

		try
		{
			if(ch.length() != 1)
			{
				throw ch;
			}
		}
		catch(string a)
		{
				cout<<"Enter a single digit only"<<endl;
				system("read n");
				system("clear");
				continue;
		}
		try
		{
			if(isblank(ch[0]))
			{
				throw ch;
			}
		}
		catch(string b)
		{
			cout<<"choice cannot be blank"<<endl;
			system("read n");
			system("clear");
			continue;
		}
		
		try
		{
			if(isalpha(ch[0]))
			{
				throw ch;
			}
		
		if(stoi(ch)<1 || stoi(ch)>4)
		{
			cout<<"Invalid choice"<<endl;
		}
		else
		{
			if(stoi(ch) == 3)
			{
				break;
			}
			p[stoi(ch)-1]();
		}
		}
		catch(string ch)
		{
			cout<<"Only number is allowed!"<<endl;
		}

	}

	list_to_file();
	system("clear");
	
}
