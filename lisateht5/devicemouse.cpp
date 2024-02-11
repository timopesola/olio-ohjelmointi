#include "devicemouse.h"
#include <iostream>

using namespace std;
DeviceMouse::DeviceMouse()
{
    primaryButton = 0;
}

void DeviceMouse::setPrimaryButton()
{
    cin >> primaryButton;
    if (primaryButton != 1 && primaryButton != 2)
    {
        cout << endl << "Please enter either 1 or 2" << endl;
        DeviceMouse::setPrimaryButton();
    }
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
