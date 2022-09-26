/**********************************************************************************************************************************
** FILENAME         : filehandling.cpp
** DESCRIPTION      : This file contains the list of all databases according to zone wise and central wise database.
**
** REVISION HISTORY :
**    DATE         NAME                REASON
**--------------------------------------------------------------------------------------------------------------------------------------
19 SEP 2022       user1               Creation of file,writing file to list and list to file.
**
**************************************************************************************************************************************
**/

#include "class.hpp"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

//---------------------------------file to list-----------------------------//
/*************************************************************************************************************************************
**
** FUNCTION NAME    :   file_to_list
** description      :   This function write the file to list 
** RETURN           :   void
**
***********************************************************************************************************************************************/

void file_to_list()
{
	/*	
		Authenticate a;
		a.create_account("shyam","000000");
		aut.push_back(a);
		a.create_account("chandan","111111");
		aut.push_back(a);
		a.create_account("pradnya","222222");
		aut.push_back(a);
		a.create_account("laxshmi","333333");
		aut.push_back(a);
		a.create_account("keerti","444444");
		aut.push_back(a);
		*/
	fstream fl;
	Authenticate a;
	string admin;
	string password;

	fl.open("password_data_file.txt",ios::in);
	if(fl)
	{

		fl >> admin;

		while(!fl.eof())
		{
			a.put_admin_id(admin);
			fl >> password;
			a.put_password(password);
			aut.push_back(a);
			fl >> admin;
		}

	}
	fl.close();

	ifstream fl_central("Central_database");
	//fr.open("variety",ios::in);
	if(fl_central)
	{
		
		fl_central.read((char *) &tmp,sizeof(temp));
		Citizen c;
		while(!fl_central.eof())
		{
			c.put_zone_id(tmp.zone_id);
			c.put_ssid(tmp.ssid);
			c.put_name(tmp.name);
			c.put_age(tmp.age);
			c.put_gender(tmp.gender);
			c.put_address(tmp.address);
			c.put_qualification(tmp.qualification);
			c.put_literate(tmp.literate);
			c.put_occupation(tmp.occupation);
			c.put_annual_income(tmp.annual_income);
			c.put_no_of_dependants(tmp.no_of_dependants);
			c.put_house_type(tmp.house_type);
			c.put_area_type(tmp.area_type);
			li.push_back(c);
			fl_central.read((char *) &tmp,sizeof(temp));
		}
		fl_central.close();
	}

}

//--------------------list to file-------------------------------------//
/***************************************************************************************************************************************
**
**FUNCTION NAME  : list_to_file
** DESCRIPTION   : This function stores the zones wise data base and central wise data base in list to file.
** RETURN        : void
**
****************************************************************************************************************************************
**/

int list_to_file()
{
	// Zone1_database, Zone2_database, Zone3_database, Central_database
			fstream fl;
                        if(aut.empty())
                                return 1;

                        fl.open("password_data_file.txt",ios::out);
			if(!fl)
			{
				cout<<"Can't open file"<<endl;
				return 1;
			}

                        for(list<Authenticate> :: iterator a=aut.begin(); a!=aut.end(); a++)
                        {
                                string admin = a->get_admin_id();
                                fl << admin;
				fl << " ";
                                string password = a->get_password();
                                fl << password;
				fl << " ";
                        }
                        fl.close();

			fstream fl1,fl2,fl3,fl4;
                
                        if(li.empty())
                                return 1;
                        fl1.open("Zone1_database",ios::out);
			fl2.open("Zone2_database",ios::out);
			fl3.open("Zone3_database",ios::out);
			fl4.open("Central_database",ios::out);

			for(list<Citizen> :: iterator c=li.begin(); c!=li.end(); c++)
			{

				strcpy(tmp.zone_id,c->ret_zone_id());
				strcpy(tmp.ssid,c->ret_ssid());
				strcpy(tmp.name,c->ret_name());
				strcpy(tmp.age,c->ret_age());
				strcpy(tmp.gender,c->ret_gender());
				strcpy(tmp.address,c->ret_address());
				strcpy(tmp.qualification,c->ret_qualification());
				strcpy(tmp.literate,c->ret_literate());
				strcpy(tmp.occupation,c->ret_occupation());
				strcpy(tmp.annual_income,c->ret_annual_income());
				strcpy(tmp.no_of_dependants,c->ret_no_of_dependants());
				strcpy(tmp.house_type,c->ret_house_type());
				strcpy(tmp.area_type,c->ret_area_type());

				if(strcmp(c->ret_zone_id(),"ZID100") == 0)
				{
					fl1.write((char *) &tmp,sizeof(temp));
				}
				else if(strcmp(c->ret_zone_id() ,"ZID200") == 0)
				{
					fl2.write((char *) &tmp,sizeof(temp));
				}
				else
				{
					fl3.write((char *) &tmp,sizeof(temp));
				}
				fl4.write((char *) &tmp,sizeof(temp));



			}
                        fl1.close();
			fl2.close();
			fl3.close();
			fl4.close();
                        
		
			
			return 0;
               
	
}
