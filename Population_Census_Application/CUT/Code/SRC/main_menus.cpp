/*
 * **************************************************************************************************
 * *      FILENAME            :             main_menus.cpp
 *
 * *      DESCRIPTION         : 	    This file contains of the main menu which will be seen as                                             as soon as the program gets executed. It contains zone
 * 					    wise registration function definition and central 
 * 					    representative function definition.
 *
 *    Revision History   :
 *    DATE		NAME		REASON
 *    ----------------------------------------------------------------------------------------------
 *    12 SEP 2022	cguser1		Showing the menus options of zone and central representative

 ***************************************************************************************************
*/
#include<iostream>
#include<string>
#include<thread>
#include "authenticate_functions.cpp"
#include "zone_rel.cpp"
#include "central_rel.cpp"
using namespace std;

/*****************************************************************************************************
 *    FUNCTION NAME   :   Dynaland_Zone_Wise_Registration
 *    DESCRIPTION     :   This function shows the in detailed menu of zone representative. So the 
 *    			  zone representative can get into that zone registration.
 *    RETURN	      :   void
 *
 * **************************************************************************************************
 * */

void Dynaland_Zone_Wise_Registration()
{
		int (*p[3])() = {Zone_1_Citizen_Register, Zone_2_Citizen_Register, Zone_3_Citizen_Register};
	string ch = "a";
	while(ch != "4")
	{
	system("clear");
		cout<<endl<<endl<<"---------  Please select the Zone of Citizen Registration ----------"<<endl<<endl;
		cout<<endl<<"1. Zone 1 citizen registration"<<endl<<"2. Zone 2 citizen registration"<<endl<<"3. Zone 3 citizen registration"<<endl<<"4. <-Back to Main Menu"<<endl;

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
			   cout<<"Invalid Input"<<endl;
			   system("read n");
			   system("clear");
			   continue;
			   }
			   else
			   {
			   if(stoi(ch) == 4)
			   {	
			   break;
			   }
			   }
			thread th(p[stoi(ch)-1]);
			th.join();
			string temp;
			getline(cin,temp);
		}	
		
		catch(string ch)
		{
			cout<<"Invalid Input! (Only numbers are allowed)"<<endl;
		}
	}

	system("clear");
}

int login_page();


/*****************************************************************************************************
 *    FUNCTION NAME   :   Dynaland_Central_Registration
 *    DESCRIPTION     :   This function shows the in detailed menu of Central representative. So the 
 *    			  Central representative can work on the data.
 *    RETURN	      :   void
 *
 * **************************************************************************************************
 * */


void Dynaland_Central_Representative()
{
		//system("clear");

	
	if(login_page() == 1)
	{
		system("clear");
		string temp;
		cin.clear();
		getline(cin,temp);
	
		int (*p[4])() = {Change_id_password,Data_Maintainance, Reports, Queries};
		string ch = "a";
		while(ch != "5")
		{
			cout<<endl<<endl<<"---------  select the Option ----------"<<endl<<endl;
			cout<<endl<<"1. Change admin ID or password"<<endl<<"2. Data Maintainance"<<endl<<"3. Reports"<<endl<<"4. Queries"<<endl<<"5. <-Back to Main Menu"<<endl;
		
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


			if(stoi(ch)<1 || stoi(ch)>5)
			{
				cout<<"Invalid Input"<<endl;
				system("read n");
				system("clear");
			}
			else
			{
				if(stoi(ch) == 5)
				{

					break;
				}
				p[stoi(ch)-1]();
			}
		}
		catch(string ch)
		{
			cout<<"Invalid input! (only numbers are allowed)"<<endl;
		}

		}
	}
	else
	{
		string temp;
		getline(cin,temp);
	}
	system("clear");
	
}


/*****************************************************************************************************
 *    FUNCTION NAME   :   login_page
 *    DESCRIPTION     :   This function is used for authentication of central representative. If the 
 *    			  if representative enters correct credentials then function returns 1.
 *    RETURN	      :   Return 1 if successful
 *
 * **************************************************************************************************
 * */

int login_page()
{
	string id;
	string pass_wd;
	int chance = 3;
	while(chance>0)
	{
	string trying = "a";
	system("clear");
	cout<<endl<<endl<<"*******************   Login Page  ********************"<<endl<<endl<<endl;
	cout<<"Enter your Admin ID : "<<endl;
	cin>>id;
	cout<<"Enter your password : "<<endl;
	cin>>pass_wd;

	
	for(Authenticate a : aut)
	{
		if(a.get_admin_id() == id)
		{
			if(a.get_password() == pass_wd)
			{
			//	return EXIT_SUCCESS;
				return 1;
			}
		}
	}
	
	cout<<endl<<"Invalid Admin ID or Password!"<<endl;

	 

	chance--;
	if(chance == 0)
	{
		cout<<endl<<"You have reached maximum number of tries!"<<endl;
		cout<<"Getting back to main menu!"<<endl;
		system("read n");
		//return EXIT_FAILURE;
		return 0;
	}
	cout<<endl<<"Want to try again then press 1 : "<<endl;
		string temp;
		getline(cin,temp);
		
		cin.clear();
		cin.sync();
                getline(cin,trying);
		
                try
                {
                        if(trying.length() != 1)
                        {
                                throw trying;
                        }
                }
                catch(string a)
                {
				cout<<a.length()<<endl;
                                cout<<"Enter a single digit only"<<endl;
                                system("read n");
                                system("clear");
                                continue;
                }
                try
                {
                        if(isblank(trying[0]))
                        {
                                throw trying;
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
                        if(isalpha(trying[0]))
                        {
                                throw trying;
                        }

		}
		catch(string ch)
		{
			cout<<"Invalid input! (Only number expected)"<<endl;
		
		}
		if (stoi(trying) != 1)
		{
			//return EXIT_FAILURE;
			return 0;
		}
		
		//system("read n");
	}
	//return EXIT_FAILURE;
	return 0;
}



