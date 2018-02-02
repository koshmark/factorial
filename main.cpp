#include <iostream>
#include <stdlib.h>
using namespace std;

double factorial(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}


int main()
{
    int n;
    int b;
    do{

        cout << "Enter factorial number:" << endl;
        cin >> n;
        cout << "Factorial for number " << n << " is " <<factorial(n) << "." << endl << endl;
        cout << "Continue?" << endl <<" 1 - Yes / 0 - No"<< endl;
        cin >> b;
    }while (b==0);
}
