#include "VirtualRealityHeadset.h"

VirtualRealityHeadset::VirtualRealityHeadset(const string& headsetModel, int initialBatteryLevel)
    : model(headsetModel), isConnected(false), batteryLevel(initialBatteryLevel) {}

void VirtualRealityHeadset::connectToGame() {
    
    isConnected = true;
}

void VirtualRealityHeadset::disconnectFromGame() {
    
    isConnected = false;
}

void VirtualRealityHeadset::chargeHeadset() {
    
    batteryLevel = 100; // Assuming 100 represents a fully charged battery
}


string VirtualRealityHeadset::getModel() const {
    return model;
}

bool VirtualRealityHeadset::getIsConnected() const {
    return isConnected;
}

int VirtualRealityHeadset::getBatteryLevel() const {
    return batteryLevel;
}