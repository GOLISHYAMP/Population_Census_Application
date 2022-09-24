#include<iostream>
#include<string>
#include "class.hpp"
#include "class_functions.cpp"
using namespace std;


int Zone_1_Citizen_Register()
{
	Citizen ct1;
	ct1.Citizen_Data_Create("ZID100");
	cout<<endl<<endl<<"I am in Zone 1"<<endl<<endl;
	li_mutex.lock();
	li.push_back(ct1);
	li_mutex.unlock();
	return EXIT_SUCCESS;
}


int Zone_2_Citizen_Register()
{
	Citizen ct2;
	ct2.Citizen_Data_Create("ZID200");
	cout<<endl<<endl<<"I am in Zone 2"<<endl<<endl;
	li_mutex.lock();
	li.push_back(ct2);
	li_mutex.unlock();
	return EXIT_SUCCESS;

}


int Zone_3_Citizen_Register()
{
	Citizen ct3;
	ct3.Citizen_Data_Create("ZID300");
	cout<<endl<<endl<<"I am in Zone 3"<<endl<<endl;
	li_mutex.lock();
	li.push_back(ct3);
	li_mutex.unlock();
	return EXIT_SUCCESS;

}
