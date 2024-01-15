#ifndef VRCONTROLLER_H
#define VRCONTROLLER_H

#include <string>

using namespace std;

class VRController {
private:

    string type;
    int batteryLevel;

public:

    VRController(const string& controllerType, int initialBatteryLevel);

    void connectToHeadset();
    void sendInput(const string& input);
    string getType() const;
    int getBatteryLevel() const;
};

#endif 