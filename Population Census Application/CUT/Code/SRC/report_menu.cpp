#include<iostream>
#include<array>
#include"class.hpp"
using namespace std;
class Report
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
		if(c.zone_id == "ZID100")
		{
			pop_z[0]++;
			if(stoi(c.age) < 18)    
			{
				z1[0]++;
			}
			else if( stoi(c.age) >= 18 && stoi(c.age) <=40)
			{
				z1[1]++;
			}
			else
			{
				z1[2]++;
			}
		}
		else if(c.zone_id == "ZID200")
                  {
                          pop_z[1]++;
                          if(stoi(c.age) < 18)
                         {
                                 z2[0]++;
                          }
                          else if( stoi(c.age) >= 18 && stoi(c.age) <=40)
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
                          if(stoi(c.age) < 18)
                          {
                                  z3[0]++;
                          }
                          else if( stoi(c.age) >= 18 && stoi(c.age) <=40)
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
	cout<<"Percentage of Population whose age is below 18  : "<<(z1[0]/double(pop_z[0]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age inbetween 18 to 40  : "<<(z1[1]/double(pop_z[0]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age is more than 40  : "<<(z1[2]/double(pop_z[0]))*100<<" %"<<endl;

	cout<<endl<<endl<<endl<<"--------------  Zone 2 ----------------"<<endl<<endl;
	cout<<"Percentage of Population whose age is below 18  : "<<(z2[0]/double(pop_z[1]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age inbetween 18 to 40  : "<<(z2[1]/double(pop_z[1]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age is more than 40  : "<<(z2[2]/double(pop_z[1]))*100<<" %"<<endl;


	cout<<endl<<endl<<endl<<"--------------  Zone 3 ----------------"<<endl<<endl;
	cout<<"Percentage of Population whose age is below 18  : "<<(z3[0]/double(pop_z[2]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age inbetween 18 to 40  : "<<(z3[1]/double(pop_z[2]))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age is more than 40  : "<<(z3[2]/double(pop_z[2]))*100<<" %"<<endl;
	

	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Age Group Report  ----------------"<<endl<<endl;
	cout<<"Percentage of Population whose age is below 18  : "<<(total[0]/double(total_pop))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age inbetween 18 to 40  : "<<(total[1]/double(total_pop))*100<<" %"<<endl;
	cout<<"Percentage of Population whose age is more than 40  : "<<(total[2]/double(total_pop))*100<<" %"<<endl;
	
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");
	
}

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
		if(c.zone_id == "ZID100")
		{
			pop_z[0]++;
			if(c.gender == "male" )    
			{
				z1[0]++;
			}
			else if(c.gender == "female")
			{
				z1[1]++;
			}
			else
			{
				z1[2]++;
			}
		}
		else if(c.zone_id == "ZID200")
                {
                        pop_z[1]++; 
			if(c.gender == "male" )    
			{
				z2[0]++;
			}
			else if(c.gender == "female")
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
			if(c.gender == "male")
			{
				z3[0]++;
			}
			else if(c.gender == "female")
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
	cout<<"Percentage of male population   : "<<(z1[0]/double(pop_z[0]))*100<<" %"<<endl;
	cout<<"Percentage of female population  : "<<(z1[1]/double(pop_z[0]))*100<<" %"<<endl;
	cout<<"Percentage of transgender population : "<<(z1[2]/double(pop_z[0]))*100<<" %"<<endl;
	
	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;
	cout<<"Percentage of male population   : "<<(z2[0]/double(pop_z[1]))*100<<" %"<<endl;
	cout<<"Percentage of female population  : "<<(z2[1]/double(pop_z[1]))*100<<" %"<<endl;
	cout<<"Percentage of transgender population : "<<(z2[2]/double(pop_z[1]))*100<<" %"<<endl;
	
	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;
	cout<<"Percentage of male  population   : "<<(z3[0]/double(pop_z[2]))*100<<" %"<<endl;
	cout<<"Percentage of female  population  : "<<(z3[1]/double(pop_z[2]))*100<<" %"<<endl;
	cout<<"Percentage of transgender population : "<<(z3[2]/double(pop_z[2]))*100<<" %"<<endl;
	
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Gender Wise Report  ----------------"<<endl<<endl;
	cout<<"Percentage of male population across country  : "<<(total[0]/double(total_pop))*100<<" %"<<endl;
	cout<<"Percentage of female population across country  : "<<(total[1]/double(total_pop))*100<<" %"<<endl;
	cout<<"Percentage of transgender population across country  : "<<(total[2]/double(total_pop))*100<<" %"<<endl;
	
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");
				 
}

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
		if(c.zone_id == "ZID100")
		{
			pop_z[0]++;
			if(stod(c.annual_income) <100000 )    
			{
				z_bpl[0]++;
			}
		}
		else if(c.zone_id == "ZID200")
                {
                        pop_z[1]++; 
			if(stod(c.annual_income) < 100000 )    
			{
				z_bpl[1]++;
			}
		}
		else
		{
			pop_z[2]++;
			if(stod(c.annual_income) < 100000 )
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
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[0]/double(pop_z[0]))*100<<" %"<<endl;
		
	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[1]/double(pop_z[1]))*100<<" %"<<endl;
	
	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;
	cout<<"Percentage of below poverty line population   : "<<(z_bpl[2]/double(pop_z[2]))*100<<" %"<<endl;
	
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Below Poverty Line(BPL)  Report  ----------------"<<endl<<endl;
	cout<<"Percentage of BPL population across country  : "<<(total_bpl/double(total_pop))*100<<" %"<<endl;
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");

}

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
		if(c.zone_id == "ZID100")
		{
			pop_z[0]++;
			if(c.occupation == "farmer" )    
			{
				z_farmer[0]++;
			}
		}
		else if(c.zone_id == "ZID200")
                {
                        pop_z[1]++; 
			if(c.occupation == "farmer")	
			{
				z_farmer[1]++;
			}
		}
		else
		{
			pop_z[2]++;
			if(c.occupation == "farmer")
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
	cout<<"Percentage of Farming population   : "<<(z_farmer[0]/double(pop_z[0]))*100<<" %"<<endl;
		
	cout<<"--------------  Zone 2 ----------------"<<endl<<endl;
	cout<<"Percentage of Farming population   : "<<(z_farmer[1]/double(pop_z[1]))*100<<" %"<<endl;
	
	cout<<"--------------  Zone 3 ----------------"<<endl<<endl;
	cout<<"Percentage of Farming population   : "<<(z_farmer[2]/double(pop_z[2]))*100<<" %"<<endl;
	
	cout<<endl<<endl<<endl<<"--------------  Country Dynaland Farming Population  Report  ----------------"<<endl<<endl;
	cout<<"Percentage of Farming population across country  : "<<(total_farmer/double(total_pop))*100<<" %"<<endl;
	cout<<endl<<endl<<"**********************************************************************"<<endl;
	system("read n");
	system("clear");

	
}

};
