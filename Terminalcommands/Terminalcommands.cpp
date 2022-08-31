// Terminalcommands.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>


using namespace std;

void ping() {
    system("cmd.exe /c ping google.com");
}
void ipConfigurationSetup() {
    char ipConfiguration;
    string quit;
    cout << "which Ip config" << endl;
    cout << "1: ipconfig /flushdns" << endl;
    cout << "2: ipcongig /release" << endl;
    cout << "3: ipconfig /renew" << endl;
    cin >> ipConfiguration;
    switch (ipConfiguration) {
    case '1':
        system("cmd.exe /c ipconfig /flushdns");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }
        break;
    case '2':
        system("cmd.exe /c ipconfig /release");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }
        break;
    case '3':
        system("cmd.exe /c ipconfig /renew");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }
        break;
    }

}




int main(int argc, char* argv[]) {
    //char sfcOperation;
    //sfcOperation == "sfc /scannow";
    system("dir C://");
    int oper = 0;
    char i;
    char ipConfiguration;
    string quit;

    cout << "***************************************************" << endl;
    cout << "*       Enter what function you want to do        *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  1: SFC Scan now                                *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  2: Check disk                                  *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  3: System Info                                 *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  4: Ipconfig commands                           *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  5: ping                                        *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  6: DISM                                        *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  7: msconfig screen                             *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  8:                                             *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  9: Opens task scheduler                        *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  10: Restart using command prompt               *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  11: Windows memory test built in               *" << endl;
    cout << "***************************************************" << endl;
    cout << "*  12: Windows TPM window                         *" << endl;
    cout << "***************************************************" << endl;

    cout << "Enter choice: ";
    cin >> oper;


    switch (oper) {
    case 1:
        //sfcOperation;
        system("cmd.exe /c sfc /scannow");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }
        break;

    case 2:
        cout << "Which Drive would you like to check" << endl;
        cin >> i;
        system("cmd.exe /c chkdsk /f /r /x /b " + i);
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }        
        break;
    case 3:
        system("cmd.exe /c systeminfo");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }        
        break;
    case 4:
        //ipConfigurationSetup;
        cout << "which Ip config" << endl;
        cout << "1: ipconfig /flushdns" << endl;
        cout << "2: ipcongig /release" << endl;
        cout << "3: ipconfig /renew" << endl;
        cin >> ipConfiguration;
        switch (ipConfiguration) {
        case '1':
            system("cmd.exe /c ipconfig /flushdns");
            cout << "press q to quit" << endl;
            cin >> quit;
            if (quit == "q") {
                terminate;
            }
            break;
        case '2':
            system("cmd.exe /c ipconfig /release");
            cout << "press q to quit" << endl;
            cin >> quit;
            if (quit == "q") {
                terminate;
            }
            break;
        case '3':
            system("cmd.exe /c ipconfig /renew");
            cout << "press q to quit" << endl;
            cin >> quit;
            if (quit == "q") {
                terminate;
            }
            break;
        }
    case 5:
        system("cmd.exe /c ping google.com");
        cout << "press q to quit" << endl;
        cin >> quit;
        if (quit == "q") {
            terminate;
        }

        break;

    case 6: 
        system("cmd.exe /c DISM /Online /Cleanup-Image /RestoreHealth");
        if (quit == "q") {
            terminate;
        }
        break;
    case 7:
        system("msconfig.exe");
        if (quit == "q") {
            terminate;
        }
        break;
    case 8:
        system("");
        if (quit == "q") {
            terminate;
        }
        break;
    case 9:
        system("taskschd.msc");
        if (quit == "q") {
            terminate;
        }
        break;

    case 10:
        system("cmd.exe /c shutdown /r");
            break;
    case 11:
        system("MdSched.exe");
        break;
    case 12:
        system("tpm.msc");
        break;

    default:
        cout << "Not a valid entry" << endl;
        

    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
