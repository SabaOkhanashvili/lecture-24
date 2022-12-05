#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int row, col, m1[10][10], m2[10][10], sum[10][10];

   cout<<"შეიყვანეთ რიგების რაოდენობა (უნდა იყოს >1 და <10): ";
   cin>>row;
   cout<<"შეიყვანეთ სვეტის რაოდენობა (უნდა იყოს >1 და <10): ";
   cin>>col;
   cout << "შეიყვანეთ პირველი 1 მატრიცის ელემენტები: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "შეიყვანეთ პირველი 1 მატრიცის ელემენტები: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"გამომავალი: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
   }

    return 0;
}