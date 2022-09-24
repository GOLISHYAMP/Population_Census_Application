#include "class.hpp"
#include<iostream>
#include<fstream>

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

}

int list_to_file()
{
	// Zone1_database, Zone2_database, Zone3_database, Central_database
			fstream fl;
                        if(aut.empty())
                                return 1;

                        fl.open("password_data_file.txt",ios::out);

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
                        fl1.open("Zone1_database",ios::out | ios::binary);
			fl2.open("Zone2_database",ios::out | ios::binary);
			fl3.open("Zone3_database",ios::out | ios::binary);
			fl4.open("Central_database",ios::out | ios::binary);

			for(list<Citizen> :: iterator c=li.begin(); c!=li.end(); c++)
			{
				if(c->ret_zone_id() == "ZID100")
				{
					fl1.write((char *) &c,sizeof(Citizen));
				}
				else if(c->ret_zone_id() == "ZID200")
				{
					fl2.write((char *) &c,sizeof(Citizen));
				}
				else
				{
					fl3.write((char *) &c,sizeof(Citizen));
				}
				fl4.write((char *) &c,sizeof(Citizen));



			}
                        fl1.close();
			fl2.close();
			fl3.close();
			fl4.close();
                        
		
			
			return 0;
               
	
}