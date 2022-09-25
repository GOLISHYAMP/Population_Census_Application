/***********************************************************************************************************
**      FILENAME      :       authenticate_functions.cpp
**
**    DESCRIPTION     :       This File contains all the member functions definitions of class Authenticate
**			      like create_account , get_admin_id , etc
**                            view , and modify 
**
** Revision History   :
** DATE                NAME                   REASON
**---------------------------------------------------------------------------------------------------
**12 SEP 2022        cguser1            Creation of File , Writing Function definitions.
**
*******************************************************************************************************/
#include"class.hpp"
#include<iostream>
#include<string>
using namespace std;

/****************************************************************************************************
**
**    FUNCTION NAME   :    Create_account
**    DESCRIPTION     :    This function creates account and pass parameters for admin id and password
**    RETURN          :    Success
**
*********************************************************************************************************/
int Authenticate::create_account(string id, string pwd)
{
	admin_id = id;
	password = pwd;
	return EXIT_SUCCESS;
}

/****************************************************************************************************
**
**    FUNCTION NAME   :    get_admin_id
**    DESCRIPTION     :    This function is used to get admin id
**    RETURN          :    Success 
**
*********************************************************************************************************/
string Authenticate::get_admin_id()
{
	return admin_id;	
}

/****************************************************************************************************
**
**    FUNCTION NAME   :    get_password
**    DESCRIPTION     :    This function is used to get password
**    RETURN          :    Success 
**
*********************************************************************************************************/
string Authenticate::get_password()
{
	return password;
}

/****************************************************************************************************
**
**    FUNCTION NAME   :    put_admin_id
**    DESCRIPTION     :    This function is used to put admin_id
**    RETURN          :    Success
**
*********************************************************************************************************/
int Authenticate::put_admin_id(string id)
{
	admin_id = id;
	return EXIT_SUCCESS;
}

/****************************************************************************************************
**
**    FUNCTION NAME   :    put_password
**    DESCRIPTION     :    This function is used to put password
**    RETURN          :    Success 
**
*********************************************************************************************************/
int Authenticate::put_password(string pwd)
{
	password = pwd;
	return EXIT_SUCCESS;
}

