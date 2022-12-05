#include <iostream>

using namespace std;

int main()
{
    int i, count,sum,inputArray[500];
    float average;
    
    cout << "შეიყვანეთ ელემენტთა რაოდენობა\n";
    cin >> count;
    
    cout << "შეიყვანეთ" << count << " ელემენტები\n";
    
    for(i=0;i<count;i++){
        cin>>inputArray[i];
    }
    sum=0;
    
    for(i = 0;i<count;i++){
        sum+= inputArray[i];
    }
    average = (float)sum/count;
    cout << "საშუალო = " << average;
    return 0;
}
