#include <iostream>
using namespace std;
int main ()
{
    double c, f, choice;
    cout << "Choose an option:\n1. Celcius to Farenheit.\n2. Farenheit to Celcius.\n\nYour Choice: ";
    cin >> choice;
    if(choice==1){
        cout << "Enter Celcius: ";cin>>c;
        f = c*1.8+32;
        cout << "Farenheit: "<<f<<endl;
    }else if(choice==2){
        cout << "Enter Farenheit: ";cin>>f;
        c = (f-32)/1.8;
        cout << "Celcius: "<<c<<endl;
    }
    return 0;
}
