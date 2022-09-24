#include<iostream>
#include<list>
#include "class.hpp"
using namespace std;

int Citizen_Data_View()
{
	string s;
	cout<<"Enter the ssid : "<<endl;
	cin>>s;
	cout<<endl<<"I am in View function"<<endl;
	for(list<Citizen> :: iterator c=li.begin(); c!=li.end(); c++)
	{
		if(c->ret_ssid() == s)
		{
			c->Citizen_Data_View();	
			return EXIT_SUCCESS;
		}
	}
	cout<<endl<<"the given ssid "<<s<<" not found"<<endl<<endl;
	system("read n");
	system("clear");
	return EXIT_FAILURE;
}

int Citizen_Data_Delete()
{
	cout<<endl<<"I am in Delete function"<<endl;
	string s;
	cout<<"Enter the ssid : "<<endl;
	cin>>s;
	int flag = 0;
	list<Citizen> temp;
	// for(list<Citizen> :: iterator c=li.begin(); c!=li.end(); c++)
	for(Citizen c : li)
	{
		if(c.ret_ssid() == s)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		for(Citizen c : li)
		{
			if(c.ret_ssid() != s)
			{
				temp.push_back(c);
			}
		}
		li.clear();
		list<Citizen>li(temp);
		cout<<"ssid "<<s<<" data is deleted successfully"<<endl;
	}
	else
	{
		cout<<"The given ssid "<<s<<" not found"<<endl<<endl;
	}	
		system("read n");
		system("clear");
		return EXIT_FAILURE;

}

int Citizen_Data_Modify()
{
	cout<<endl<<"I am in Modify function"<<endl;
	string s;
	cout<<"Enter the ssid : "<<endl;
	cin>>s;
	for(list<Citizen> :: iterator c=li.begin(); c!=li.end(); c++)
	{
		if(c->ret_ssid() == s)
		{
			string temp;
			getline(cin,temp);
			string ch = "a";
			while(1)
			{
				system("clear");
				cout<<endl<<endl<<"Enter the option you want to edit"<<endl<<endl;
				cout<<"1. Zone id"<<endl<<"2. Name"<<endl<<"3. Age"<<endl<<"4. Address"<<endl<<"5. Qualification"<<endl<<"6. Occupation"<<endl<<"7. Annual Income"<<endl<<"8. Number of Dependants"<<endl<<"9. House Type"<<endl<<"10. Area Type"<<endl<<"11. <-Back"<<endl;

				cout<<"Enter your choice"<<endl;
				cin.clear();
				getline(cin,ch);
				if(ch.length() == 0)
				{
					cout<<"It cannot be blank"<<endl;
					system("read n");
					continue;
				}
				else if(isblank(ch[0]))
				{
					cout<<"It cannot start with blank space"<<endl;
					system("read n");
					continue;
				}
				else if(isalpha(ch[0]) || isalpha(ch[1]))
				{
					cout<<"Only digits are allowed"<<endl;
					system("read n");
					continue;
				}
				else if(ch.length() <3)
				{
					if(stoi(ch)>1 && stoi(ch)<11)
					{
									
						c->Citizen_Data_Modify(ch);
						break;
					}
					else if(stoi(ch) == 11)
					{
						system("clear");
						break;
					}
					else
					{
						cout<<"Invalid input"<<endl;
						system("read n");
					}
					
				}
				else
				{
					cout<<"Invalid input"<<endl;
					system("read n");
				}

			}
			return EXIT_SUCCESS;
		}
	}
	cout<<endl<<"The given ssid "<<s<<" not found"<<endl<<endl;
	system("read n");
	system("clear");
	return EXIT_FAILURE;
}



