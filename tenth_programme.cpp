#include<iostream>
using std::string;
//2.abstraction
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
//1.encapsulation
class Employee:AbstractEmployee {
    private:
   // string Name;
    string Company;
    int Age;
protected:
    string Name;
    public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(age>=18)
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        std::cout<<"Name -" << Name << std::endl;
        std::cout<<"Company -" << Company << std::endl;
        std::cout<<"Age -" << Age << std::endl;
    }
    Employee(string name,string company,int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    //1.encapsulation
    void AskForPromotion()
    {
        if(Age>30)
        std::cout<< Name <<" got promoted "<< std::endl;
    else
     std::cout << Name <<" , sorry NO promotion for you! "<<std::endl;
    }
//2.abstraction
//4.polymorphism
    virtual void Work()
    {
        std::cout<<Name<<" is checking email, task backing,performing tasks..."<< std::endl;
    }
};
//3.inheritance
class Developer:public Employee{
    public:
    string FavProgrammingLanguage;
    Developer (string name,string company,int age,string FavProgrammingLanguage)
    :Employee(name,company,age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
        //inheritance in not working this line
    }
    void FixBug()
    {
        std::cout<< getName()<<" fixed bug using " << FavProgrammingLanguage << std::endl;
    }
    void Work()
    {
        std::cout<<Name<<" is writing "<< FavProgrammingLanguage << "code"<< std::endl;
    }
};
class Teacher : public Employee{
    public:
    string Subject;
    void PrepareLessson(){
        std::cout << Name <<" is preparing " << Subject << " lesson " << std::endl;
    }
    Teacher (string name,string company,int age, string subject)
    :Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work()
    {
        std::cout<<Name<<" is teaching "<< Subject << "code"<< std::endl;
    }
};
int main()
{
    /* encapsulation
    Employee employee1 = Employee("Saldina","YT.CodeBeauty",25);
    //class-object   Employee1 employee1; 
    //class-object   employee1.Name = "Sadlina";
    //class-object   employee1.Company = "YT-CodeBeauty";
    //class-object   employee1.Age = 25;
  employee1.IntroduceYourself();
  
  Employee employee2 = Employee("Jhon","Jhon",35);
    //class-object  Employee employee2;
    //class-object   employee2.Name = "Jhon";
    //class-object   employee2.Company = "Amazone";
    //class-object   employee2.Age = 35;
  employee2.IntroduceYourself();

  employee1. setAge(15);
  std::cout<< employee1.getName() <<" is " << employee1.getAge() <<" years old"<< std::endl;
*/
  /*abstraction
  Employee employee1 = Employee("Saldina","YT.CodeBeauty",25);  
  Employee employee2 = Employee("Jhon","Jhon",35);
  employee1.AskForPromotion();
  employee2.AskForPromotion();*/
  /*inheritance
  Developer d = Developer("Saldina","YT.CodeBeauty",25);  
  Developer d = Developer("Jhon","Jhon",35);
  Developer d=Developer("Saldina", "YT-CodeBeauty",25,"C++");
  d.FixBug();
  d.AskForPromotion

  Developer d = Developer("Saldina","YT.CodeBeauty",25);  
  Teacher t = Teacher("Jack","Cool School",35,"History");
  t.PrepareLessson();
  t.AskForPromotion*/
  Developer d = Developer("Saldina","YT.CodeBeauty",25,"c++");  
  Teacher t = Teacher("Jack","Cool School",35,"History");
//   d.Work();
//   t.Work();
Employee* e1 = &d;
Employee* e2 = &t;

e1->Work();
e2->Work();
}
