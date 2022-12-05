#include <iostream>

using namespace std;

int main()
{
    int arr[5][5],a=0,b=0,i,j,n;
    cout <<"შეიყვანეთ მატრიცის ზომა (მაქს. 5): ";
    cin >> n;
    cout<<"შეიყვანეთ მატრიცა: \n";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>arr[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(j>i)
    a+=arr[i][j];
    if(i>j)
    b+=arr[i][j];
    cout<<"\nელემენტების ჯამი დიაგონალის ზემოთ:"<<a;
    cout<<"\nელემენტების ჯამი დიაგონალის ქვემოთ:"<<b;
    
    
    

    return 0;
}