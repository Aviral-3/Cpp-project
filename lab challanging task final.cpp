#include<iostream>
using namespace std;
class professor
{
	int facultyno;
	string sname;
	string subject;
	string slot;
public:
	professor(int t_facultyno,string t_sname,string t_subject,string t_slot){
	 facultyno = t_facultyno;
	     sname =  t_sname;
	   subject = t_subject;
          slot = t_slot;
	}
	void Takeall()
	{
		cout<<"Enter faculty number :";
		cin>> facultyno;
		cout<<"Enter professor name :" ;
		cin>>sname;
		cout<<"Enter subject name :" ;
		cin>> subject;
		cout<<"Enter your slot:" ;
		cin>>slot;
		cout<<endl;
	}
	void Showall()
	{
		cout<<"faculty number: "<<facultyno<<endl;
		cout<<"professor name: "<<sname<<endl;
		cout<<"subject:        "<<subject<<endl;
		cout<<"slot:           "<<slot<<endl;
}
};
///////////////////////////////////////////////////////////
                    //case 02//
class Animal { 
    public: 
        int age; 
        string gender; 
        void isMammal(){ 
           cout<<"I am a mammal"<<endl; 
        } 
        void mate(){ 
        } 
        Animal(int tage,string tgender){ 
            age = tage; 
            gender = tgender; 
        } 
}; 
class Zebra: public Animal{ 
   public: 
        bool is_wild; 
            Zebra(int tage, string tgender, int tsize,bool tis_wild):Animal(tage,tgender){
            is_wild= tis_wild;
        }
 void run(){ 
 cout<<"Zebra run fast"<<endl; 
        } 
}; 
class Fish: public Animal{ 
   public: 
        int sizeInFt;   
        bool canEat; 
        void swim(){  
        } 
        Fish(int tage, string tgender, int tsize,bool tcaneat):Animal(tage,tgender){ 
            sizeInFt = tsize; 
            canEat = tcaneat; 
        } 
        virtual void isMammal(){ 
           cout<<"I am a not mammal"<<endl; 
        } 
}; 
  class Duck: public Animal{ 
public:
  string beakColor =" yellow";
	     Duck(int tage, string tgender, int tsize,string tbeakColor):Animal(tage,tgender){ 
          
            beakColor= tbeakColor;
	}
    void swim(){
    	cout<<"duck can swim"<<endl;
	}
      void quack(){
      	cout<<"duck-quack-quack"<<endl;
	  }
     };
     ////////////////////////////////////////////////
                   //case 04//
class Employeee 
{ 
    public: 
        int ID; 
        string name; 
        double salary; 
        Employeee (int ID,string name,double salary) 
        { 
            this->ID=ID; 
            this->name=name; 
            this->salary=salary; 
        } 
        void display() 
        { 
            cout<<"Id is= "<<this->ID<<"\n"; 
            cout<<"Name= "<<this->name<<endl; 
            cout<<"Salary= "<<this->salary<<endl; 
        } 
        virtual void calculateSalary()=0;

}; 
class Manager: public Employeee 
{ 
    public: 
        Manager(int ID,string name,double salary):Employeee(ID,name,salary){ 
            } 
        virtual void calculateSalary() 
        { 
            this->salary= this->salary +(this->salary*0.1); 
        } 
}; 
///////////////////////////////////////////////////
                  //case 05//
                  
class Employee { 
public: 
double Ssalary; 

int VID; 
string Nname; 
Employee(int tID,string tName, double tSalary){ 
VID = tID; 
Nname = tName; 
Ssalary = tSalary; 
} 
void Ddisplay(){ 
cout<<"Employee ID is: "<<VID<<"\n"; 
cout<<"Employee name is: "<<Nname<<"\n"; 
cout<<"Employee salary is: "<<Ssalary<<"\n"; 
} 
virtual void calculateSalary()=0; 
}; 
class Mmanager : public Employee { 
public: 
Mmanager(int tID,string tName,double tSalary):Employee(tID,tName,tSalary){ 
cout<<" "<<"\n"; 
} 
void Ddisplay(){ 
cout<<"Employee ID is: "<<VID<<"\n"; 
cout<<"Employee name is: "<<Nname<<"\n"; 
cout<<"Employee salary is: "<<Ssalary<<"\n"; 
} 
virtual void calculateSalary(){ 
this->Ssalary= this->Ssalary +this->Ssalary*0.1; 
cout<<"Salary"<<Ssalary*2;
}; 
}; 

class Department{ 
public: 
int VID; 
int Noofproject;
string Nname; 
Department (int VID, string Nname,int Noofproject){ 
this->VID = VID; 
this->Nname= Nname; 
} 
virtual void appraiseEmployee(Employee*a){ 
    
}
};
class HRDepartment :  public Department{ 
public: 
HRDepartment(int VID, string Nname,int Noofproject) : Department( VID, Nname,Noofproject){ 
} 
virtual void appraiseEmployee(Employee*a ) {
a->Ssalary =a->Ssalary + (a->Ssalary*Noofproject); 
cout<<" final salary "<< a->Ssalary << endl; 


} 
};
//////////////////////////////////////////////////////
                 //case 06//
class Eemployee{
 public:
 int iID;
 string nname;
 int ssalary;
 int projectCompleted;
 Eemployee(int iID, string nname, int ssalary,int projectCompleted){
 this->iID=iID;
 this->nname=nname;
 this->ssalary=ssalary;
 this->projectCompleted=projectCompleted;
}
 void displayy(){
 cout<<"ID: "<<iID<<endl;
  cout<<"name: "<<nname<<endl;
  cout<<"salary is:"<<ssalary<<endl;
  }
 virtual void calculateSalary()=0;
};
class Managerr:public Eemployee{
 public:
 Managerr(int iID, string nname, int ssalary,int projectCompleted):Eemployee(iID,
nname, ssalary, projectCompleted){
 }
 virtual void calculateSalary(){
 this->ssalary = this-> ssalary+ (this->ssalary *0.1);
 }
};
class Ddepartment{
 public:
 int iID;
 string nname;
 Ddepartment(int iID, string nname){
 this->iID=iID;
 this->nname=nname;
 }
 virtual void appraiseEmployee(Eemployee *b)=0;
};
class HRDdepartment :public Ddepartment{
 public:
 HRDdepartment(int iID, string nname): Ddepartment(iID, nname){
 }
 void appraiseEmployee(Eemployee *b){
 try{
 if(b->projectCompleted==0){
 throw runtime_error("error");
}
 else{
 
 b->ssalary = b->ssalary + (b->ssalary * 0.1);
}
 }
 catch ( runtime_error &b){
 cout<<"error: projects completed are 0"<<endl;
 cout<< "appraisal cannot be done"<< endl;
 }
}
};
/////////////////////////////////////////////////////////
                      //case 07//
class Emmployee
{
    public:
     int IDe, project;
     double saalary;
     string naame;
     Emmployee()
     {
        cout<<"Enter employee's ID\n";
        cin>>IDe;
        cout<<"Enter employee's name\n";
        cin>>naame;
        cout<<"Enter the current salary\n";
        cin>>saalary;
        cout<<"Enter the number of projects completed\n";
        cin>>project;
     }
     void Dissplay()
     {
         saalary = saalary + (project*1000);
         cout<<" Employee of ID "<<IDe<<" and name "<<naame<<"  Best Employee \n";
         cout<<"Your new salary is "<<saalary<<"\n";
     }
     ~Emmployee()
     {
         cout<<"Destructor called!\n";
     }
};
class HRDeepartment
{
    public:
    int c ;
     Emmployee *h;
     Emmployee &findBestEmployee(Emmployee *g)
     {
        
         c = max(c,g->project);
         if (c==g->project)
             h = g;
         return *h;
     }
};
////////////////////////////////////////////////////
                   // case 10//
class DDepartment{ 
   public: 
        void virtual raiseSalary()=0;
        void virtual ddisplay()=0; 
}; 
class EEmployee:public virtual DDepartment{ 
  public: 
  double Ssalary; 
    EEmployee(double Ssalary):DDepartment(){ 
        this->Ssalary = Ssalary; 
    } 
    void virtual raiseSalary(){ 
        this->Ssalary = this->Ssalary + (this->Ssalary*0.1); 
    } 
    void virtual ddisplay(){ 
        cout<<"Salary of Employee is: "<<this->Ssalary<<"\n"; 
    } 
}; 
class Hr :public virtual EEmployee{ 
    double allowance; 
    public: 
    Hr(double Ssalary, double allowance):EEmployee(Ssalary){ 
        this->allowance = allowance; 
    } 
    void virtual raiseSalary(){ 
        this->Ssalary = this->Ssalary + this->allowance; 
    } 
    void virtual ddisplay(){ 
        cout<<"Salary of hr is: "<<this->Ssalary<<"\n"; 
    } 
}; 
////////////////////////////////////////////////////
                          //case 08//
 class Empployee{
private:
	int sallary;
public:
	Empployee() { sallary = 0; }
	friend class supervisor;
};
class supervisor {
private:
	string IDD;
public:
	void showEmployee(Empployee& x)
	{
	
		std::cout << "Employee::salary=" << x.sallary;
	}
};
////////////////////////////////////////////////////////////
                         //case 09//
class Emplloyee {
   private:
      float salaary;          
   public:
      Emplloyee() {
         salaary = 0;
      }
      Emplloyee(float s ) {
         salaary = s;
      } 
      void displayEmployee() {
         cout << "salary: " << salaary<< endl;
      }
      bool operator <(const Emplloyee& w) {
         if(salaary < w.salaary) {
            return true;
         }
         if(salaary == w.salaary && salaary < w.salaary) {
            return true;
         }
         return false;
      }
};

int main()
{
professor p1 (100004 , "AVIRAL", "maths", "DB");
professor p2 (100400 , "ANSH", "physics", "CB");
professor p3 (100411 , "MUSKAN", "CHEMISTRY", "EB");
p1.Showall();
p2.Showall();
p3.Showall();
cout<<endl;
cout<<endl;
/////////////////////////////////////////////////
              //case02//
    Fish f = Fish(5, "male", 2,true); 
    f.isMammal();
    Zebra z=Zebra(30,"male",50, true );
    z.run();
    Duck d =  Duck(10, "female",10,"yellow" );
    d.quack();
    d.swim();
    cout<<endl;
    cout<<endl;
////////////////////////////////////////////////
               //case03//
    Manager *e = new Manager(2,"Aviral Srivastava",2000); 
    e->display(); 
    e->calculateSalary(); 
  cout<<endl;
  cout<<endl;
//////////////////////////////////////////////////
                      //case 05//

Employee *a = new Mmanager(1,"abi", 10000); 
a->Ddisplay(); 
a->calculateSalary(); 
Mmanager *m = new Mmanager(2,"Aviral",300000); 
m->Ddisplay(); 
m->calculateSalary(); 
cout<<endl;
Department *hrd = new HRDepartment(1,"HR Deprtment",2);
 hrd->appraiseEmployee(a); 
  hrd->appraiseEmployee(m); 
  cout<<endl;
  cout<<endl;
///////////////////////////////////////////////////////////
                          //case 09//
 Emplloyee w1(50000), w2(10000);
   if( w1 < w2 ) {
    cout << "Salary of Employee1 is less than Employee2 " << endl;
   } 
   else {
    cout << "Salary of Employee2 is less than Employee1 " << endl;
        }
        cout<<endl;
 ////////////////////////////////////////////////////////
                              //case 07//
Emmployee *arr = new Emmployee [2];
    Emmployee j;
    HRDeepartment hrde = HRDeepartment();
    for (int k = 0; k<2; k++)
    {
         arr[k];
        j = hrde.findBestEmployee(&arr[k]);
        
    }
    j.Dissplay();
    delete arr;
    cout<<endl;
    cout<<endl;
////////////////////////////////////////////////////
                   // case 10//
                   
DDepartment *y = new EEmployee(300000); 
    y->ddisplay(); 
    y->raiseSalary();
    y->ddisplay(); 
    y = new Hr(250000,50000); 
    y->ddisplay(); 
    y->raiseSalary(); 
    y->ddisplay(); 
    delete y; 
    cout<<endl;
////////////////////////////////////////////////////
                          //case 08//friend class
	Empployee sallary;
	supervisor IDD;
	IDD.showEmployee(sallary);
                          
////////////////////////////////////////////////////
                       //case 06//
Eemployee *b =new Managerr(11027, "Aviral", 100000, 0);
 Ddepartment *hrda= new HRDdepartment(1, "hr");
 hrda->appraiseEmployee(b);
 b->displayy();
 cout<<endl;
 cout<<endl;
}
