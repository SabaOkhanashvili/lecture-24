
#include <iostream>
using namespace std;

int main()
{
   int i, j, matrix[10][10], row, col;
   int sum = 0;
   

   cout<<"\nშეიყვანეთ რიგების რაოდენობა : ";
   cin>>row;
 
   cout<<"\nშეიყვანეთ სვეტების რაოდენობა : ";
   cin>>col;
   
   for(i=0;i<row;i++){
       for(j=0;j<col;j++){
         cout<<"\nშეიყვანეთ ელემენტი a[%d][%d] : ", i, j;
         cin>>matrix[i][j];
       }
   }
   for(i=0;i<row;i++){
       for(j=0;j<col;j++){
           if(i==j)
            sum = sum + matrix[i][j];
       }
   }
    cout<<"\nდიაგონალური მასივის ელემენტების დამატება მატრიცაში არის: "<<sum;

    return 0;
}