#include <iostream>
using namespace std;

int main(){

    int x;
    cout<< "Enter the no. ";
    cin>> x;
    for (int i = 0; i < x; i++){
        for (int j = 0; j<x-i-1; j++){
            cout<<' ';
        }

        for (int k = 0; k<i+1; k++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
    
}