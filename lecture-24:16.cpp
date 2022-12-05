#include <iostream>

using namespace std;

int main()
{
    int arr[4][2] = {
		{ 20, 21 },
		{ 30, 31 },
		{ 40, 41 },
		{ 50, 51 }
		} ;
		
		int i,j;
		
		cout<<"2D მასივის ბეჭდვა:\n";
		
		for(i=0;i<4;i++){
		    for(j=0;j<2;j++){
		        cout<<"\t"<<arr[i][j];
		    }
		    cout<<endl;
		}
    return 0;
}