#include "VRController.h"

VRController::VRController(const string& controllerType, int initialBatteryLevel)
    : type(controllerType), batteryLevel(initialBatteryLevel) {}

void VRController::connectToHeadset() {
    
}

void VRController::sendInput(const std::string& input) {
    

}

string VRController::getType() const {
    return type;
}

int VRController::getBatteryLevel() const {
    return batteryLevel;
}