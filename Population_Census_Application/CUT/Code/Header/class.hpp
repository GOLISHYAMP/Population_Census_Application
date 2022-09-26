/****************************************************************************************************
**      FILENAME      :       class.hpp
**
**    DESCRIPTION     :       This File contains the description of classes like Citizen
**                            and Autenticate and the list 
**
** Revision History   :
** DATE                NAME                   REASON
**---------------------------------------------------------------------------------------------------
**12 SEP 2022        cguser20            Creation of File , Writing Class..
**
*******************************************************************************************************/
#ifndef CLASS_H
#define CLASS_H
#include<list>
#include<iostream>
#include<string>
#include<thread>
#include<mutex>
#include<cstring>

using namespace std;
/*********************************************************************************************************
**
**    CLASS NAME      :    Citizen
**    DESCRIPTION     :    This class contains all the data members and member functions for class Citizen.
**
*********************************************************************************************************/
class Citizen
{
	private:
		char zone_id[7];
		char ssid[10];
		char name[20];
		char age[4];
		char gender[12];
		char address[50];
		char qualification[20];
		char literate[4];
		char occupation[10];
		char annual_income[30];
		char no_of_dependants[3];
		char house_type[7];
		char area_type[6];
	
	public:
		void Citizen_Data_Create(char []);
		void Citizen_Data_View();
		void Citizen_Data_Modify(char []);
		char * ret_zone_id()
		{
			return zone_id;
		}
		char * ret_ssid()
		{
			return ssid;
		}
		char * ret_name()
		{
			return name;
		}
		char * ret_age()
		{
			return age;
		}
		char * ret_gender()
		{
			return gender;
		}
		char * ret_address()
		{
			return address;
		}
		char * ret_qualification()
		{
			return qualification;
		}
		char * ret_literate()
		{
			return literate;
		}
		char * ret_occupation()
		{
			return occupation;
		}
		char * ret_annual_income()
		{
			return annual_income;
		}
		char * ret_no_of_dependants()
		{
			return no_of_dependants;
		}
		char * ret_house_type()
		{
			return house_type;
		}
		char * ret_area_type()
		{
			return area_type;
		}
	


		void put_zone_id(char zid[])
		{
			strcpy(zone_id,zid); 
		}
		void put_ssid(char sid[])
		{
			strcpy(ssid,sid);
		}
		void put_name(char n[])
		{
			strcpy(name,n);
		}
		void put_age(char a[])
		{
			strcpy(age,a);
		}
		void put_gender(char gend[])
		{
			strcpy(gender,gend);
		}
		void put_address(char add[])
		{
			strcpy(address,add);
		}
		void put_qualification(char qualify[])
		{
			strcpy(qualification,qualify);
		}
		void put_literate(char lit[])
		{
			strcpy(literate,lit);
		}
		void put_occupation(char occ[])
		{
			strcpy(occupation, occ);
		}
		void put_annual_income(char ann[])
		{
			strcpy(annual_income,ann);
		}
		void put_no_of_dependants(char dep[])
		{
			strcpy(no_of_dependants ,dep);
		}
		void put_house_type(char house[])
		{
			strcpy(house_type,house);
		}
		void put_area_type(char area[])
		{
			strcpy(area_type, area);
		}
};

list<Citizen> li;
mutex li_mutex;

/****************************************************************************************************
**
**    CLASS NAME      :    Authenticate
**    DESCRIPTION     :    This class contains the data members and member functions for Authenticate class.. 
**
*********************************************************************************************************/
class Authenticate
{
	private:
		string admin_id;
		string password;
	public:
		int create_account(string,string);
		string get_admin_id();
		string get_password();
		int put_admin_id(string);
		int put_password(string);

};

list<Authenticate> aut;

struct temp
{
		char zone_id[7];
		char ssid[10];
		char name[20];
		char age[4];
		char gender[12];
		char address[50];
		char qualification[20];
		char literate[4];
		char occupation[10];
		char annual_income[30];
		char no_of_dependants[3];
		char house_type[7];
		char area_type[6];
}tmp;

#endif






