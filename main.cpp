/***************************
 * Alex Hoffmann
 * 2/22/17
 * Chapter 4 Program
 ****************************/


#include <iostream>

using namespace std;

int main() {

    int totalCookies;
    int boxesNeeded;
    int leftoverCookies;
    int containersNeeded;
    int leftoverBoxes;

    cout << "Please enter the total number of cookies: " << endl;

    //Receive totalCookes input
    cin >> totalCookies;

    //Determine boxes needed, calculate leftover cookies
    if (totalCookies >= 24 ) {
        boxesNeeded = totalCookies / 24;
        leftoverCookies = totalCookies % 24;
    }
    else {
        boxesNeeded = 0;
        leftoverCookies = totalCookies;
    }


    //Determine containers needed, calculate leftover boxes
    if (boxesNeeded >= 75){
        containersNeeded = boxesNeeded / 75;
        leftoverBoxes = boxesNeeded % 75;
    }
    else {
        containersNeeded = 0;
        leftoverBoxes = boxesNeeded;
    }

    //Output number boxes needed, leftover cookies, number of containers needed, leftover boxes
    cout << "The number of cookie boxes needed to hold the cookies: " << boxesNeeded << endl;
    cout << "Leftover cookies: " << leftoverCookies << endl;
    cout << "The number of containers needed to store the cookie boxes: " << containersNeeded << endl;
    cout << "Leftover boxes: " << leftoverBoxes << endl;


    return 0;
}

