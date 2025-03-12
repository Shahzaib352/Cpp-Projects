#include<iostream>
#include<vector>
#include<algorithm> //for std :: remove_if
#include<string> 
#include<random>  // for random account number generation
using namespace std;

class Bank{
    protected:
    string name;
    long int phone_no;
    string address;
    string email;
    string website;

    public:

    //setters
    void setname(string n){name=n;}
    void setphone_no(long int pn){phone_no=pn;}
    void setaddress(string a){address=a;}
    void setemail(string e){email=e;}
    void setwebsite(string w){website=w;}

    //getters
    string getname(){return name;}
    long int getphone_no(){return phone_no;}
    string getaddress(){return address;}
    string getemail(){return email;}
    string getwebsite(){return website;}

    //constructor
    Bank(){}
    Bank(string name,long int ph_no,string address,string email):name(name),phone_no(ph_no),address(address),email(email){}
    Bank(string name,long int ph_no,string address,string email,string website):name(name),phone_no(ph_no),address(address),email(email),website(website){}
    //display function
    void display_Bank() const{
        cout<<"The name of bank is : "<<name<<endl;
        cout<<"The helpline no of bank is : "<<phone_no<<endl;
        cout<<"The address of bank is : "<<address<<endl;
        cout<<"The email of bank is : "<<email<<endl;
        cout<<"the website of bank is : "<<website<<endl;
    } 
};// End of bank class

class Employee : public Bank{
    protected:
    string DOB;
    long int CNIC;
    string designation;

    public:

    //setters
    void setDOB(string dob){DOB=dob;}
    void setCNIC(long int cnic){CNIC=cnic;}
    void setdesignation(string d){designation=d;}

    //getters
    string getDOB(){return DOB;}
    long int getCNIC(){return CNIC;}
    string getdesignation(){return designation;}

    //constructor
    Employee(){}
    Employee(string name,long int ph_no,string address,string email,string DOB,long int CNIC,string designation):
    Bank(name,ph_no,address,email),DOB(DOB),CNIC(CNIC),designation(designation){}
    Employee(string name,long int ph_no,string address,string email,string DOB,long int CNIC):
    Bank(name,ph_no,address,email){this->DOB=DOB,this->CNIC=CNIC;}

    //display function
    void display_Employee()const{
        cout<<"The name of employee is : "<<name<<endl;
        cout<<"The designation of employee is : "<<designation<<endl;
        cout<<"The phone no of employee is : "<<phone_no<<endl;
        cout<<"The CNIC of employee is : "<<CNIC<<endl;
        cout<<"The date of birth of employee is : "<<DOB<<endl;
        cout<<"The address of employee is : "<<address<<endl;
        cout<<"The email of employee is : "<<email<<endl;
    }

    // display all function   // function define
    void display_all_Employees(const vector<Employee>& employees)const{ //const vector<Employee>& : used to prevent copying and modifying of original vector
        for(const auto& objects : employees){  //used to display data
            objects.display_Employee();
        }
    }   // End of display_all function

    // display count of users
    void display_count_of_employees(const vector<Employee>& employees)const{
        cout<<"Current count of Employees is : "<<employees.size()<<endl;  // will display the count of employees
    }  // End of display_count function

    //add function
    void add_Employee(vector<Employee>& Employees){   // function define
    cout<<"Enter employee's name : ";
    cin>>name;
    cout<<"Enter employee's date of birth : ";
    cin>>DOB;
    cout<<"Enter employee's phone countber : ";
    cin>>phone_no;
    cout<<"Enter employee's address : ";
    cin>>address;
    cout<<"Enter employee's CNIC countber : ";
    cin>>CNIC;
    cout<<"Enter employee's designation : ";
    cin>>designation;
    cout<<"Enter employee's email id : ";
    cin>>email;
    Employees.emplace_back(name,phone_no,address,email,DOB,CNIC,designation); //emplace_back() : constructsthe elements directly to the memory of the vector using the provided arguments whereas, push_back() needs already cnstructed object.
    }   // End of add function

    //remove function   // function define
    void remove_employee_by_name(vector<Employee>& employees,const string& name){   // remove_if() : is used to move the element to be removed to the end of the vector
        // find and remove the employee with the given name
        //'remove_if()': reorders the elements in range ' [employee.begin(),employee.end()) ' such that all elements should be removed (those matches the condition of lambada function) are moved to the end of range.
        // it returns an iterator (in this case 'it') to the beginning of the range of elements that should be erased.
        auto it = remove_if(employees.begin(),employees.end(), [&name](const Employee& employee){
            // 'lambada function->[&name](const Employee& employee){return employee.name == name;}: is a predicate, returns true if the name of employee matches the given name(to be removed).
            //'remove_if()' use this predicate to determine which element should be moved to the end of the vector. 
            return employee.name == name; //'auto it' holds the iterator, that marks the boundary between the elements to be kept and the one's should be removed. All elements before the iterator are to be kept and those from iterator to the end of the vector, are tobe removed.
        });

        // erase the removed employee
        if(it != employees.end()){ // if it != employee.end(), it means that there are elements to be removed 
            employees.erase(it, employees.end());  // erases the elements fromm the vector, effectively removing them,
            cout<<"The employee with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The employee not found with the name \""<<name<<"\".\n";
        }
    }  // End of remove function

    //search function
    void search_employee_by_name_and_CNIC(const vector<Employee>& employee, const string& name,const long int& CNIC) const{   // function define
        bool found = false;
        // for loop to show all the matches
        for(const auto& employees : employee){  
            if(employees.name == name and employees.CNIC == CNIC){
                employees.display_Employee(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No person found with the name \""<<name<<"\" and the CNIC \""<<CNIC<<"\".\n";
        }
    }  // End of search function
};// End of employee class

class Users : public Employee{ 
    protected:
    long long account_no ;
    string account_type;

    public:

    //setters
    void setaccont_countmber(long long an){account_no=an;}
    void setaccount_type(string at){account_type=at;}

    //getters
    long long getaccount_no(){return account_no;}
    string getacccount_type(){return account_type;}

    //constructor
    Users(){}
    Users(string name,long int ph_no,string address,string email,string DOB,long int CNIC,long long account_no,string account_type):
    Employee{name,ph_no,address,email,DOB,CNIC}{account_no=account_no,account_type=account_type;}

    //display function 
    void display_User() const{
        cout<<"The name of account holder is : "<<name<<endl;
        cout<<"The account countber is "<<account_no<<endl;
        cout<<"The account type is : "<<account_no<<endl;
        cout<<"The phone no of account holder is : "<<phone_no<<endl;
        cout<<"The address of account holder is : "<<address<<endl;
        cout<<"The date of birth of account holder is : "<<DOB<<endl;
        cout<<"The CNIC of account holder is : "<<CNIC<<endl;
        cout<<"The email of account holder is : "<<email<<endl;
    }

    // display all function
    void display_all_Users(const vector<Users>& user){
        for(const auto& objects : user){  //used to display data
            objects.display_User();
        }
    }  // End of function

    // display count of users
    void display_count_of_users(const vector<Users> user){
        cout<<"Current count of Users is : "<<user.size()<<endl;  // will display the count of users
    }  // End of display_count function

    //add function
    void add_User(vector<Users> user){   // function define

    // generating random account no of 13-digits
    random_device rd; // obtain a random countber from hardware
    mt19937_64 engine(rd());  //seed the engine // mt19937 is a 'Merrsene Twister'engine supports 64-bit countbers, used for generating random countbers. 
    const long long min=1000000000000; const long long max=9999999999999;  // defining the range
    uniform_int_distribution<long long>dist(min,max);  // define the distribution range of each digit (0-9)
    // generate 13 random countbers
    long long account_no = dist(engine);

    cout<<"Enter account holder's name : ";
    cin>>name;
    cout<<"Enter account holder's account type : ";
    cin>>account_type;
    cout<<"Enter account holder's date of birth : ";
    cin>>DOB;
    cout<<"Enter account holder's phone countber : ";
    cin>>phone_no;
    cout<<"Enter account holder's CNIC countber : ";
    cin>>CNIC;
    cout<<"Enter account holder's designation : ";
    cin>>designation;
    cout<<"Enter account holder's address : ";
    cin>>address;
    cout<<"Enter account holder's email id : ";
    cin>>email;

    user.emplace_back(name,phone_no,address,email,DOB,CNIC,account_no,account_type); //emplace_back() : constructsthe elements directly to the memory of the vector using the provided arguments whereas, push_back() needs already cnstructed object.
    }   // End of add function

    //remove function
        void remove_user_by_name(vector<Users>& user,const string& name){   
        auto it = remove_if(user.begin(),user.end(), [&name](const Users& user){
            return user.name == name;
        });
        // erase the removed user
        if(it != user.end()){ 
            user.erase(it, user.end());  
            cout<<"The user with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The user not found with the name \""<<name<<"\".\n";
        }
    }  // End of remove function

    //search function
        void search_user_by_account_no(const vector<Users>& user,const long long& account_no){   // function define
        bool found = false;
        // for loop to show all the matches
        for( const auto& object : user){  
            if(object.account_no == account_no){
                object.display_User(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No person found with the account countber \""<<account_no<<"\".\n";
        }
    }  // End of search by account no function

        void search_user_by_CNIC(const vector<Users>& user,const long int& CNIC){   // function define
        bool found = false;
        // for loop to show all the matches
        for( const auto& object : user){  
            if(object.CNIC == CNIC){
                object.display_User(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No person found with the CNIC countber \""<<CNIC<<"\".\n";
        }
    }  // End of search by CNIC function

        void search_user_by_phone_no(const vector<Users>& user,const long int& phone_no){   // function define
        bool found = false;
        // for loop to show all the matches
        for(const auto& object : user){  
            if(object.phone_no == phone_no){
                object.display_User(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No person found with the contact countber \""<<phone_no<<"\".\n";
        }
    }  // End of search  by phone no function
};// End of user class

int main(){
    Employee E;
    Users U;
    vector<Employee>employees;
    vector<Users>users;
    long long account_no;;
    long int CNIC;
    long int phone_no;
    string name;
    int count;
    int operation;

    cout<<" Enter 1 to add a Employee.                       Enter 2 to remove a Employee."<<endl;
    cout<<" Enter 3 to search a Employee.                    Enter 4 to display all Employee."<<endl;
    cout<<" Enter 5 to add a User.                           Enter 6 to remove a User."<<endl;
    cout<<" Enter 7 to search a User by account no.          Enter 8 to search a User by CNIC no."<<endl;
    cout<<" Enter 9 to search a User by phone no.            Enter 10 to display all User. "<<endl;
    cout<<" Enter 11 to display count of all Employees.      Enter 12 to display count of all User. "<<endl;

    cout<<"What operation do you wamt to perform : ";
    cin>>operation;

    switch(operation){
        case 1: // add employee
            cout<<"How many employees you want to add : ";
            cin>>count;
            for (int i = 0; i < count; i++){
                E.add_Employee(employees);   //function call
                cout<<"Emploree is successfully added."<<endl;
            }
        break;
        case 2: // remove employee
            cout<<"How many employees you want to delete : ";
            cin>>count;
            for(int i=0; i<count; i++){
                string name;
                cout<<"Enter the name of employee you want to delete : ";
                cin>>name;
                E.remove_employee_by_name(employees,name);
            }
        break;
        case 3: // search employe by name and CNIC no
            cout<<"Enter the name of the employee you want to search : ";
            cin>>name;
            cout<<"Enter the CNIC number of the employee you want to search : ";
            cin>>CNIC;
            E.search_employee_by_name_and_CNIC(employees,name,CNIC);
        break;
        case 4: //display all employees
            E.display_all_Employees(employees);
        break;
        case 5: // add user
            cout<<"How many users you want to add : ";
            cin>>count;
            for (int i = 0; i < count; i++){
                U.add_User(users);   //function call
                cout<<"User is successfully added."<<endl;
            }
        break;
        case 6: // remove user
            cout<<"How many users you want to delete : ";
            cin>>count;
            for(int i=0; i<count; i++){
                cout<<"Enter the name of user you want to delete : ";
                cin>>name;
                U.remove_user_by_name(users,name);
            }
        break;
        case 7: // search user by account no
            cout<<"Enter the account number of the employee you want to search : ";
            cin>>account_no;
            U.search_user_by_account_no(users,account_no);
        break;
        case 8: // search user by CNIC no
            cout<<"Enter the CNIC number of the employee you want to search : ";
            cin>>CNIC;
            U.search_user_by_CNIC(users,CNIC);
        break;
        case 9: // search user by phone no
            cout<<"Enter the phone number of the employee you want to search : ";
            cin>>phone_no;
            U.search_user_by_phone_no(users,phone_no);
        break;
        case 10: //display all users
            U.display_all_Users(users);
        break;
        case 11: // display count of employees
            E.display_count_of_employees(employees);
        break;
        case 12:  // display count of users
            U.display_count_of_users(users);
        break;
    default: 
        cout<<"Inalid input. Please enter a valid input.";         
    } // End of switch statement

    return 0;
} // End of main() - Project Completed.
