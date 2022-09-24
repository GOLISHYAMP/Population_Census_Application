/****************************************************************************************************
**      FILENAME      :       validation_file.cpp
**
**    DESCRIPTION     :       This File contains all the function definitions that are used to check 
**			      the validity of the data members of the class like ssid , name , age , 
**			      gender, house type , etc.
**
** Revision History   :
** DATE                NAME                   REASON
**---------------------------------------------------------------------------------------------------
**14 SEP 2022        cguser20            Creation of File , Writing Function definitions.
**
*******************************************************************************************************/

#include<iostream>
#include<iomanip>
#include<cctype>
#include<string>
#include<regex>

using namespace std;

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_ssid
**    DESCRIPTION     :    This function checks that the SSID should not be blank and duplicate,
**			   and the ssid shall be strictly integer values.
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_ssid(string ssid)
{

    if(ssid.length() == 0)
    {
        cout<<"ssid cannot be blank"<<endl;
        return 0;
    }
    if(isblank(ssid[0]))
    {
        cout<<"ssid cannot start with blank space"<<endl;
        return 0;
    }
	if(ssid.length() != 9)
	{
		cout<<endl<<"SSID number length should be 9."<<endl;
		return 0;
	}

	for(int i = 0; i<ssid.length(); i++)
	{
		if(!isdigit(ssid[i]))
		{
			cout<<"SSID should have only numbers." <<endl;
			return 0;
		}
	}
	return 1;
}

//-------------------- checking Zone ID -----------------------

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_zoneid
**    DESCRIPTION     :    This function checks that the zoneid should not be blank,
**			   and the zoneid shall be strictly integer values.
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_zoneid(string zoneid)
{

    if(zoneid.length() == 0)
    {
        cout<<"Zone ID cannot be blank"<<endl;
        return 0;
    }
    if(isblank(zoneid[0]))
    {
        cout<<"Zone ID cannot start with blank space"<<endl;
        return 0;
    }
        if(zoneid.length() != 6)
        {
                cout<<endl<<"Length Zone ID should be 6."<<endl;
                return 0;
        }

	if(zoneid != "ZID100" && zoneid != "ZID200" && zoneid != "ZID300")
	{
		cout<<"Invalid Zone ID! (It should be ZID100 or ZID200 or ZID300"<<endl;
		return 0;
	}

                
        return 1;
}



//----------------------- NAME -------------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_name
**    DESCRIPTION     :    This function checks that the name should not be blank 
**			   and it shall be character values only..
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_name(string name)
{
	
    if(name.length() == 0)
    {
        cout<<"Name cannot be blank"<<endl;
        return 0;
    }
    if(isblank(name[0]))
    {
        cout<<"Name cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<name.length(); i++)
	{
		if(!isalpha(name[i]))
		{
			cout<<"Enter a valid name. (It should only contain alphabets)"<<endl;
			return 0;
		}
	}
	return 1;
}



//------------------------AGE------------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_age
**    DESCRIPTION     :    This function checks that the age should not be blank and,
**			   and the age shall be strictly integer values in range 1-120 .
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/

int check_age(string age)
{
	
    if(age.length() == 0)
    {
        cout<<"age cannot be blank"<<endl;
        return 0;
    }
    if(isblank(age[0]))
    {
        cout<<"age cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<age.length(); i++)
	{
		if(!isdigit(age[i]))
		{
			cout<<"Enter a valid Age! (It should only include numbers)"<<endl;
			return 0;
		}
	}

	if(stod(age)<1 || stod(age)>120)
	{
		cout << "Enter a valid Age! (In the range of 1 to 120) " <<endl;
	
		return 0;
	}
	return 1;
}



//------------------------GENDER----------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_gender
**    DESCRIPTION     :    This function checks that the gender should not be blank,
**			   and the gender shall be strictly character values like m/M for male
                           and f/F for female adn t/T for transgender only..
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_gender(string gender)
{
	
    if(gender.length() == 0)
    {
        cout<<"gender cannot be blank"<<endl;
        return 0;
    }
    if(isblank(gender[0]))
    {
        cout<<"gender cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<gender.length(); i++)
	{
		if(!isalpha(gender[i]))
		{
			cout<<"Enter a valid gender!  ( m : male/ f : female / t : transgender ) "<<endl;
			return 0;
		}
	}
	if(gender !="m" && gender != "f" && gender != "t" && gender != "M" && gender != "F" && gender != "T")
	{
		cout << "Enter a valid gender!  ( m : male / f : female / t : transgender )" << endl;
		return 0;
	}
	return 1;
}

//-------------------------ANNUAL INCOME-----------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_annual_income
**    DESCRIPTION     :    This function checks that the annual income is not be blank,
**			   and it shall be strictly integer values which is greater than 1000.
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/

int check_annual_income(string annual_income)
{
	
    if(annual_income.length() == 0)
    {
        cout<<"Annual income cannot be blank"<<endl;
        return 0;
    }
    if(isblank(annual_income[0]))
    {
        cout<<"Annual income cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<annual_income.length(); i++)
	{
		if(!isdigit(annual_income[i]))
		{
			cout<<"Annual Income should only contain numbers!"<<endl;
			return 0;
		}

	}
	if (stod(annual_income) <1000)
	{
		cout << "Enter a valid Annual Income! (Annual income cannot be less than 1000)" << endl;

		return 0;
	}

return 1;
}
//-----------------------------OCCUPATION------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_Occupation
**    DESCRIPTION     :    This function checks that the occupation should not be blank and ,
**			   it shall be strictly character values.
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_occupation(string occupation)
{
	
    if(occupation.length() == 0)
    {
        cout<<"occupation cannot be blank"<<endl;
        return 0;
    }
    if(isblank(occupation[0]))
    {
        cout<<"occupation cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<occupation.length(); i++)
	{
		if(!isalpha(occupation[i]))
		{
			cout<<"Occupation field should only consists of alphabets!"<<endl;
			return 0;
		}
	}
	return 1;
}

//--------------------------QUALIFICATION----------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_qualification
**    DESCRIPTION     :    This function checks that the qualification should not be blank ,
**			   and it shall accept only alphabets .
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_qualification(string qualification)
{
	
    if(qualification.length() == 0)
    {
        cout<<"qualification cannot be blank"<<endl;
        return 0;
    }
    if(isblank(qualification[0]))
    {
        cout<<"qualification cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<qualification.length(); i++)
	{
		if(!isalpha(qualification[i]))
		{
			cout<<"Qualification field should have only alphabets!"<<endl;
			return 0;
		}
	}
	return 1;
}
//-------------------------HOUSETYPE-----------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_House_type
**    DESCRIPTION     :    This function checks that the SSID should not be blank and it shall accept 
**		      	   only o/O for own house and r/R for rented house,
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_house_type(string house_type)
{
	
    if(house_type.length() == 0)
    {
        cout<<"house type cannot be blank"<<endl;
        return 0;
    }
    if(isblank(house_type[0]))
    {
        cout<<"house type cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<house_type.length(); i++)
	{
		if(!isalpha(house_type[i]))
		{
			cout<<"House type field should have only alphabets!"<<endl;
			return 0;
		}
	}
	if (house_type != "o" && house_type != "r" && house_type != "O" && house_type != "R")
	{
		cout << "Enter your valid house type!  ( o : own or r : rented ) " << endl;
		return 0;
	}

	return 1;
}


//---------------------------NUMBER OF DEPENDENTS---------------------------/

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_dependants
**    DESCRIPTION     :    This function checks that the number of dependents should not be blank 
**			   and it shall be strictly integer values between range 1-20
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_dependants(string dependants)
{
	
    if(dependants.length() == 0)
    {
        cout<<"dependants cannot be blank"<<endl;
        return 0;
    }
    if(isblank(dependants[0]))
    {
        cout<<"dependants cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<dependants.length(); i++)
	{
		if(!isdigit(dependants[i]))
		{
			cout<<"The Dependants field can only contain numeric values.  "<<endl;
			return 0;
		}
	}
	if(stod(dependants)<1 || stod(dependants)>20)
	{
		cout << "Enter a valid Age! (In the range of 1 to 20) " <<endl;
	
		return 0;
	}
	return 1;
}
//----------------------------AREA TYPE--------------------------//

/****************************************************************************************************
**
**    FUNCTION NAME   :    check_area_type
**    DESCRIPTION     :    This function checks that the area type should not be blank ,
**			   and the area type shall be strictly character values and only u/U 
**                           for urban and r/R for rural is accepted. 
**    RETURN          :    Returns 1 if successful . 
**
*********************************************************************************************************/
int check_area_type(string area_type)
{
	
    if(area_type.length() == 0)
    {
        cout<<"Area type cannot be blank"<<endl;
        return 0;
    }
    if(isblank(area_type[0]))
    {
        cout<<"Area type cannot start with blank space"<<endl;
        return 0;
    }
	for(int i = 0; i<area_type.length(); i++)
	{
		if(!isalpha(area_type[i]))
		{
			cout<<"Area type field should consists only alphabets!"<<endl;
			return 0;
		}
	}
	if (area_type != "u" && area_type != "r" && area_type != "U" && area_type != "R")
	{
		cout << "Enter your valid area type!  ( u : urban or r : rural ) " << endl;
		return 0;
	}

	return 1;
}


