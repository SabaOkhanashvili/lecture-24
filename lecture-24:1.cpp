#include <iostream>
using namespace std;

int main()
{
    double avg,number1,number2,number3,number4,number5;
    
    cout << "მიუთითეთ 1 ნომერი: ";
    cin >> number1;
    
    cout << "მიუთითეთ 2 ნომერი: ";
    cin >> number2;
    
    cout << "მიუთითეთ 3 ნომერი: ";
    cin >> number3;
    
    cout << "მიუთითეთ 4 ნომერი: ";
    cin >> number4;
    
    cout << "მიუთითეთ 5 ნომერი : ";
    cin >> number5;
    
    
    avg = (number1+number2+number3+number4+number5) / 5;
    
    cout<<"The average is: "<<avg<<endl;
    return 0;
}