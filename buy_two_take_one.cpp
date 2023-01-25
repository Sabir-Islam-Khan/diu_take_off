#include<iostream>

using namespace std;

int main()
{   
     
    int a,b,c;

    cin >> a >> b >> c;

    if( (a+b)% 2 == 0 || (b+c)%2 == 0 || (c+a)%2 == 0) {
        cout << "3 Kimonos for Nezuko" << endl;
    } else {
        cout << "You have to choose two" << endl;
    }
    return 0;
}