#ifndef VIRTUALREALITYHEADSET_H
#define VIRTUALREALITYHEADSET_H

#include <string>

using namespace std;

class VirtualRealityHeadset {
private:

    string model;
    bool isConnected;
    int batteryLevel;

public:

    VirtualRealityHeadset(const string& headsetModel, int initialBatteryLevel);

    void connectToGame();
    void disconnectFromGame();
    void chargeHeadset();
    string getModel() const;
    bool getIsConnected() const;
    int getBatteryLevel() const;
};

#endif