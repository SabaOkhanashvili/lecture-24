#include <iostream>

using namespace std;

int main()
{
    int i,j,arr[10][10],sum,rows,cols;
    cout<<"\n შეიყვანეთ რიგების რაოდენობა    : ";
    cin>>rows;
    
    cout<<"\n შეიყვანეთ სვეტების რაოდენობა : ";
    cin>>cols;
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        cout<<"\n მიუთითეთ ელემენტი : ";
        //<<arr[i]<<arr[j];
        cin>>arr[i][j];
        }
        
    }
    cout<<"\n Matrix is : \n";
    for(i=0;i<rows;i++){
        cout<<"";
        for(j=0;j<cols;j++){
            if(i>j){
                cout<<" ";
                cout<<arr[i][j];  
            }
        }cout<<"\n"
    }
    sum = 0;
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++){
        if(i>j){
            sum = sum+arr[i][j];
       cout<<" \n ქვედა სამკუთხედის ელემენტების ჯამი : "<<sum;
  
    } 
    }
    return 0;
}