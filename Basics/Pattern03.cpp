#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows: ";
    cin>> n;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout<< ' ';
        }

        for (int j=0; j<n-i; j++)
        {
            cout<<"* ";
        }
    
    cout<<'\n';
    }
    return 0;
}