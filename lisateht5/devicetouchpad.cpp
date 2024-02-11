#include "devicetouchpad.h"
#include <iostream>

using namespace std;
DeviceTouchPad::DeviceTouchPad()
{
    touchPadSensitivity = 0;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cin >> touchPadSensitivity;
    if (touchPadSensitivity < 1 || touchPadSensitivity > 5)
    {
        cout << endl << "Please enter a value between 1 and 5" << endl;
        DeviceTouchPad::setTouchPadSensitivity();
    }
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
