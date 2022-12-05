#include <iostream>

using namespace std;

int main()
{
  int i,j,rows,columns,sum=0;
  cout << "\nგთხოვთ, შეიყვანოთ სტრიქონები და სვეტები =  ";
  cin >> i>>j;
  
  int sumDgnalArr[i][j];
  
  cout << "\nგთხოვთ შეიყვანოთ ნივთები\n";
  
  for(rows = 0;rows < i;rows++){
      for(columns = 0;columns < i;columns++){
          cin>> sumDgnalArr[rows][columns];
      }
  }
  
  for(rows = 0;rows<1;rows++){
      sum=sum+sumDgnalArr[rows][columns];
  }
  cout << "\nდიაგონალური ელემენტების ჯამი = " << sum;

    return 0;
}