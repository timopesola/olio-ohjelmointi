#include "devicedisplay.h"
#include <iostream>

using namespace std;
DeviceDisplay::DeviceDisplay()
{
    displayResolution = 0;
}

void DeviceDisplay::setDisplayResolution()
{
    do
    {
        cin >> displayResolution;
        if (displayResolution < 1 || displayResolution > 10)
        {
            cout << endl << "Please enter a value between 1 and 10" << endl;
        }

    }
    while (displayResolution < 1 || displayResolution > 10);

}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
