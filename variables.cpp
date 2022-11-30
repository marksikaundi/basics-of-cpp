//Variables in c++
#include <iostream>
using namespace std;

int main()
{
    // float anualSalary = 50000.99;
    // float monthlySalary = anualSalary / 12;
    float anualSalary;
    cout<< "Please enter your Anual salary: ";
    cin >> anualSalary;
    float monthlySalary = anualSalary / 12;
    cout << "Your Monthly Salary is " << monthlySalary <<endl; 
    cout<< "In Ten years you will earn " << anualSalary * 10;

    char character = 'a';
}