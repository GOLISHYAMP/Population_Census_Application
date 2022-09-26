#include<iostream>
#include<array>
#include"class.hpp"
using namespace std;

//----------------------------------------------------------------Age Group-------------------------------------------------//
/****************************************************************************************************************************************************
**
** FUNCTION NAME  : Age_Group_Report.
** DESCRIPTION    : This function checks the age of population according to zone wise by calculating the total age group by total population..
**
*******************************************************************************************************************************************************/


void age_report_print(double below_18,double bet_18_40,double more_40)
{
	cout<<"Percentage of Population whose age is below 18  : "<<below_18*100<<" %"<<endl;
	cout<<"Percentage of Population whose age inbetween 18 to 40  : "<<bet_18_40*100<<" %"<<endl;
	cout<<"Percentage of Population whose age is more than 40  : "<<more_40*100<<" %"<<endl;
}

void gender_report_print(double male, double female, double transgender)
{
	cout<<"Percentage of male population   : "<<male*100<<" %"<<endl;
	cout<<"Percentage of female population  : "<<female*100<<" %"<<endl;
	cout<<"Percentage of transgender population : "<<transgender*100<<" %"<<endl;
}

class Report : public Citizen
{
	public:	
void Age_Group_Report()
{
	cout<<"I am in Age Group Report"<<endl;
	array<int,3>pop_z;// [ pop_z1, pop_z2, pop_z3 ] 
	array<int,3>z1; // [ z1_18, z1_18_40, z1_40]
	array<int,3>z2;
	array<int,3>z3;
	pop_z.fill(0);
	z1.fill(0); 
	z2.fill(0);
	z3.fill(0);
	array<int,3>total;// [total_18,total_18_40,total_40]
	int total_pop = 0;
/*
	int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
	int z1_18=0, z1_18_40 = 0, z1_40 = 0;
	int z2_18=0, z2_18_40= 0, z2_40= 0;
	int z3_18=0, z3_18_40=0, z3_40=0;
	int total_18,total_18_40,total_40;
*/
	for(Citizen c : li)
	{
		if(strcmp(c.ret_zone_id(),"ZID100") == 0)
		{
			pop_z[0]++;
			if(stoi(c.ret_age()) < 18)    
			{
				z1[0]++;
			}
			else if( stoi(c.ret_age()) >= 18 && stoi(c.ret_age()) <=40)
			{
				z1[1]++;
			}
			else
			{
				z1[2]++;
			}
		}
		else if(strcmp(c.ret_zone_id(),"ZID200")==0)
                  {
                          pop_z[1]++;
                          if(stoi(c.ret_age()) < 18)
                         {
                                 z2[0]++;
                          }
                          else if( stoi(c.ret_age()) >= 18 && stoi(c.ret_age()) <=40)
                          {
                                  z2[1]++;
                          }
                          else
                          {
                                  z2[2]++;
                          }
                  }
		else
                  {
                         pop_z[2]++;
                          if(stoi(c.ret_age()) < 18)
                          {
                                  z3[0]++;
                          }
                          else if( stoi(c.ret_age()) >= 18 && stoi(c.ret_age()) <=40)
                          {
                                  z3[1]++;
                          }
                          else
                          {
                                  z3[2]++;
                          }
                  }
	}

	//calcultions
	
	for(int i = 0; i<3; i++)
	{
		total_pop += pop_z[i];
		total[i] = z1[i] + z2[i] + z3[i];
	}
	// total[ m, f, t]
	system("clear");
	cout<<endl<<endl<<"*****************  Age Group Report  *****************"<<endl<<endl;
	cout<<"--------------  Zone 1 ----------------"<<endl<<endl;
	if(pop_z[0] == 0)
	{
		age_report_print(0,0,0);
	}
	else
	{
		age_report_print((z1[0]/double(pop_z[0])) , (z1[1]/double(pop_z[0])), (z1[2]/double(pop_z[0])) );
	}
	
	
	
	cout<<endl<<endl<<endl<<"--------------  Zone 2 ----------------"<<endl<<endl;

	if(pop_z[1] == 0)
	{
		age_report_print(0,0,0);
	}
	else
	{
		age_report_print((z2[0]/double(pop_z[1])) , (z2[1]/double(pop_z[1])), (z2[2]/double(pop_z[1])) );
	}
	
	
	cout<<endl<<endl<<endl<<"--------------  Zone 3 ----------------"<<endl<<endl;

	if(pop_z[2] == 0)
	{
		age_report_print(0,0,0);
	}
	else
	{
		age_report_print((z3[0]/double(pop_z[2])) , (z3[1]/double(pop_z[2])), (z3[2]/double(pop_z[2])) );
	}


	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Age Group Report  ----------------"<<endl<<endl;

	if(total_pop == 0)
	{
		age_report_print(0,0,0);
	}
	else
	{
		age_report_print((total[0]/double(total_pop)) , (total[1]/double(total_pop)), (total[2]/double(total_pop)) );
	}
	
	
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");
	
}

//----------------------------------------------------------------------------Gender-----------------------------------------------------//
/****************************************************************************************************************************************************************************
**
** FUNCTION NAME : Gender_Report.
** DESCRIPTION   : This function checks the count of male female and transgender according to zone wise by calculating the total number of gender  by total population.
**
*****************************************************************************************************************************************************************************/

void Gender_Report()
{

	cout<<"I am in Gender Report"<<endl;
	/*
	int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
	int z1_m = 0, z1_f = 0,z1_t = 0;
	int z2_m = 0, z2_f = 0 , z2_t = 0;
	int z3_m = 0,z3_f = 0 , z3_t = 0;
	int total_m,total_f,total_t;
	*/
	 array<int,3>pop_z;// [ pop_z1, pop_z2, pop_z3 ] 
          array<int,3>z1; // [ z1_m, z1_f, z1_t]
          array<int,3>z2;
          array<int,3>z3;
          pop_z.fill(0);
          z1.fill(0);
          z2.fill(0);
          z3.fill(0);
          array<int,3>total;// [total_m,total_f,total_t]
          int total_pop = 0;

	for(Citizen c : li)
	{
		if(strcmp(c.ret_zone_id(),"ZID100") == 0)
		{
			pop_z[0]++;
			if(strcmp(c.ret_gender(),"male") == 0 )    
			{
				z1[0]++;
			}
			else if(strcmp(c.ret_gender(),"female") == 0)
			{
				z1[1]++;
			}
			else
			{
				z1[2]++;
			}
		}
		else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++; 
			if(strcmp(c.ret_gender(),"male") == 0 )    
			{
				z2[0]++;
			}
			else if(strcmp(c.ret_gender(),"female") == 0)
			{
				z2[1]++;
			}
			else
			{
				z2[2]++;
			}
		}
		else
		{
			pop_z[2]++;
			if(strcmp(c.ret_gender(),"male") == 0)
			{
				z3[0]++;
			}
			else if(strcmp(c.ret_gender(),"female") == 0)
			{
				z3[1]++;
			}
			else
			{
				z3[2]++;
			}
		}
	}

	//calculations
	
	for(int i = 0; i<3; i++)
         {
                 total_pop += pop_z[i];
                 total[i] = z1[i] + z2[i] + z3[i];
         }

	system("clear");
	cout<<endl<<endl<<"*****************  Gender Wise  Report  *****************"<<endl<<endl;
	cout<<"--------------  Zone 1 ----------------"<<endl<<endl;

	if(pop_z[0] == 0)
	{
		gender_report_print(0,0,0);
	}
	else
	{
		gender_report_print((z1[0]/double(pop_z[0])) , (z1[1]/double(pop_z[0])), (z1[2]/double(pop_z[0])) );
	}

	
	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;

	if(pop_z[1] == 0)
	{
		gender_report_print(0,0,0);
	}
	else
	{
		gender_report_print((z2[0]/double(pop_z[1])) , (z2[1]/double(pop_z[1])), (z2[2]/double(pop_z[1])) );
	}

	
	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;

	if(pop_z[2] == 0)
	{
		gender_report_print(0,0,0);
	}
	else
	{
		gender_report_print((z3[0]/double(pop_z[2])) , (z3[1]/double(pop_z[2])), (z3[2]/double(pop_z[2])) );
	}

	
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Gender Wise Report  ----------------"<<endl<<endl;

	if(total_pop == 0)
	{
		gender_report_print(0,0,0);
	}
	else
	{
		gender_report_print((total[0]/double(total_pop)) , (total[1]/double(total_pop)), (total[2]/double(total_pop)) );
	}

	
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");
				 
}

//-------------------------------------------------BPL Zone wise------------------------------------------------------------//
/******************************************************************************************************************************************************
**
** FUNCTION NAME :BPL_Zone_wise_Report.
** DESCRIPTION   : This function checks the average annual income of population accorrding to  zone wise  below  poverty line in dynaland.
**
*********************************************************************************************************************************************************/


void BPL_Zone_Wise_Report()
{

	cout<<"I am in BPL Zone Wise Report"<<endl;
/*
	int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
	int z1_bpl = 0; 
	int z2_bpl = 0;
	int z3_bpl = 0;
	int total_bpl;
*/
	array<int,3>pop_z; //[pop_z1, pop_z2, pop_z3]
	pop_z.fill(0);
	array<int,3>z_bpl; //[z1_bpl, z2_bpl, z3_bpl]
	z_bpl.fill(0);
	int total_bpl=0,total_pop=0;
	for(Citizen c : li)
	{
		//cout<<c.annual_income<<endl;
		if(strcmp(c.ret_zone_id(),"ZID100") == 0)
		{
			pop_z[0]++;
			if(stod(c.ret_annual_income()) <100000 )    
			{
				z_bpl[0]++;
			}
		}
		else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++; 
			if(stod(c.ret_annual_income()) < 100000 )    
			{
				z_bpl[1]++;
			}
		}
		else
		{
			pop_z[2]++;
			if(stod(c.ret_annual_income()) < 100000 )
			{
				z_bpl[2]++;
			}
		}
	}
	
	//calculations
	for(int i = 0; i<3; i++)
	{
		total_pop += pop_z[i];
		total_bpl += z_bpl[i];
	}

	system("clear");
	cout<<endl<<endl<<"*****************  Below Poverty line Zone Wise  Report  *****************"<<endl<<endl;
	
	cout<<"--------------  Zone 1 ----------------"<<endl<<endl;
	if(pop_z[0] == 0)
	{
	cout<<"Percentage of below poverty line population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[0]/double(pop_z[0]))*100<<" %"<<endl;
	}

	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;
	if(pop_z[1] == 0)
	{
	cout<<"Percentage of below poverty line population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[1]/double(pop_z[1]))*100<<" %"<<endl;
	}

	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;
	if(pop_z[2] == 0)
	{
	cout<<"Percentage of below poverty line population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[2]/double(pop_z[2]))*100<<" %"<<endl;
	}
	
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Below Poverty Line(BPL)  Report  ----------------"<<endl<<endl;
	if(total_pop == 0)
	{
	cout<<"Percentage of BPL population across country  : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of BPL population across country  : "<<(total_bpl/double(total_pop))*100<<" %"<<endl;
	}
	
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");

}

//----------------------------------------------------------Farming population-----------------------------------------------------------//
/**************************************************************************************************************************************************************
**
** FUNCTION NAME : Farming_population_Report.
** DESCRIPTION   : This function checks the count of farming popualtion according to zone wise by calculating the total number of farmers by total population.
**
**************************************************************************************************************************************************************/

void Farming_Population_Report()
{

	cout<<"I am in Farming Population Report"<<endl;
/*
	int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
	int z1_farmer = 0;
	int z2_farmer = 0;
	int z3_farmer = 0;
	int total_farmer;
	*/
	array<int,3>pop_z; //[pop_z1, pop_z2, pop_z3]
	pop_z.fill(0);
	array<int,3>z_farmer; //[z1_farmer, z2_farmer, z3_farmer]
	z_farmer.fill(0);
	int total_farmer = 0,total_pop=0;

	for(Citizen c : li)
	{
		if(strcmp(c.ret_zone_id(),"ZID100") == 0)
		{
			pop_z[0]++;
			if(strcmp(c.ret_occupation() ,"farmer") == 0)
			{
				z_farmer[0]++;
			}
		}
		else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++; 
			if(strcmp(c.ret_occupation(),"farmer") == 0)	
			{
				z_farmer[1]++;
			}
		}
		else
		{
			pop_z[2]++;
			if(strcmp(c.ret_occupation(),"farmer") == 0)
			{
				z_farmer[2]++;
			}
		}
	}

	//calculations
	for(int i = 0; i<3; i++)
         {
	//	 cout<<pop_z[i]<<"   "<<z_farmer[i]<<endl;
                 total_pop += pop_z[i];
                 total_farmer += z_farmer[i];
         }
//	cout<<total_pop<<"   "<<total_farmer<<endl;


	system("clear");
	cout<<endl<<endl<<"*****************  Farming Population  Report  *****************"<<endl<<endl;
	cout<<"--------------  Zone 1 ----------------"<<endl<<endl;
	if(pop_z[0] == 0)
	{
	cout<<"Percentage of Farming population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of Farming population   : "<<(z_farmer[0]/double(pop_z[0]))*100<<" %"<<endl;
	}	

	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;
	if(pop_z[1] == 0)
	{
	cout<<"Percentage of Farming population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of Farming population   : "<<(z_farmer[1]/double(pop_z[1]))*100<<" %"<<endl;
	}
	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;
	if(pop_z[2] == 0)
	{
	cout<<"Percentage of Farming population   : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of Farming population   : "<<(z_farmer[2]/double(pop_z[2]))*100<<" %"<<endl;
	}
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Farming Population  Report  ---------------"<<endl<<endl;
	if(total_pop == 0)
	{
	cout<<"Percentage of Farming population across country  : 0 %"<<endl;
	}
	else
	{
	cout<<"Percentage of Farming population across country  : "<<(total_farmer/double(total_pop))*100<<" %"<<endl;
	}
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");

	
}

};
