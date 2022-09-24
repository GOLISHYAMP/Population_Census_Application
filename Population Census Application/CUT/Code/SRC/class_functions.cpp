#include "class.hpp"
#include "validation_file.cpp"
#include<iostream>
#include<string>
using namespace std;


void Citizen::Citizen_Data_Create(string zid)
{
	//create
	zone_id = zid;
	while(1)
	{
		int flag = 0;
		cout<<"Enter your ssid (It will be a 9 digit number): "<<endl;
		cin.clear();
		getline(cin,ssid);
		if(check_ssid(ssid) == 1)
		{
			for(Citizen c : li)  
			{
				if(c.ret_ssid() == ssid)
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
		getline(cin,name);
		if(check_name(name) == 1)
                {
                        break;
                }

	}
	while(1)
	{
		cout<<"Enter your age : "<<endl;
		cin.clear();
		getline(cin,age);
		if(check_age(age) == 1)
                {
                        break;
                }
	}
	while(1)
	{
		cout<<"Enter your gender (m : male,  f : female, t : transgender) : "<<endl;
		
		cin.clear();
		getline(cin,gender);
		if(check_gender(gender) == 1)
                {
			if(gender == "m" || gender == "M")
			{
				gender = "male";
			}
			if(gender == "f" || gender == "F")
			{
				gender = "female";
			}
			if(gender == "t" || gender == "T")
			{
				gender = "transgender";
			}
                        break;
                }

		//check gender male,female, transgender
	}

	while(1)
	{
		cout<<"Enter your address : "<<endl;
		cin.clear();
		getline(cin,address); //       mumbai
		if(address.length() == 0)
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
		getline(cin,qualification);
		if(check_qualification(qualification) == 1)
                {
			if(qualification == "NA")
			{
				literate = "NO";
			}
			else
			{
				literate = "YES";
			}
                        break;
                }

		//check qualification if it is NA put literate as NO or else YES
	}
	while(1)
	{
		cout<<"Enter your occupation : "<<endl;
		cin.clear();
		getline(cin,occupation); 
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
		getline(cin,annual_income); 
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
		getline(cin,no_of_dependants); 
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
		getline(cin,house_type); //       mumbai
		if(check_house_type(house_type) == 1)
                {
			if(house_type == "o" || house_type == "O")
			{
				house_type = "own";
			}
			if(house_type == "r" || house_type == "R")
			{
				house_type = "rented";
			}
                        break;
                }

		//check only own or rented
	}
	while(1)
	{
		cout<<"Enter the area type ( r : rural or u : urban) : "<<endl;
		
		cin.clear();
		getline(cin,area_type); 
		if(check_area_type(area_type) == 1)
                {
			if(area_type == "r" || area_type == "R")
			{
				area_type = "rural";
			}
			
			if(area_type == "u" || area_type == "U")
			{
				area_type = "urban";
			}
                        break;
                }

		//check rural or urban
	}
	
	
}

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



void Citizen::Citizen_Data_Modify(string ch)
{
	//modify
	Citizen_Data_View();
	 cout<<"Modify Citizen Details"<<endl;
	if(ch=="1")
	{
		while(1)
		{
			cout<<"Enter new zone id : "<<endl;
				
			cin.clear();
			getline(cin,zone_id); 
			if(check_zoneid(zone_id)==1)
			{
				system("clear");
				break;
			}
		}
	}
	
	else if(ch=="2")
	{   
		while(1)
		{   
			cout<<"Enter new name : "<<endl;
			
			cin.clear();
			getline(cin,name); 
			if(check_name(name)==1)
			{   
				system("clear");
				break;
			}   
		}   
	}  
	
	
	else if(ch=="3")
	{   
		while(1)
		{   
			cout<<"Enter new age : "<<endl;
			
			cin.clear();
			getline(cin,age); 
			if(check_age(age)==1)
			{   
				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch=="4")
	{  
		while(1)
		{
			cout<<"Enter new address : "<<endl;
			

			cin.clear();
			getline(cin,address); //       mumbai
			if(address.length() == 0)
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
				system("clear");
				break;
			}
		}
	}
	

	else if(ch=="5")
	{   
		while(1)
		{   
			cout<<"Enter new qualification : "<<endl;
			
			cin.clear();
			getline(cin,qualification);
			if(check_qualification(qualification)==1)
			{   
			if(qualification == "NA")
                          {
                                  literate = "NO";
                          }
                          else
                         {
                                  literate = "YES";
                          }

				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch=="6")
	{   
		while(1)
		{   
			cout<<"Enter new occupation : "<<endl;
			
			cin.clear();
			getline(cin,occupation); 
			if(check_occupation(occupation)==1)
			{   
				system("clear");
				break;
			}   
		}   
	}  

	
	else if(ch=="7")
	{   
		while(1)
		{   
			cout<<"Enter new annual income : "<<endl;
			
			cin.clear();
			getline(cin,annual_income);
			if(check_annual_income(annual_income)==1)
			{   
				system("clear");
				break;
			}   
		}   
	}  
	

	else if(ch=="8")
	{   
		while(1)
		{   
			cout<<"Enter new number of dependants : "<<endl;
			
			cin.clear();
			getline(cin,no_of_dependants); 
			if(check_dependants(no_of_dependants)==1)
			{   
				system("clear");
				break;
			}   
		}   
	}  


	else if(ch=="9")
	{   
		while(1)
		{   
			cout<<"Enter new house type (o : own or r : rented): "<<endl;
			
			cin.clear();
			getline(cin,house_type); 
			if(check_house_type(house_type)==1)
			{   
			if(house_type == "o" || house_type == "O")
			{
				house_type = "own";
			}
			if(house_type == "r" || house_type == "R")
			{
				house_type = "rented";
			}
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
			getline(cin,area_type); 
			if(check_area_type(area_type)==1)
			{   
			if(area_type == "r" || area_type == "R")
			{
				area_type = "rural";
			}
			
			if(area_type == "u" || area_type == "U")
			{
				area_type = "urban";
			}
				system("clear");
				break;
			}   
		}   
	}
	
		
}


void Citizen :: Initial_Create(string id, string cid, string n, string a, string g, string add, string q, string l, string o, string ai, string d, string h, string at)
{
	zone_id = id;
	ssid = cid;
	name = n;
	age = a;
	gender = g;
	address = add;
	qualification = q;
	literate = l;
	occupation = o;
	annual_income  = ai;
	no_of_dependants = d;
	house_type = h;
	area_type = at;
}
















