#include <iostream>
#include <string>

using std::string;

class Employee
{
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourself()
        {
            std::cout << "Name: " << Name << std::endl;
            std::cout << "Company: " << Company << std::endl;
            std::cout << "Age: " << Age << std::endl;
        }
};

int main()
{
    Employee employee1;
    employee1.Name = "John";
    employee1.Company = "Microsoft";
    employee1.Age = 21;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Tom";
    employee2.Company = "Google";
    employee2.Age = 27;
    employee2.IntroduceYourself();
}
