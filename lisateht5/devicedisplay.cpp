#include "devicedisplay.h"
#include <iostream>

using namespace std;
DeviceDisplay::DeviceDisplay()
{
    displayResolution = 0;
}

void DeviceDisplay::setDisplayResolution()
{
    cin >> displayResolution;
    if (displayResolution < 1 || displayResolution > 10)
    {
        cout << endl << "Please enter a value between 1 and 10" << endl;
        DeviceDisplay::setDisplayResolution();
    }
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
