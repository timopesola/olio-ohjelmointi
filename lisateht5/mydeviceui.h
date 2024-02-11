#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include <iostream>
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    DeviceMouse* objectDeviceMouse;
    DeviceTouchPad* objectDeviceTouchPad;
    DeviceDisplay* objectDeviceDisplay;
};

#endif // MYDEVICEUI_H
