#include<iostream>
#include<vector>
#include<algorithm> //for remove_if() 
#include<string>
using namespace std;

class University{
    protected:
    string name;
    string address;
    long long int phone_no;
    public:

    //setters
    void setname(string n){name=n;}
    void setaddress(string a){address=a;}
    void setphone_no(long int ph_no){phone_no=phone_no;}

    //getters
    string getname(){return name;}
    string getaddress(){return address;}
    long int getphone_no(){return phone_no;}

    //constructors
    University(string name="",string address="",long long int ph_no=0):name(name),address(address),phone_no(ph_no){}
    
    //display function
    void display_University(){
        cout<<"The name of university is ; "<<name<<endl;
        cout<<"The address of university is : "<<address<<endl;
        cout<<"The phone no of university is : "<<phone_no<<endl;
    }

    //display all function
    virtual void display_all(){};    //virtual function

    //display count function
    virtual void display_count(){};  //virtual function

    //add function
    virtual void add(){};    //virtual fubction

    //remove function
    virtual void remove(){};    //virtual function[]

    //search function
    virtual void search(const vector<University>& vec, const string& name,const long int& CNIC){};//virtual function
    
    //search function
    virtual void search(const vector<University>& vec, const long int& id){};    //virtual function
}; //End of University class

class Employees : public University{
    protected:
    long int CNIC;
    long int id;
    string DOB;
    string gender;
    string designation;
    
    public:
    
    //setters
    void setCNIC(long int CNIC){this->CNIC=CNIC;}
    void setid(long int id){this->id=id;}
    void setDOB(string DOB){this->DOB=DOB;}
    void setgender(string gender){this->gender=gender;}
    void setdesignation(string designation){this->designation=designation;}

    //getters
    long int getCNIC(){return CNIC;}
    long int getid(){return id;}
    string getDOB(){return DOB;}
    string getgender(){return gender;}
    string getdesignation(){return designation;}

    //constructors
    Employees(string name="",string address="",long long int ph_no=0,long int CNIC=0,long int id=0,string DOB="",string gender="",string designation=""):
    University(name,address,ph_no),CNIC(CNIC),id(id),DOB(DOB),gender(gender),designation(designation){}
    
    //display function
    void display_Employee() const{
        cout<<"The name of the employee is : "<<name<<endl;
        cout<<"The designation of employee is : "<<designation<<endl;
        cout<<"The id of the employee is : "<<id<<endl;
        cout<<"The CNIC of the employee is : "<<CNIC<<endl;
        cout<<"The date of birth of employee is : "<<DOB<<endl;
        cout<<"The address of the employee is : "<<address<<endl;
        cout<<"The phone no  of employee is : "<<phone_no<<endl;
        cout<<"The gender of employee is : "<<gender<<endl;
    }// End of display function

    //display all function
    void display_all( const vector<Employees>employee){
        for(const auto& objects : employee){  //used to display data
            objects.display_Employee();
        }
    } // End of display all function

    //display count function
    void display_count(const vector<Employees>employee) {
        cout<<"Current count of Employees is : "<<employee.size()<<endl;  // will display the count of Employees
    } // End of display count function

    //add function
    void add(vector<Employees>employee){
        cout<<"Enter the name of the employee you want to add : "<<endl;
        cin>>name;
        cout<<"Enter the designation of employee you want to add : "<<endl;
        cin>>designation;
        cout<<"Enter the id of the employee you want to add : "<<endl;
        cin>>id;
        cout<<"Enter the CNIC of the employee you want to add : "<<endl;
        cin>>CNIC;
        cout<<"Enter the date of birth of employee you want to add : "<<endl;
        cin>>DOB;
        cout<<"Enter the phone no  of employee you want to add : "<<endl;
        cin>>phone_no;
        cout<<"Enter the gender of employee you want to add : "<<endl;
        cin>>gender;    
        cout<<"Enter the address of the employee you want to add : "<<endl;
        cin>>address;

        employee.emplace_back(name,address,phone_no,CNIC,id,DOB,gender,designation);
    } // End of add function

    //remove function
    void remove(vector<Employees>employee, string& name){
        auto it = remove_if(employee.begin(),employee.end(), [&name](const Employees& employee){
            return employee.name == name;
        });
        // erase the removed student
        if(it != employee.end()){ 
            employee.erase(it, employee.end());  
            cout<<"The employee with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The employee not found with the name \""<<name<<"\".\n";
        }
    } // End of remove function

    //search by name and CNIC function
    void search(const vector<Employees>& employee, const string& name,const long int& CNIC){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& employees : employee){  
        if(employees.name == name and employees.CNIC == CNIC){
                employees.display_Employee(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No employee found with the name \""<<name<<"\" and the CNIC \""<<CNIC<<"\".\n";
        }
    }  // End of search function

    //search by id function
    void search(const vector<Employees>& employee,const long int& id){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& employees : employee){  
        if(employees.id == id){
                employees.display_Employee(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No employee found with the id \""<<id<<"\".\n";
        }
    }  // End of search function
};// End of Employees class

class Students :public Employees{
    protected:
    string degree;
    public:

    //constructors
    Students(string name="",string address="",long long int ph_no=0,long int CNIC=0,long int id=0,string DOB="",string gender="",string degree=""):
    Employees(name,address,ph_no,CNIC,id,DOB,gender){this->degree=degree;}
    
    //display function
    void display_Student() const{
        cout<<"The name of the student is : "<<name<<endl;
        cout<<"The id of the student is : "<<id<<endl;
        cout<<"The degree of the student is : "<<degree<<endl;
        cout<<"The CNIC of the student is : "<<CNIC<<endl;
        cout<<"The date of birth of student is : "<<DOB<<endl;
        cout<<"The address of the student is : "<<address<<endl;
        cout<<"The phone no  of student is : "<<phone_no<<endl;
        cout<<"The gender of student is : "<<gender<<endl;
    }// End of display function

    //display all function
    virtual void display_all(const vector<Students>student){
        for(const auto& objects : student){  //used to display data
            objects.display_Student();
        }
    } // End of display all function

    //display count functon
    void display_count(const vector<Students> student){
        cout<<"Current count of Students is : "<<student.size()<<endl;  // will display the count of Students
    } // End of display count function

    //add function
    void add(vector<Students>student){
        cout<<"Enter the name of the student you want to add : "<<endl;
        cin>>name;
        cout<<"Enter the id of the student you want to add : "<<endl;
        cin>>id;
        cout<<"Enter the degree of the student you want to add : "<<endl;
        cin>>degree;
        cout<<"Enter the CNIC of the student you want to add : "<<endl;
        cin>>CNIC;
        cout<<"Enter the date of birth of student you want to add : "<<endl;
        cin>>DOB;
        cout<<"Enter the address of the student you want to add : "<<endl;
        cin>>address;
        cout<<"Enter the phone no  of student you want to add : "<<endl;
        cin>>phone_no;
        cout<<"Enter the gender of student you want to add : "<<endl;
        cin>>gender;

        student.emplace_back(name,address,phone_no,CNIC,id,DOB,gender,degree);
    } // End of add function

    //remove function
    void remove(vector<Students>student, string& name){
        auto it = remove_if(student.begin(),student.end(), [&name](const Students& student){
            return student.name == name;
        });
        // erase the removed student
        if(it != student.end()){ 
            student.erase(it, student.end());  
            cout<<"The student with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The student not found with the name \""<<name<<"\".\n";
        }
    } // End of remove function

    //search by name and CNIC functon
    void search(const vector<Students>& student, const string& name,const long int& CNIC){   // function define
    bool found = false;
        // for loop to show all the matches
        for(const auto& objects : student){  
            if(objects.name == name and objects.CNIC == CNIC){
                objects.display_Student(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No student found with the name \""<<name<<"\" and the CNIC \""<<CNIC<<"\".\n";
        }
    }  // End of search function

    //search by id function
    void search(const vector<Students>& student,const long int& id){   // function define
    bool found = false;
        // for loop to show all the matches
        for( const auto& object : student){  
            if(object.id == id){
                object.display_Student(); // will display all the attributes regarding the matching objects.
                found = true;
            }
        }
        if(!found){  // !found = found is false
            cout<<"No student found with the id \""<<id<<"\".\n";
        }
    }  // End of search function
}; //End of Students class

class Permanant_faculty : public Employees{
    protected:
    string teaching_courese;
    public:

    //constructors
    Permanant_faculty(string name="",string address="",long long int ph_no=0,long int CNIC=0,long int id=0,string DOB="",string gender="",string designation="",string teaching_courese=""):
    Employees(name,address,ph_no,CNIC,id,DOB,gender,designation){this->teaching_courese=teaching_courese;}
    
    //display function
    void display_Permanat_Faculty()const{
        cout<<"The name of the permanant faculty is : "<<name<<endl;
        cout<<"The designation of permanant faculty is : "<<designation<<endl;
        cout<<"The id of the permanant faculty is : "<<id<<endl;
        cout<<"The CNIC of the permanant faculty is : "<<CNIC<<endl;
        cout<<"The phone no of permanant faculty is : "<<phone_no<<endl;
        cout<<"The date of birth of permanant faculty is : "<<DOB<<endl;
        cout<<"The gender of permanant faculty is : "<<gender<<endl;
        cout<<"The teaching course of the permanant faculty is : "<<teaching_courese<<endl;
        cout<<"The address of the permanant faculty is : "<<address<<endl;
    }

    //display all function
    void display_all(const vector<Permanant_faculty>p_faculty){
        for(const auto& objects : p_faculty){  //used to display data
            objects.display_Permanat_Faculty();
        }
    } // End of display all funcrion

    //display count function
    void display_count(const vector<Permanant_faculty> p_faculty){
        cout<<"Current count of Permanant_faculty is : "<<p_faculty.size()<<endl;  // will display the count of Permanant_faculty
    } // End of display count function

    //add function
    void add(vector<Permanant_faculty>p_faculty){
        cout<<"Enter the name of the permanant faculty you want to add : "<<name<<endl;
        cin>>name;
        cout<<"Enter the designation of permanant faculty you want to add : "<<designation<<endl;
        cin>>designation;
        cout<<"Enter the id of the permanant faculty you want to add : "<<id<<endl;
        cin>>id;
        cout<<"Enter the CNIC of the permanant faculty you want to add : "<<CNIC<<endl;
        cin>>CNIC;
        cout<<"Enter the phone no  of permanant faculty is : "<<phone_no<<endl;
        cin>>phone_no;
        cout<<"Enter the date of birth of permanant faculty you want to add : "<<DOB<<endl;
        cin>>DOB;
        cout<<"Enter the gender of permanant faculty you want to add : "<<gender<<endl;
        cin>>gender;
        cout<<"Enter the teaching course of the Permanant faculty you want to add : "<<teaching_courese<<endl;
        cin>>teaching_courese;
        cout<<"Enter the address of the Permanant faculty you want to add : "<<address<<endl;
        cin>>address;

        p_faculty.emplace_back(name,address,phone_no,CNIC,id,DOB,gender,designation,teaching_courese);
    } // End of add function

    //remove function
    void remove(vector<Permanant_faculty>p_faculty, string& name){
        auto it = remove_if(p_faculty.begin(),p_faculty.end(), [&name](const Permanant_faculty& p_faculty){
            return p_faculty.name == name;
        });
        // erase the removed p_faculty
        if(it != p_faculty.end()){ 
            p_faculty.erase(it, p_faculty.end());  
            cout<<"The permanant faculty with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The permanant faculty not found with the name \""<<name<<"\".\n";
        }
    } // End of remove function

    //search by name and CNIC function
    void search(const vector<Permanant_faculty>& p_faculty, const string& name,const long int& CNIC){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& objects : p_faculty){  
        if(objects.name == name and objects.CNIC == CNIC){
                objects.display_Permanat_Faculty(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No permanant faculty found with the name \""<<name<<"\" and the CNIC \""<<CNIC<<"\".\n";
        }
    }  // End of search function

    //search by id function
    void search(const vector<Permanant_faculty>& p_faculty, const long int& id){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& objects : p_faculty){  
        if(objects.id == id){
                objects.display_Permanat_Faculty(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No permanant faculty found with the name \""<<id<<"\".\n";
        }
    }  // End of search function
}; //End of Permanant_faculty class

class Temporary_faculty : public Employees{
    protected:
    string teaching_courese;
    public:

    //constructors
    Temporary_faculty(string name="",string address="",long long int ph_no=0,long int CNIC=0,long int id=0,string DOB="",string gender="",string designation="",string teaching_courese=""):
    Employees(name,address,ph_no,CNIC,id,DOB,gender,designation){this->teaching_courese=teaching_courese;}
    

    //display function
    void display_Temporary_Faculty()const{
        cout<<"The name of the temporary faculty is : "<<name<<endl;
        cout<<"The designation of temporary faculty is : "<<designation<<endl;
        cout<<"The id of the temporary faculty is : "<<id<<endl;
        cout<<"The CNIC of the temporary faculty is : "<<CNIC<<endl;
        cout<<"The date of birth of temporary faculty is : "<<DOB<<endl;
        cout<<"The phone no  of temporary faculty is : "<<phone_no<<endl;
        cout<<"The gender of temporary faculty is : "<<gender<<endl;
        cout<<"The teaching course of the temporary faculty is : "<<teaching_courese<<endl;
        cout<<"The address of the temporary faculty is : "<<address<<endl;
    }

    //display all function
    void display_all(const vector<Temporary_faculty>t_faculty){
        for(const auto& objects : t_faculty){  //used to display data
            objects.display_Temporary_Faculty();
        }
    } // End of display all function

    //display count function
    void display_count(const vector<Temporary_faculty> t_faculty){
        cout<<"Current count of Temporary_faculty is : "<<t_faculty.size()<<endl;  // will display the count of Temporary_faculty
    } // End of display count function

    //add function
        void add(vector<Temporary_faculty>t_faculty){
        cout<<"Enter the name of the temporary faculty you want to add : "<<name<<endl;
        cin>>name;
        cout<<"Enter the designation of temporary faculty you want to add : "<<designation<<endl;
        cin>>designation;
        cout<<"Enter the id of the temporary faculty you want to add : "<<id<<endl;
        cin>>id;
        cout<<"Enter the CNIC of the temporary faculty you want to add : "<<CNIC<<endl;
        cin>>CNIC;
        cout<<"Enter the phone no  of temporary faculty is : "<<phone_no<<endl;
        cin>>phone_no;
        cout<<"Enter the date of birth of temporary faculty you want to add : "<<DOB<<endl;
        cin>>DOB;
        cout<<"Enter the gender of temporary faculty you want to add : "<<gender<<endl;
        cin>>gender;
        cout<<"Enter the teaching course of the temporary faculty you want to add : "<<teaching_courese<<endl;
        cin>>teaching_courese;
        cout<<"Enter the address of the temporary faculty you want to add : "<<address<<endl;
        cin>>address;

        t_faculty.emplace_back(name,address,phone_no,CNIC,id,DOB,gender,designation,teaching_courese);
    } // End of add function

    //remove function
    void remove(vector<Temporary_faculty>t_faculty, string& name){
        auto it = remove_if(t_faculty.begin(),t_faculty.end(), [&name](const Temporary_faculty& t_faculty){
            return t_faculty.name == name;
        });
        // erase the removed t_faculty
        if(it != t_faculty.end()){ 
            t_faculty.erase(it, t_faculty.end());  
            cout<<"The temporary faculty with name : \""<<name<<"\" is removed.\n";
        } else{
            cout<<"The temporary faculty not found with the name \""<<name<<"\".\n";
        }
    } // End of remove function

    //search by name and CNIC function
    void search(const vector<Temporary_faculty>& t_faculty, const string& name,const long int& CNIC){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& objects : t_faculty){  
        if(objects.name == name and objects.CNIC == CNIC){
                objects.display_Temporary_Faculty(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No temporary faculty found with the name \""<<name<<"\" and the CNIC \""<<CNIC<<"\".\n";
        }
    }  // End of search function

    //search by id function
    void search(const vector<Temporary_faculty>& t_faculty,const long int& id){   // function define
    bool found = false;
        // for loop to show all the matches
    for(const auto& objects : t_faculty){  
        if(objects.id == id){
                objects.display_Temporary_Faculty(); // will display all the attributes regarding the matching objects.
                found = true;
        }
    }
        if(!found){  // !found = found is false
            cout<<"No temporary faculty found with the id \""<<id<<"\".\n";
        }
    }  // End of search function
};// End of Temporary_faculty class

int main(){
    // declaring vectors
    vector<Employees>empoloyee;
    vector<Students>student;
    vector<Permanant_faculty>p_faculty;
    vector<Temporary_faculty>t_faculty;
    // creating objects
    Employees E;
    Students S;
    Permanant_faculty P;
    Temporary_faculty T;
    //declaring variables
    string name;
    long int CNIC;
    long int id;
    int option;
    int choice;
    int count;

    cout<<"Enter 1 to choose Employee.             Enter 2 to choose Student. "<<endl;
    cout<<"Enter 3 to choose Permanant Faculty.    Enter 4 to choose Temporary Faculty"<<endl;

    cout<<"Choose an option : ";
    cin>>option;
    // applying switch statement
    switch (option){
        case 1:{
           cout<<"Enter 1 to display all Employees.                    Enter 2 to display count of the Employees."<<endl;
           cout<<"Enter 3 to add an Employee.                          Enter 4 to remove an Employee."<<endl;
           cout<<"Enter 5 to search an Employee by Name and CNIC.      Enter 6 to search an Employee by ID."<<endl; 
           cin>>choice;
           switch(choice){
                case 1:
                    E.display_all(empoloyee);
                break;
                case 2:
                    E.display_count(empoloyee);
                break;
                case 3:
                    cout<<"Enter the number of employees you want to add : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        E.add(empoloyee);
                        cout<<"Employee is added, successfully."<<endl;
                    }
                break;
                case 4:
                    cout<<"Enter the number of employees you want to delete : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        cout<<"Enter the name of the employee you want to delete : ";
                        cin>>name;
                        E.remove(empoloyee,name);
                        cout<<"The employee with name : "<<name<<" : has been deleted, successfully.";
                    }
                break;
                case 5:
                    cout<<"Enter the name of employee you want to search : ";
                    cin>>name;
                    cout<<"Enter the CNIC of the employee you want to search : ";
                    cin>>CNIC;
                    E.search(empoloyee,name,CNIC);
                break;
                case 6:
                    cout<<"Enter the ID of the employee you want to search : ";
                    cin>>id;
                    E.search(empoloyee,id);
                break;       
                default:
                    cout<<"Invalid Input. Please enter valid input.";
                break;  
           }// End of case 1 switch statement
        }// End of case 1 'employees'
        break;
        case 2:{
            cout<<"Enter 1 to display all Students.                   Enter 2 to display count of the Students."<<endl;
            cout<<"Enter 3 to add a  Student.                         Enter 4 remove a Student."<<endl;
            cout<<"Enter 5 to search a Student by Name and CNIC.      Enter 6 search a Student by ID."<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                    S.display_all(student);
                break;
                case 2:
                    S.display_count(student);
                break;
                case 3:
                    cout<<"Enter the number of students you want to add : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        S.add(student);
                        cout<<"Student is added, successfully."<<endl;
                    }
                break;
                case 4:
                    cout<<"Enter the number of students you want to delete : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        cout<<"Enter the name of the student you want to delete : ";
                        cin>>name;
                        S.remove(student,name);
                        cout<<"The student with name : "<<name<<" : has been deleted, successfully.";
                    }
                break;
                case 5:
                    cout<<"Enter the name of student you want to search : ";
                    cin>>name;
                    cout<<"Enter the CNIC of the student you want to search : ";
                    cin>>CNIC;
                    S.search(student,name,CNIC);
                break;
                case 6:
                    cout<<"Enter the ID of the student you want to search : ";
                    cin>>id;
                    S.search(student,id);
                break;  
                default:
                    cout<<"Invalid Input. Please enter valid input.";
                break;       
            }// End of case 2 switch statement
        }// End of case 2 'students'
        break;
        case 3:{
            cout<<"Enter 1 to display all Permanant Faculty.                   Enter 2 to display count of Permanant Faculty."<<endl;
            cout<<"Enter 3 to add a Permanant Faculty.                         Enter 4 to remove a Permanant Faculty."<<endl;
            cout<<"Enter 5 to search a Permanant Faculty by Name and CNIC.     Enter 6 to search a Permanant Faculty by ID."<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                    P.display_all(p_faculty);
                break;
                case 2:
                    P.display_count(p_faculty);
                break;
                case 3:
                    cout<<"Enter the number of permanant faculties you want to add : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        P.add(p_faculty);
                        cout<<"Permanant faculty is added, successfully."<<endl;
                    }
                break;
                case 4:
                    cout<<"Enter the number of permanant fauculties you want to delete : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        cout<<"Enter the name of the permanant faculty you want to delete : ";
                        cin>>name;
                        P.remove(p_faculty,name);
                        cout<<"The permanant faculty with name : "<<name<<" : has been deleted, successfully.";
                    }
                break;
                case 5:
                    cout<<"Enter the name of permanant faculty you want to search : ";
                    cin>>name;
                    cout<<"Enter the CNIC of the permanant faculty you want to search : ";
                    cin>>CNIC;
                    P.search(p_faculty,name,CNIC);
                break;
                case 6:
                    cout<<"Enter the ID of the permanant faculty you want to search : ";
                    cin>>id;
                    P.search(p_faculty,id);
                break;
                default:
                    cout<<"Invalid Input. Please enter valid input.";
                break; 
            }// End of case 3 switch statement
        }// End of case 3 'permanant faculty'
        break;
        case 4:{
            cout<<"Enter 1 to display all Temporary Faculty.                   Enter 2 to display count of Temporary Faculty ."<<endl;
            cout<<"Enter 3 to add a Temporary Faculty.                         Enter 4 to remove a Temporary Faculty."<<endl;
            cout<<"Enter 5 to search a Temporary Faculty by Name and CNIC.     Enter 6 to search a Temporary Faculty by ID."<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                    T.display_all(t_faculty);
                break; 
                case 2:
                    T.display_count(t_faculty);
                break;
                case 3:
                    cout<<"Enter the number of temporary faculties you want to add : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        T.add(t_faculty);
                        cout<<"Temporary faculty is added, successfully."<<endl;
                    }
                break;
                case 4:
                    cout<<"Enter the number of temporary faculties you want to delete : ";
                    cin>>count;
                    for(int i=0; i<count; i++){
                        cout<<"Enter the name of the temporary faculty you want to delete : ";
                        cin>>name;
                        T.remove(t_faculty,name);
                        cout<<"The temporary faculty with name : "<<name<<" : has been deleted, successfully.";
                    }
                break;
                case 5:
                    cout<<"Enter the name of temporary faculty you want to search : ";
                    cin>>name;
                    cout<<"Enter the CNIC of the temporary faculty you want to search : ";
                    cin>>CNIC;
                    T.search(t_faculty,name,CNIC);
                break;
                case 6:
                    cout<<"Enter the ID of the temporary faculty you want to search : ";
                    cin>>id;
                    T.search(t_faculty,id);
                break;
                default:
                    cout<<"Invalid Input. Please enter valid input.";
                break;   
            }// End of case 5 switch statement
        }// End of case 4 'temporary faculty'
        break;
        default:
        cout<<"Invalid Input. Please enter valid input.";
        break;
    }// End of switch(option) statement  
    return 0;
} // End of main() - Project Completed
