
/*
 * **************************************************************************************************
 * *      FILENAME            :             zone_rel.cpp
 *
 * *      DESCRIPTION         : 	    This file contains of the defintion of the zone citizen 
 * 					    register . Representative can enter into their respective 						  zones.
 *
 *    Revision History   :
 *    DATE		NAME		REASON
 *    ----------------------------------------------------------------------------------------------
 *    12 SEP 2022	cguser1		To write the definition of the zone registration functions

 ***************************************************************************************************
*/
#include<iostream>

#include<iostream>
#include<string>
#include "class.hpp"
#include "class_functions.cpp"
using namespace std;


/*****************************************************************************************************
 *    FUNCTION NAME   :   Zone_1_Citizen_Register
 *    DESCRIPTION     :   This function is used for registration of the citizens related to zone1. 
 *    			  
 *    RETURN	      :   Return 1 if successful
 *
 * **************************************************************************************************
 * */
int Zone_1_Citizen_Register()
{
	Citizen ct1;
	ct1.Citizen_Data_Create("ZID100");
	li_mutex.lock();
	li.push_back(ct1);
	li_mutex.unlock();
	return EXIT_SUCCESS;
}


/*****************************************************************************************************
 *    FUNCTION NAME   :   Zone_2_Citizen_Register
 *    DESCRIPTION     :   This function is used for registration of the citizens related to zone2. 
 *    			  
 *    RETURN	      :   Return 1 if successful
 *
 * **************************************************************************************************
 * */
int Zone_2_Citizen_Register()
{
	Citizen ct2;
	ct2.Citizen_Data_Create("ZID200");
	li_mutex.lock();
	li.push_back(ct2);
	li_mutex.unlock();
	return EXIT_SUCCESS;

}


/*****************************************************************************************************
 *    FUNCTION NAME   :   Zone_3_Citizen_Register
 *    DESCRIPTION     :   This function is used for registration of the citizens related to zone3. 
 *    			  
 *    RETURN	      :   Return 1 if successful
 *
 * **************************************************************************************************
 * */
int Zone_3_Citizen_Register()
{
	Citizen ct3;
	ct3.Citizen_Data_Create("ZID300");
	li_mutex.lock();
	li.push_back(ct3);
	li_mutex.unlock();
	return EXIT_SUCCESS;

}
