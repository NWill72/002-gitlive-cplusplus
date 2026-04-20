//////////////////////////////////////////////////////////////////////////////////////////////////////
// OHMS LAW CALCULATOR IN C++ - DRAFT - Program Developed By Nigel A Williams                       //
// This program is a simple Ohm's Law calculator written in C++.                                    //
// It allows the user to calculate voltage, current, and resistance based on Ohm's Law (V = I * R). //
// It provides a simple menu interface for the user to select which calculation to perform.         //
//////////////////////////////////////////////////////////////////////////////////////////////////////

// OhmsLawC++ - OhmsLawC++.cpp
// A simple Ohm's Law calculator in C++
// Developed by Nigel A Williams
// Copyright (c) 2025

#include <iostream>
#include <conio.h>

// (CLASS DECLARATION)
// -----------------------------
class COhmsLaw
{
public:
    COhmsLaw();
    ~COhmsLaw();

public:
    float m_Voltage;
    float m_Current;
    float m_Resistance;

public:
    void SetVoltage(float);
    void SetCurrent(float);
    void SetResistance(float);

    void CalculateVoltage();
    void CalculateCurrent();
    void CalculateResistance();

    float GetVoltage();
    float GetCurrent();
    float GetResistance();
};


// -----------------------------
// (CLASS IMPLEMENTATION)
COhmsLaw::COhmsLaw()
{
    m_Voltage = 0;
    m_Current = 0;
    m_Resistance = 0;
}

COhmsLaw::~COhmsLaw()
{

}

void COhmsLaw::SetVoltage(float voltage = 0)
{
    m_Voltage = voltage;
}

void COhmsLaw::SetCurrent(float current = 0)
{
    m_Current = current;
}

void COhmsLaw::SetResistance(float resistance = 0)
{
    m_Resistance = resistance;
}

void COhmsLaw::CalculateVoltage()
{
    m_Voltage = m_Current * m_Resistance;
}

void COhmsLaw::CalculateCurrent()
{
    m_Current = m_Voltage / m_Resistance;
}

void COhmsLaw::CalculateResistance()
{
    m_Resistance = m_Voltage / m_Current;
}

float COhmsLaw::GetVoltage()
{
    return m_Voltage;
}

float COhmsLaw::GetCurrent()
{
    return m_Current;
}

float COhmsLaw::GetResistance()
{
    return m_Resistance;
}


int main()
{
    std::cout << "===============================" << "\n";
    std::cout << "A BASIC OHMS LAW CALCULATOR IN C++" << "\n";
    std::cout << "===============================" << "\n";
    std::cout << "SELECT CHOICE FROM MENU ITEMS" << "\n";
    std::cout << "1. CALCULATE VOLTAGE" << "\n";
    std::cout << "2. CALCULATE CURRENT" << "\n";
    std::cout << "3. CALCULATE RESISTANCE" << "\n";
    std::cout << "===============================" << "\n";
    std::cout << "\n";
    std::cout << "Press ESC to stop" << "\n";
    std::cout << "\n";


    COhmsLaw circuit;
    float curr = 0;
    float resi = 0;
    float amps = 0;
    float ohms = 0;
    float volts = 0;
    int key = 0;
    int menu_select = 0;

    // TO DO MENU SELECT
    // key = getchar();
    /*
    while (true)
    {
        menu_select = _getch(); //  getchar();  // Get user input
        if (menu_select == 27) // ESC key
            break;
    }
    */

    while (true) // NOT ESC KEY PRESSED
    {
        menu_select = _getch(); //  getchar();  // Get user input
        if (menu_select == 27) // ESC key
        {
            std::cout << "\n";
            std::cout << "ESCAPE KEY PRESSED !!!\n";
            std::cout << "EXITING PROGRAM OHMS LAW IN C++ !!!\n";
            break;
        }
            

        std::cout << "\n";
        switch (menu_select)
        {
        case '1':
        {
            std::cout << "CALCULATING VOLTAGE\n";
            std::cout << "Enter Current: ";
            std::cin >> curr;
            circuit.SetCurrent(curr);
            std::cout << "Enter Resistance: ";
            std::cin >> resi;
            circuit.SetResistance(resi);
            circuit.CalculateVoltage();
            volts = circuit.GetVoltage();
            std::cout << "Voltage: " << volts << "\n";
            break;
        }

        case '2':
        {
            std::cout << "CALCULATING CURRENT\n";
            std::cout << "Enter Voltage: ";
            std::cin >> volts;
            circuit.SetVoltage(volts);
            std::cout << "Enter Resistance: ";
            std::cin >> resi;
            circuit.SetResistance(resi);
            circuit.CalculateCurrent();
            amps = circuit.GetCurrent();
            std::cout << "Current: " << amps << "\n";
            break;
        }

        case '3':
        {
            std::cout << "CALCULATING RESISTANCE\n";
            std::cout << "Enter Voltage: ";
            std::cin >> volts;
            circuit.SetVoltage(volts);
            std::cout << "Enter Current: ";
            std::cin >> curr;
            circuit.SetCurrent(curr);
            circuit.CalculateResistance();
            ohms = circuit.GetResistance();
            std::cout << "Resistance: " << ohms << "\n";
            break;
        }

        default:
        {
            std::cout << "Enter Valid Entry !!!";
            break;
        }
        }
    }
    return 0;
}


/*
// #include <iostream>
int main()
{
    int menu_select;

    std::cout << "Press 1, 2, 3 to make a selection, ESC to exit.\n";

    while (true)
    {
        menu_select = _getch(); //  getchar();  // Get user input

        if (menu_select == 27) // ESC key
            break;

        std::cout << "\n";

        switch (menu_select)
        {
            case '1':  // ASCII 49
                std::cout << "Selection 1\n";
                break;
            case '2':  // ASCII 50
                std::cout << "Selection 2\n";
                break;
            case '3':  // ASCII 51
                std::cout << "Selection 3\n";
                break;
            default:
                std::cout << "Invalid Entry !!!\n";
                break;
        }
    }

    std::cout << "Program exited.\n";
    return 0;
}
*/


/*
    // CSHARP 

    char select;
    do
    {
         select = Console.ReadKey(true).KeyChar; // Read key without displaying it
         Console.WriteLine(); // Ensures a newline for better readability
         MenuSelect(select);
    }
    while (select != (char)ConsoleKey.Escape); // Exit when Escape key is pressed
*/


/*
   
// C++ WINDOWS GETKEY()

#include <iostream>
using namespace std;
#include <windows.h>
TCHAR GetKey() //returns ASCII code if you press a character(a, ? , * ,j, ~ , and so on), and
{              //returns Virtual key code if you dont press a character( VK_UP(up arrow),VK_LEFT(left arrow),VK_SPACE(space), and so on)
INPUT_RECORD InputRecord;
DWORD Writtten;
HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
    while(true)
    {
        ReadConsoleInputA(hStdIn,&InputRecord,1,&Writtten);
        if(InputRecord.EventType==KEY_EVENT&&InputRecord.Event.KeyEvent.bKeyDown) break;
    }
    char ASCII=InputRecord.Event.KeyEvent.uChar.AsciiChar;
    if(ASCII) return ASCII;
    return InputRecord.Event.KeyEvent.wVirtualKeyCode;
}

int main()
{
    char a;
    cout<<"Press Control Key to Exit,char 'n' to say Hello World !"<<endl;
    while(true)
    {
    a=GetKey();
    if(a==VK_CONTROL) break;
    if(a=='n') cout<<"Hello World !\n";
    }
    cout<<"\nPress any Key to continue . . .\n";
    GetKey();
    return 0;
}

*/