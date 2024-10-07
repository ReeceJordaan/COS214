#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include <string>
#include <iostream>

using namespace std;

class LegacyLight
{
    public:
        LegacyLight(bool status);
        ~LegacyLight();

        void performLegacyAction();
        bool getLegacyStatus();
        void setLegacyStatus(bool status);
        string getLegacyDeviceType();
        void legacyUpdate();

    private:
        bool legacyStatus;
};

#endif
