#include "VRChatSystem.h"

VRChatSystem::VRChatSystem() {}

void VRChatSystem::sendMessage(const string& message) {

    chatHistory.push_back(message);
}

string VRChatSystem::receiveMessage() {

    if (!chatHistory.empty()) {
        return chatHistory.back();
    }
    return "No new messages.";
}

void VRChatSystem::openChatWindow() {
    
}

vector<string> VRChatSystem::getChatHistory() const {

    return chatHistory;
}

void VRChatSystem::broadcastMessage()
{

}