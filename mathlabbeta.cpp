#include <iostream>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>
#include "Mfunctions.cpp"

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
