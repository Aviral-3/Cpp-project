#include<iostream>
#include<stdlib.h>
using namespace std;

class emp
{
        public: 
                int empno;
                char empname[30];

        public:

                void get()
                {
                        cout<<"\n Enter Employee ID   :  ";
                        cin>>empno;
                        cout<<"\n Enter Employee Name  :  ";
                        cin>>empname;
                }
                

};
//Fulltime Employee
class hr:public emp
{
        public:
                
                int noofproject1;;
                int salary;
        public:
                void getdata()
                {
                        cout<<"\n No. Of Project Completed :  ";
                        cin>>noofproject1;
                        cout<<"\n Enter Salary :    :  ";
                        cin>>salary;
                }
                void cal()
                {
                        salary=(salary + (salary*0.1));
                        cout<<"\n Salary After Appraisal :  "<<salary<<endl;
                }
                void show()
                {
                        cout<<"\n ----------------------------------\n";
                        cout<<"\n Employee ID        :  "<<empno;
                        cout<<"\n Employee Name      :  "<<empname;
                        cout<<"\n Salary             :  "<<salary;
                        cout<<"\n Designation        :  HR";
                        cout<<"\n ----------------------------------\n";
                }
                
};
//Part time Employee
class jr_emp:public emp
{
        public:
                int noofproject;
                int salary1;
                
        public:
                void get1()
                {
                        cout<<"\n No. Of Project Completed :  ";
                        cin>>noofproject;
                        cout<<"\n Enter Salary :  ";
                        cin>>salary1;
}
void cal1()
{
                        salary1=(salary1 + (salary1*0.1));
                        cout<<"\n Salary After Appraisal :  "<<salary1<<endl;
                }
                void show1()
                {
                        cout<<"\n ----------------------------------\n";
                        cout<<"\n Employee ID     :  "<<empno;
                        cout<<"\n Employee Name   :  "<<empname;
                        cout<<"\n Salary          :  "<<salary1;
                        cout<<"\n Designation     :  Junior Employee";
                        cout<<"\n ----------------------------------\n";
                }
};

void login ()
{
     string userName;
     string userPassword;
     int loginAttempt = 0;

     while (loginAttempt < 5)
     {
         cout << "Please enter your user name: ";
         cin >> userName;
          cout << "Please enter your user password: ";
          cin >> userPassword;

        if (userName == "ANSH" && userPassword == "1234")
        {
            cout << "Welcome Ansh!\n";
            break;
        }
        else if (userName == "AVIRAL" && userPassword == "0000")
        {
            cout << "Welcome Aviral!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n"<<'\n';
            
        }
        }   
		cout << "Thank you for logging in.\n";    
}
//main program
int main()
{ 
    login();
    system("CLS");
        cout<<"\n -----------------------------------------------------------\n";
        cout<<"\n                                                            \n";
        cout<<"\n                  EMPLOYEE MANAGEMENT SYSTEM                \n";  
        cout<<"\n                MADE BY AVIRAL , ANSH & MUSKAN              \n";
        cout<<"\n                                                            \n"; 
        cout<<"\n -----------------------------------------------------------\n";
        int const cnt=5;
        int var=0;
        int var1=0;
        hr f1[cnt];
        jr_emp p1[cnt];

        int x,i;
        do
        {
                cout<<"\n";
                cout<<"\n 1.Add Employee Record ";
                cout<<"\n 2.Display Employee's Record ";
                cout<<"\n 3.Search Employee's Record ";
                cout<<"\n 4.Appraise Salary Of Employee";
                cout<<"\n 5.Exit Program ";
                cout<<"\n\n Enter Your Choice : ";
                cin>>x;
                system("PAUSE");
                system("CLS");
                switch(x)
                {
                        case 1:
                                int y;
                                cout<<"\n 1. As HR ";
                                cout<<"\n 2. As Junior Employee \n";
                                cout<<"\n Enter : ";
                                cin>>y;
                                system("CLS");
                                switch(y)
                                {
                                        case 1:
                                                f1[var].get();
                                                f1[var].getdata();
                                               // f1[var].cal();//
                                                var++;
                                                break;
                                        case 2:
                                                p1[var1].get();
                                                p1[var1].get1();
                                                //p1[var1].cal1();//
                                                var1++;
                                                break;
                                }
                                system("CLS");
                                break;
                                
                        case 2:
                                for(i=0; i<var; i++)
                                {
                                        f1[i].show();
                                }
                                for(i=0; i<var1; i++)
                                {
                                        p1[i].show1();
                                }
                        system("PAUSE"); 
                        system("CLS");
                        break;
                        
                        case 3:
                                int a;
                                cout<<"\n Enter Employee ID. : ";
                                cin>>a;
                                for (int i=0; i<var; i++)
                                {
                                        if (f1[i].empno==a)
                                        {
                                                f1[i].show();
                                        }
                                        if(p1[i].empno==a)
                                        {
                                                p1[i].show1();
                                        }
                                }
                        system("PAUSE");
                        system("CLS");
                        case 4:
                        	int b;
                                cout<<"\n Enter Employee ID. : ";
                                cin>>b;
                                for (int i=0; i<var; i++)
                                {
                                        if (f1[i].empno==b)
                                        {
                                                f1[i].cal();
                                        }
                                        if(p1[i].empno==b)
                                        {
                                                p1[i].cal1();
                                        }
                                }
                        system("PAUSE");
                        system("CLS");
                        
                            
                }
        

        } while(x!=5);
return 0;
}


