#include <iostream>
using namespace std;

void simpleAverage(int &num1,int &num2){
    num1=1;
    num2=7;
    cout <<num1+num2<<endl;
}

int main()
{
    int num1=7;
    int num2=9;

    // simpleAverage(num1,num2); // call by value

    simpleAverage(num1,num2);
    
    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}