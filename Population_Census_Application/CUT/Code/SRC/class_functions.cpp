/****************************************************************************************************
**      FILENAME      :       class_functions.cpp
**
**    DESCRIPTION     :       This File contains all the member functions definitions of class citizen
**			      that are used to create , view and modify the citizen details.
**                            view , and modify 
**
** Revision History   :
** DATE                NAME                   REASON
**---------------------------------------------------------------------------------------------------
**13 SEP 2022        cguser20            Creation of File , Writing Function definitions.
**
*******************************************************************************************************/
#include "validation_file.cpp"
#include "class.hpp"
#include<iostream>
#include<string>
using namespace std;


/****************************************************************************************************
**
**    FUNCTION NAME   :    Citizen_Data_Create
**    DESCRIPTION     :    This function creates the database for Citizen containing ssid,name,age,gender,
**                         annual income,occupation,house type,etc.
**    RETURN          :    Void.. 
**
*********************************************************************************************************/
void Citizen::Citizen_Data_Create(char zid[])
{
	//create
	system("clear");
	strcpy(zone_id,zid);
	while(1)
	{
		int flag = 0;
		cout<<"Enter your ssid (It will be a 9 digit number): "<<endl;
		cin.clear();
		cin.getline(ssid,10);
		if(check_ssid(ssid) == 1)
		{
			for(Citizen c : li)  
			{
				if(strcmp(c.ret_ssid(),ssid) == 0)
				{
					cout<<"This ssid "<<ssid<<" already exists!"<<endl;
					flag = 1;
				}
			}
			if(flag == 0)
			{
				break;
			}
		}
	}
	while(1)
	{
		cout<<"Enter your name : "<<endl;
		cin.clear();
		cin.getline(name,20);
		if(check_name(name) == 1)
                {
                        break;
                }

	}
	while(1)
	{
		cout<<"Enter your age : "<<endl;
		cin.clear();
		cin.getline(age,4);
		if(check_age(age) == 1)
                {
                        break;
                }
	}
	while(1)
	{
		cout<<"Enter your gender (m : male,  f : female, t : transgender) : "<<endl;
		
		cin.clear();
		cin.getline(gender,12);
		if(check_gender(gender) == 1)
                {
			if(gender[0] == 'm' || gender[0] == 'M')
			{
				strcpy(gender,"male");
			}
			if(gender[0] == 'f' || gender[0] == 'F')
			{
				strcpy(gender,"female");
			}
			if(gender[0] == 't' || gender[0] == 'T')
			{
				strcpy(gender,"transgender");
			}
                        break;
                }

		//check gender male,female, transgender
	}

	while(1)
	{
		cout<<"Enter your address : "<<endl;
		cin.clear();
		cin.getline(address,50); //       mumbai
		if(strlen(address) == 0)
		{
			cout<<"address cannot be blank"<<endl;
			continue;
		}
		else if(isblank(address[0]))
		{
			cout<<"address cannot start with blank space"<<endl;
			continue;
		}
		else
		{
			break;
		}
	}
	
	while(1)
	{
		cout<<"Enter your qualification (If none please enter NA): "<<endl;
		cin.clear();
		cin.getline(qualification,20);
		if(check_qualification(qualification) == 1)
                {
			if(strcmp(qualification,"NA") == 0)
			{
				strcpy(literate,"NO");
			}
			else
			{
				strcpy(literate,"YES");
			}
                        break;
                }

		//check qualification if it is NA put literate as NO or else YES
	}
	while(1)
	{
		cout<<"Enter your occupation : "<<endl;
		cin.clear();
		cin.getline(occupation,10); 
		if(check_occupation(occupation) == 1)
                {
                        break;
                }

		//check only characters
	}
	while(1)
	{
		cout<<"Enter your annual income : "<<endl;
		
		cin.clear();
		cin.getline(annual_income,30); 
		if(check_annual_income(annual_income) == 1)
                {
                        break;
                }

		//check income numeric or not
	}
	while(1)
	{
		cout<<"Enter no_of_dependants : "<<endl;
		
		cin.clear();
		cin.getline(no_of_dependants,3); 
		if(check_dependants(no_of_dependants) == 1)
                {
                        break;
                }

		//check number
	}
	while(1)
	{
		cout<<"Enter your house type ( o : own or r : rented) : "<<endl;
		
		cin.clear();
		cin.getline(house_type,7); //       mumbai
		if(check_house_type(house_type) == 1)
                {
			if(house_type[0] == 'o' || house_type[0] == 'O')
			{
				strcpy(house_type,"own");
			}
			if(house_type[0] == 'r' || house_type[0] == 'R')
			{
				strcpy(house_type,"rented");
			}
                        break;
                }

		//check only own or rented
	}
	while(1)
	{
		cout<<"Enter the area type ( r : rural or u : urban) : "<<endl;
		
		cin.clear();
		cin.getline(area_type,6); 
		if(check_area_type(area_type) == 1)
                {
			if(area_type[0] == 'r' || area_type[0] == 'R')
			{
				strcpy(area_type,"rural");
			}
			
			if(area_type[0] == 'u' || area_type[0] == 'U')
			{
				strcpy(area_type,"urban");
			}
                        break;
                }

		//check rural or urban
	}
	
	
}

/****************************************************************************************************
**
**    FUNCTION NAME   :    Citizen_Data_View
**    DESCRIPTION     :    This function is for displaying the Citizen data.
**    RETURN          :    Void. 
**
*********************************************************************************************************/
void Citizen::Citizen_Data_View()
{
	//view
	//cout<<"Hello I am class View"<<endl;
	system("clear");
	cout<<endl<<endl<<"************ Details of the Citizen ***************"<<endl<<endl<<endl;
	cout<<"Zone id : "<<zone_id<<endl;
	cout<<"SSID : "<<ssid<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"Address : "<<address<<endl;
	cout<<"Qualification : "<<qualification<<endl;
	cout<<"Literate : "<<literate<<endl;
	cout<<"Occupation : "<<occupation<<endl;
	cout<<"Annual Income : "<<annual_income<<endl;
	cout<<"Number of Dependents : "<<no_of_dependants<<endl;
	cout<<"House Type : "<<house_type<<endl;
	cout<<"Area Type : "<<area_type<<endl;
        cout<<"***********************************************"<<endl;
	system("read n");
	system("clear");
	
}


/*****************************************************************************************************************
**
**    FUNCTION NAME   :    Citizen_Data_Modify
**    DESCRIPTION     :    This function is used to modify the database for Citizen containing ssid,name,age,gender,
**                         annual income,occupation,house type,etc.
**    RETURN          :    Void.. 
**
*******************************************************************************************************************/

void Citizen::Citizen_Data_Modify(char ch[])
{
	//modify
	Citizen_Data_View();
	 cout<<"Modify Citizen Details"<<endl;
	if(ch[0]=='1')
	{
		while(1)
		{
			cout<<"Enter new zone id : "<<endl;
				
			cin.clear();
			cin.getline(zone_id,7); 
			if(check_zoneid(zone_id)==1)
			{
				cout<<endl<<"Zone id updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}
		}
	}
	
	else if(ch[0]=='2')
	{   
		while(1)
		{   
			cout<<"Enter new name : "<<endl;
			
			cin.clear();
			cin.getline(name,20); 
			if(check_name(name)==1)
			{   
				cout<<endl<<"Name is updated successfull!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  
	
	
	else if(ch[0]=='3')
	{   
		while(1)
		{   
			cout<<"Enter new age : "<<endl;
			
			cin.clear();
			cin.getline(age,4); 
			if(check_age(age)==1)
			{   
				cout<<endl<<"Age is updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch[0]=='4')
	{  
		while(1)
		{
			cout<<"Enter new address : "<<endl;
			

			cin.clear();
			cin.getline(address,50); //       mumbai
			if(strlen(address) == 0)
			{
				cout<<"address cannot be blank"<<endl;
				continue;
			}
			else if(isblank(address[0]))
			{
				cout<<"address cannot start with blank space"<<endl;
				continue;
			}
			else
			{
				cout<<endl<<"Address updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}
		}
	}
	

	else if(ch[0]=='5')
	{   
		while(1)
		{   
			cout<<"Enter new qualification : "<<endl;
			
			cin.clear();
			cin.getline(qualification,20);
			if(check_qualification(qualification)==1)
			{   
			if(strcmp(qualification,"NA") == 0)
                          {
                                  strcpy(literate,"NO");
                          }
                          else
                         {
                                  strcpy(literate,"YES");
                          }

				cout<<endl<<"Qualification updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch[0]=='6')
	{   
		while(1)
		{   
			cout<<"Enter new occupation : "<<endl;
			
			cin.clear();
			cin.getline(occupation,10); 
			if(check_occupation(occupation)==1)
			{   
				cout<<endl<<"Occupation updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  

	
	else if(ch[0] == '7')
	{   
		while(1)
		{   
			cout<<"Enter new annual income : "<<endl;
			
			cin.clear();
			cin.getline(annual_income,30);
			if(check_annual_income(annual_income)==1)
			{   
				cout<<endl<<"Annual income updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch[0]=='8')
	{   
		while(1)
		{   
			cout<<"Enter new number of dependants : "<<endl;
			
			cin.clear();
			cin.getline(no_of_dependants,3); 
			if(check_dependants(no_of_dependants)==1)
			{   
				cout<<endl<<"Number of dependants updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  


	else if(ch[0]=='9')
	{   
		while(1)
		{   
			cout<<"Enter new house type (o : own or r : rented): "<<endl;
			
			cin.clear();
			cin.getline(house_type,7); 
			if(check_house_type(house_type)==1)
			{   
			if(house_type[0] == 'o' || house_type[0] == 'O')
			{
				strcpy(house_type,"own");
			}
			if(house_type[0] == 'r' || house_type[0] == 'R')
			{
				strcpy(house_type,"rented");
			}
				cout<<endl<<"House type is updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}  


	//if(ch=="10")
	else
	{   
		while(1)
		{   
			cout<<"Enter new area type ( u : urban || r : rural): "<<endl;
			
			cin.clear();
			cin.getline(area_type,6); 
			if(check_area_type(area_type)==1)
			{   
			if(area_type[0] == 'r' || area_type[0] == 'R')
			{
				strcpy(area_type,"rural");
			}
			
			if(area_type[0] == 'u' || area_type[0] == 'U')
			{
				strcpy(area_type,"urban");
			}
				cout<<endl<<"Area type is updated successfully!"<<endl;
				system("read n");
				system("clear");
				break;
			}   
		}   
	}
	
		
}
















