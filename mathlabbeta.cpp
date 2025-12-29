#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void wtfisit() {
    cout << "Credits:" << endl;
    cout << "hecker" <<endl;
    cout << "special thanks to:" << endl;
    cout << "MrHacker, Semi" << endl;
}
void help() {
	cout << "Usage:" << endl;
    cout << "exit - Exit from programm" << endl;
	}

void wtfisit();
void startMenu();
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
void enterz() { // main enter method
    
    bool exitprogram = false;
    int n;
    string choice, username;
    username = getenv("USER"); // getting variable of user account name
    while (!exitprogram) { // "!" inverting false and true (false=true, true=false)
    cout << "\x1b[35m" << username << "\x1b[0m" << "\x1b[34m@\x1b[0m" << "\x1b[32mmathlabBeta\x1b[0m" << ">:" << " ";
    cin >> choice;
    // commands router
if(choice == "exit") {
            cout << "bye!" << endl;
            exitprogram = true; // if user enterd "exit", programm closing
        }
        if(choice == "help") {
            help();
        }
        if(choice == "thanksdevelopers") {
            wtfisit();
        }
        if(choice == "calc"){
            calculate();
        }
    }
}
void startMenu() { // start screen
    int anim = 40, anim2 = 40; // art and text anim speed

    
        
cout << "       00     0000     0*0     00°  °00            000000   " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "      0○○0   00○○0    0**0      0  ° 0           0○○○○○○○0  " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "     0○○○○000○○○0    0**0       0°°° 0          0○○○○○○○○0  " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "    0○○00○○0○○○0    0**0        0°°°°0         0 ○○○○○○○0   " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "   0○○0  000○○0    0**0       0000000000      0 0000000     " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "  0○○0  0 0○○0    0**00000   000000000000    0○○○○○○○○0     " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << " 0○○0    0○○0    0********   000000000000   0○○○○○○○○○0     " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim)); 
cout << "0○○0    0○○0  ○ 0000000000   000000000000   000000000       " << endl;
this_thread::sleep_for(std::chrono::milliseconds(anim2));
        cout << "Welcome to " << "\x1b[32mMath.LAB\x1b[0m" << " (under construction)\n";
        this_thread::sleep_for(std::chrono::milliseconds(anim2));
        cout << "you may see available actions with command *help*\n";
        this_thread::sleep_for(std::chrono::milliseconds(anim2));
        cout << "i's " << "\x1b[31mBeta\x1b[0m"  << " test, not finished version" << endl;
        enterz();
        }
// enter point for start the programm
int main() {
    startMenu();
}
