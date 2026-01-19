#include <iostream>

using namespace std;

void calculatef(int fst, char act, int scnd) { // calculate function with no enviroment
    
		if(act == '+') {
            cout << endl;
        cout << fst + scnd;
        }
        if(act == '-') {
            cout << endl;
        cout << fst - scnd;
        }
        if(act == '*') {
            cout << endl;
        cout << fst * scnd;
        }
        if(act == '/') {
            cout << endl;
        cout << fst / scnd;
        }
        if(act == ':') {
            cout << endl;
        cout << fst / scnd;
        }
		
		}

        void calculate() { // calculate function with enviroment
    float num, num1, result = 0; 
    int n;
    bool active = true;
    short mainmenuaction, countegg = 0;
    char choseactcalc;
    while(active) {
    cout << "Enter the first number: ";
    cin >> num;
    cout << "Enter the second number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> choseactcalc;
 if (choseactcalc == '+') {
         result = num + num1;
         cout << num << " " << choseactcalc << " " << num1 << " = " << result << endl;
 }
     if (choseactcalc == '-') {
         result = num - num1;
         cout << num << " " << choseactcalc << " " << num1 << " = " << result << endl;
 }
     if (choseactcalc == '*') {
         result = num * num1;
         cout << num << " " << choseactcalc << " " << num1 << " = " << result << endl;
 }
     if (choseactcalc == '/') {
         result = num / num1;
         cout << num << " " << choseactcalc << " " << num1 << " = " << result << endl;
 }
     if (choseactcalc == ':') {
         result = num / num1;
         cout << num << " " << choseactcalc << " " << num1 << " = " << result << endl;
 }
 if (choseactcalc == '/' and num == 0 or choseactcalc == '/' and num1 == 0) {
    cout << "WHAT?" << endl;
    countegg ++; 
 
 if (countegg == 4) {
     
    cout << "  ΘΘΘΘ    " <<"\x1b[31m / / /\x1b[0m" <<"   ΘΘΘΘ         " << endl;
    cout << " Θ    Θ   " <<"\x1b[31m/ / /\x1b[0m"<<"   Θ    Θ        " << endl;
    cout << " ΘΘΘΘΘΘ  " <<"\x1b[31m/ / /\x1b[0m"<<"    ΘΘΘΘΘΘ        " << endl;
    cout << "                                " << endl;
    cout << "         Θ   Θ                  " << endl;
    cout << "        Θ Θ Θ Θ                 " << endl;
    cout << "       Θ   Θ   Θ                "<< endl;
    cout << "STOP DO IT!" << endl;
    break;
 }
}
    cout << "Exit to Main Menu?" << endl; // "exit to main menu?"" message
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> mainmenuaction;
    if(mainmenuaction == 1) {
        active = false;
    }
}
}

