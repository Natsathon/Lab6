#include<iostream>
using namespace std;

int main(){
    int x = 1;
    int y = 0;
    int z = 0;
    while ( x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if ( x%2 == 0 and x != 0 ){
            y = y+1;
        }else if( x%2 != 0){
            z = z+1;
        }
    }
    cout << "#Even numbers = "<< y << endl;
    cout << "#Odd numbers = "<< z << endl;
    return 0;
}