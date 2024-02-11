#include "mydeviceui.h"
#include <iostream>
#include <limits>

using namespace std;
MyDeviceUI::MyDeviceUI()
{
    objectDeviceDisplay = new DeviceDisplay();
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad();
    MyDeviceUI::uiShowMenu();
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceDisplay;
    delete objectDeviceTouchPad;
}

void MyDeviceUI::uiShowMenu()
{
    int choice = 0;
    do
    {
        cout << "DEVICE MENU" << endl;
        cout << "===========" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Devices Information" << endl;
        cout << "5: Finish" << endl;
        cout << endl;
        cout << "Choose: " << endl;
        cin >> choice;
        cout << endl;
        if (choice==1)
        {
            MyDeviceUI::uiSetMouseInformation();
        }
        if (choice==2)
        {
            MyDeviceUI::uiSetTouchPadInformation();
        }
        if (choice==3)
        {
            MyDeviceUI::uiSetDisplayInformation();
        }
        if (choice==4)
        {
            MyDeviceUI::uiShowDeviceInformation();
        }
        if (choice < 1 || choice > 5)
        {
            cout << "Choose one of the options, please" << endl;
        }
    }
    while (choice != 5);
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    cout << "Set Mouse Primary Button: ";
    objectDeviceMouse->setPrimaryButton();
    cout << endl;
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "=========================" << endl;
    cout << "Set Touch Pad Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    cout << "Set Touch Pad Sensitivity: ";
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;
    cout << "Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    cout << "Set Display Resolution: ";
    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "DEVICE INFORMATION" << endl;
    cout << "==================" << endl;
    cout << "Mouse Device ID: ";
    cout << objectDeviceMouse->getDeviceID() << endl;
    cout << "Mouse Primary Button: ";
    cout << objectDeviceMouse->getPrimaryButton() << endl;
    cout << "Touch Pad Device ID: ";
    cout << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Touch Pad Sensitivity: ";
    cout << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << "Display Device ID: ";
    cout << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display Resolution: ";
    cout << objectDeviceDisplay->getDisplayResolution() << endl;
    cout << endl;
    cout << "Press Enter to continue..." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
