#include <iostream>
using namespace std;

int main() {
    int choice, baseFare, distance, distanceFare, durationFare, promo, totalFare, promoFare;
    cout << "Choose your transportation(choose between 1-3):\n1. Car\n2. Bike\n3. Bicycle" << endl;
    cin >> choice;
    cout << "Choose your destination: ";
    cin >> distance;
    cout << "Choose Promo code:\n1.Flat(50tk discount)\n2. Percent(10% discount)" << endl;
    cin >> promo;
    if(choice == 1){
        baseFare = 50;
        distanceFare = distance * 25;
        durationFare = distance *120 /60; // 2tk per minute
        totalFare = baseFare + distanceFare + durationFare;
        if(promo == 1){
            promoFare = totalFare - 50;
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else if(promo == 2){
            promoFare = totalFare - (totalFare*10/100);
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else{
            cout << "Choose a valid promo and try again.";
        }
    }else if(choice == 2){
        baseFare = 30;
        distanceFare = distance * 15;
        durationFare = distance *120 /70; // 2tk per minute
        totalFare = baseFare + distanceFare + durationFare;
        if(promo == 1){
            promoFare = totalFare - 50;
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else if(promo == 2){
            promoFare = totalFare - (totalFare*10/100);
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else{
            cout << "Choose a valid promo and try again.";
        }

    }else if(choice == 3){
        baseFare = 20;
        distanceFare = distance * 10;
        durationFare = distance *120 /20; // 2tk per minute
        totalFare = baseFare + distanceFare + durationFare;
        if(promo == 1){
            promoFare = totalFare - 50;
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else if(promo == 2){
            promoFare = totalFare - (totalFare*10/100);
            cout << "Base Fare: " << baseFare << "tk" << endl;
            cout << "Distance Fare: " << distanceFare << "tk" << endl;
            cout << "Duration Fare: " << durationFare << "tk" << endl;
            cout << "Total Fare: " << totalFare << "tk" << endl;
            cout << "Promo Fare: " << promoFare << "tk" << endl;
        }else{
            cout << "Choose a valid promo and try again.";
        }
    }else{
        cout << "choose valid options and try again.";
    }


    return 0;
}
