/**********************************************************************************************************************
**      FILENAME      :       central_rel.cpp
**
**    DESCRIPTION     :       This File contains all the data related to central command like change ID and password
**                            and Data maintainance also contains menu lists for various reports and queries.
** Revision History   :
** DATE                NAME                   REASON
**---------------------------------------------------------------------------------------------------
**12 SEP 2022        cguser1            Creation of File , Writing Function definitions.
**
***********************************************************************************************************************/
#include<iostream>
#include "change_menu.cpp"
#include "data_maintainance_menu.cpp"
#include "report_menu.cpp"
#include "queries_menu.cpp"
using namespace std;

/****************************************************************************************************
**
**    FUNCTION NAME   :    Change_id_password
**    DESCRIPTION     :    This function contains menu list for Change ID and Password having options
**                         like Change Admin_id, Change Password
**    RETURN          :    Success
**
*********************************************************************************************************/
int Change_id_password()
{
	Change chg;
	system("clear");
	string temp;
	string ch = "a";
	while(ch != "3")
	{

		cout<<endl<<endl<<"--------- Select the option : What you want to change ----------"<<endl<<endl;
		cout<<endl<<"1. Change Admin ID"<<endl<<"2. Change Password"<<endl<<"3. <-Back"<<endl;

		cin.clear();
		getline(cin,ch);
		try{
			if(ch.length() != 1)
			{
				throw ch;
			}
		}
		catch(string a)
		{
			cout<<"Enter a single digit only"<<endl;
			continue;
		}
		try{
			if(isblank(ch[0]))
			{
				throw ch;
			}
		}
		catch(string b)
		{
			cout<<"choice cannot be blank"<<endl;
			continue;
		}
		try{
			if(isalpha(ch[0]))
			{
				throw ch;
			}


			switch(ch[0])
			{
				case '1' :{ chg.Change_id();
					getline(cin,temp);}
					 break;
				case '2' : {chg.Change_password();
					getline(cin,temp);}
					 break;
				case '3' : break;
				default: cout<<"Invalid Choice!"<<endl;
			}
		}
		catch(string ch)
		{
			cout<<"Invalid Choice! (only numbers are allowed!)"<<endl;
			continue;
		}

	}
	system("clear");
	return EXIT_SUCCESS;

}

/****************************************************************************************************
**
**    FUNCTION NAME   :    Data_Maintainance
**    DESCRIPTION     :    This function contains menu list for data maintainance like View,Modify,Delete.
**    RETURN          :    Success
**
*********************************************************************************************************/
int Data_Maintainance()
{	
	system("clear");
	int (*p[3])() = {Citizen_Data_View, Citizen_Data_Delete, Citizen_Data_Modify};
	string ch = "a";
	while(ch != "4")
	{
		
		cout<<endl<<endl<<"---------  Select the operation ----------"<<endl<<endl;
		cout<<endl<<"1. Fetch the data of a citizen"<<endl<<"2. Delete the data of a citizen"<<endl<<"3. Modify the data of a citizen"<<endl<<"4. <-Back"<<endl;

		cin.clear();
		getline(cin,ch);
		try{
			if(ch.length() != 1)
			{
				throw ch;
			}
		}
		catch(string a)
		{
			cout<<"Enter a single digit only"<<endl;
			continue;
		}
		try{
			if(isblank(ch[0]))
			{
				throw ch;
			}
		}
		catch(string b)
		{
			cout<<"choice cannot be blank"<<endl;
			continue;
		}
		try{
			if(isalpha(ch[0]))
			{
				throw ch;
			}


			if(stoi(ch)<1 || stoi(ch)>4)
			{
				cout<<"Invalid Input"<<endl;
			}
			else
			{
				if(stoi(ch) == 4)
				{
					break;
				}
				p[stoi(ch)-1]();
				string temp;
				getline(cin,temp);
			}
		}
		catch(string ch)
		{
			cout<<"Invalid Input! (Only numbers are allowed)"<<endl;
			continue;
		}
			
		}
		system("clear");
		return EXIT_SUCCESS;
	}

/****************************************************************************************************
**
**    FUNCTION NAME   :    Reports
**    DESCRIPTION     :    This function contains menu list for various reports like Age group report
**                         ,Gender report, Report for farming population in country,etc
**    RETURN          :    Success
**
*********************************************************************************************************/
int Reports()
{
	Report r;
	system("clear");
	string ch = "a";
	while(ch != "5")
	{

		cout<<endl<<endl<<"---------  Select an option to create report ----------"<<endl<<endl;
		cout<<endl<<"1. Age Group Report of Dynaland"<<endl<<"2. Gender Report of Dynaland"<<endl<<"3. Below Poverty Line Zone Wise Report of Dynaland"<<endl<<"4. Farming Population Report of Dynaland"<<endl<<"5. <-Back"<<endl;

		cin.clear();
		getline(cin,ch);
		try{
			if(ch.length() != 1)
			{
				throw ch;
			}
		}
		catch(string a)
		{
			cout<<"Enter a single digit only"<<endl;
			continue;
		}
		try{
			if(isblank(ch[0]))
			{
				throw ch;
			}
		}
		catch(string b)
		{
			cout<<"choice cannot be blank"<<endl;
			continue;
		}
		try{
			if(isalpha(ch[0]))
			{
				throw ch;
			}


			switch(ch[0])
			{
				case '1' : r.Age_Group_Report();
					 break;
				case '2' : r.Gender_Report();
					 break;
				case '3' : r.BPL_Zone_Wise_Report();
					 break;
				case '4' : r.Farming_Population_Report();
					 break;
				case '5' : break;	 
				default: cout<<"Invalid Choice!"<<endl;	 
			}
		}
		catch(string ch)
		{
			cout<<"Invalid input! (Only numbers allowed)"<<endl;
		}
		}
		system("clear");
		return EXIT_SUCCESS;
	}

/****************************************************************************************************
**
**    FUNCTION NAME   :    Queries
**    DESCRIPTION     :    This function contains menu for queries having options like Literacy rate of Dyanaland,
**			   Zone withe highest Literacy rate,Average income of below poverty line , etc
**    RETURN          :    Success
**
*********************************************************************************************************/
int Queries()
{
	Query q;
	system("clear");
	string ch = "a";
	while(ch != "6")
	{

		cout<<endl<<endl<<"---------  Select a Query  ----------"<<endl<<endl;
		cout<<endl<<"1. Literacy Rate of a Dynaland"<<endl<<"2. Zone with highest Literacy Rate"<<endl<<"3. Below Poverty Line average Income"<<endl<<"4. Rural and Urban Population"<<endl<<"5. Zone with highest male and female population"<<endl<<"6. <-Back"<<endl;

		cin.clear();
		getline(cin,ch);
		try{
			if(ch.length() != 1)
			{
				throw ch;
			}
		}
		catch(string a)
		{
			cout<<"Enter a single digit only"<<endl;
			continue;
		}
		try{
			if(isblank(ch[0]))
			{
				throw ch;
			}
		}
		catch(string b)
		{
			cout<<"choice cannot be blank"<<endl;
			continue;
		}
		try{
			if(isalpha(ch[0]))
			{
				throw ch;
			}


			switch(ch[0])
			{
				case '1' : q.Literacy_Rate();
					   break;
				case '2' : q.Zone_with_highest_literacy();
					   break;
				case '3' : q.BPL_average_income();
					   break;
				case '4' : q.Rural_and_Urban_Population();
					   break;
				case '5' : q.Zone_with_highest_male_and_female();
					   break;
				case '6' : break;
				default: cout<<"Invalid Choice!"<<endl;
			}
		}
		catch(string ch)
		{
			cout<<"Invalid input! (Only numbers allowed)"<<endl;
			continue;
		}
	}

	system("clear");
	return EXIT_SUCCESS;

}
