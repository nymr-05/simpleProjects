#include <iostream>
using namespace std;

int main(){
    int num1, num2, i, gcd;
    cout << "Greatest Common Divisor:" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    for(i=1; i <=num1 && i <=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }
    cout << "Greatest common divisor is " << gcd;
    return 0;
}
