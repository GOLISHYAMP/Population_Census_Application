#include "class.hpp"
#include <iostream>
#include<string>
using namespace std;

class Change : public Authenticate
{
	public:
		int Change_id()
		{
			string id;
			string pwd;
			system("clear");
			cout<<endl<<endl<<"****************** Changing Admin ID *******************"<<endl<<endl;
			cout<<"Enter Admin ID : "<<endl;
			cin>>id;
			//for(Authenticate a : aut)
			for(list<Authenticate> :: iterator a = aut.begin(); a!= aut.end(); a++)
			{
				if(a->get_admin_id() == id)
				{
					cout<<"Enter Password : "<<endl;
					cin>>pwd;
					if(a->get_password() == pwd)
					{
						string new_id;
						cout<<"Enter New Admin ID to change"<<endl;
						cin>>new_id;
						a->put_admin_id(new_id);
						cout<<endl<<"Admin ID changed Successfully!"<<endl<<endl;
						system("read n");
						system("clear");
						return EXIT_SUCCESS;
					}
					else
					{
						cout<<"Invalid Password!"<<endl;
						system("read n");
						system("clear");
						return EXIT_FAILURE;
					}
				}
			}
			cout<<endl<<"Invalid Admin_ID"<<endl<<endl;
			system("read n");
			system("clear");
			return EXIT_FAILURE;

		}
		int Change_password()
		{
			string id;
                        string pwd;
                        system("clear");
                        cout<<endl<<endl<<"****************** Changing Password *******************"<<endl<<endl;
                        cout<<"Enter Admin ID : "<<endl;
                        cin>>id;
                        //for(Authenticate a : aut)
			for(list<Authenticate> :: iterator a = aut.begin(); a!= aut.end(); a++)
                        {
                                if(a->get_admin_id() == id)
                                {
                                        cout<<"Enter previous password : "<<endl;
                                        cin>>pwd;
                                        if(a->get_password() == pwd)
                                        {
						string new_pwd;
                                                cout<<"Enter New password to change"<<endl;
                                                cin>>new_pwd;
						a->put_password(new_pwd);
                                                cout<<endl<<"Password changed Successfully!"<<endl<<endl;
						system("read n");
						system("clear");
                                                return EXIT_SUCCESS;
                                        }
                                        else
                                        {
                                                cout<<"Invalid Password!"<<endl;
						system("read n");
						system("clear");
                                                return EXIT_FAILURE;
                                        }
                                }
                        }
                        cout<<endl<<"Invalid Admin_ID"<<endl<<endl;
                        system("read n");
                        system("clear");
                        return EXIT_FAILURE;


		}
};
