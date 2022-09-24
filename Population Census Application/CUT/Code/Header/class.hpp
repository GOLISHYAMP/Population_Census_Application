#ifndef CLASS_H
#define CLASS_H
#include<list>
#include<iostream>
#include<string>
#include<thread>
#include<mutex>

using namespace std;
class Citizen
{
	private:
		string zone_id;
		string ssid;
		string name;
		string age;
		string gender;
		string address;
		string qualification;
		string literate;
		string occupation;
		string annual_income;
		string no_of_dependants;
		string house_type;
		string area_type;
	
	public:
		friend class Report;
		friend class Query;
		void Citizen_Data_Create(string);
		void Initial_Create(string,string,string,string,string,string,string,string,string,string,string,string,string);
		void Citizen_Data_View();
		void Citizen_Data_Modify(string);
		string ret_zone_id()
		{
			return zone_id;
		}
		string ret_ssid()
		{
			return ssid;
		}
		
};

list<Citizen> li;
mutex li_mutex;

class Authenticate
{
	private:
		string admin_id;
		string password;
	public:
		//friend class Change;
		int create_account(string,string);
		string get_admin_id();
		string get_password();
		int put_admin_id(string);
		int put_password(string);

};

list<Authenticate> aut;

#endif






