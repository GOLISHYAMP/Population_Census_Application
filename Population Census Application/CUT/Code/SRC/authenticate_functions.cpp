#include"class.hpp"
#include<iostream>
#include<string>
using namespace std;

int Authenticate::create_account(string id, string pwd)
{
	admin_id = id;
	password = pwd;
	return EXIT_SUCCESS;
}

string Authenticate::get_admin_id()
{
	return admin_id;	
}

string Authenticate::get_password()
{
	return password;
}

int Authenticate::put_admin_id(string id)
{
	admin_id = id;
	return EXIT_SUCCESS;
}

int Authenticate::put_password(string pwd)
{
	password = pwd;
	return EXIT_SUCCESS;
}

