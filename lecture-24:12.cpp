#include <iostream>
using namespace std;

int main()
{
    int b[5][5],big2 = 1,big3 = 0,m,n,y,j;
    cout<<"შეიყვანეთ სტრიქონების და სვეტების რაოდენობა (მაქს. 5):";
    cin>>n>>m;
    cout<<"შეიყვანეთ მასივი:\n";
    
    for(y=0;y<n;y++)
        for(j=0;j<m;j++)
            cin>>b[y][j];
    for(y=0;y<n;y++)
        for(j=0;j<m;j++){
            if(b[y][j]>big2)
                big2=b[y][j];
        }
    for(y=0;y<m;y++)
        for(j=0;j<n;j++){
            if(b[y][j]>big2&&b[y][j]<big2)
                big3=b[y][j];
        }
    cout<<"\nუდიდესი რიცხვი :"<<big2;
    cout<<"\nმეორე უდიდესი რიცხვი:"<<big3;    
    

    return 0;
}