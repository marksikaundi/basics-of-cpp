//Datatypes in cpp
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int yearBirth = 2000;
    char gender = 'm';
    bool isOrderThan18 = true;
    float averageGrade = 4.5;
    double balance = 5364642462626;


    cout <<"size of int is "<<sizeof(int) <<"bytes\n";
    cout << "Int min value is " <<INT_MIN <<endl;
    cout << "Int nax value is " <<INT_MAX <<endl;
    cout << "Size of Unsigned is " <<sizeof(unsigned int) <<"bytes";
    cout <<"Size of char is "<<sizeof(char) <<"bytes\n";
    cout <<"Size of bool is "<<sizeof(bool) <<"bytes\n";
    cout <<"Size of float is "<<sizeof(float) <<"bytes\n";
    cout <<"Size of double is "<<sizeof(double) <<"bytes\n";

    
}