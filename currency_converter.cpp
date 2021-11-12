#include <iostream>
using namespace std;

int main(){

    int choice;
    float usd, bdt, ars, inr;
    cout << "Currency COnverter:" << endl;
    cout << "-------------------" << endl;
    cout << "Press 1: BDT to USD" << endl;
    cout << "Press 2: USD to BDT" << endl;
    cout << "Press 3: USD to INR" << endl;
    cout << "Press 4: USD to ARS" << endl;
    cout << "-------------------" << endl;
    cout << "Choose: ";
    cin >> choice;

    switch(choice){
        case 1:
        cout << "Enter amount (BDT): ";
        cin >> bdt;
        usd = bdt *86.13;
        cout << bdt << " taka is $" << usd;
        break;

        case 2:
            cout << "Enter amount (USD): ";
            cin >> usd;
            bdt = usd /86.13;
            cout << "$" << usd << " is BDT " << bdt;
        break;

        case 3:
            cout << "Enter amount (USD): ";
            cin >> usd;
            inr = usd *74.18;
            cout << "$" << usd << " is INR " << inr;
        break;
        case 4:
            cout << "Enter amount (USD): ";
            cin >> usd;
            ars = usd *99.90;
            cout << "$" << usd << " is ARS " << ars;
        break;
    }


    return 0;
}
