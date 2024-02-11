#include "devicemouse.h"
#include <iostream>

using namespace std;
DeviceMouse::DeviceMouse()
{
    primaryButton = 0;
}

void DeviceMouse::setPrimaryButton()
{
    do
    {

        cin >> primaryButton;
        if (primaryButton != 1 && primaryButton != 2)
        {
            cout << endl << "Please enter either 1 or 2" << endl;
        }

    }
    while (primaryButton != 1 && primaryButton != 2);
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
