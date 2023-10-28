#include <iostream>

using namespace std;

int main() {
    int arrSize = 20;
    char firstName[arrSize];
    char lastName[arrSize];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.get(firstName, arrSize).get();
    cout << "What is your last name? ";
    cin.get(lastName, arrSize).get();
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << char (grade + 1) << endl;
    cout << "Age: " << age << endl;

}