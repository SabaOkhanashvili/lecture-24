#include <iostream>
using namespace std;

int main()
{
   int arr[10], tot=10, i, elem, j, found=0;
    cout<<"შეიყვანეთ 10 მასივის ელემენტი: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nშეიყვანეთ ელემენტი წასაშლელად: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nელემენტი არ არის ნაპოვნი მასივში!";
    else
        cout<<"\nელემენტი წარმატებით წაიშალა!";
    cout<<endl;
    return 0;
}