#ifndef VRCHATSYSTEM_H
#define VRCHATSYSTEM_H

#include <string>
#include <vector>

using namespace std;

// 1 - I would change this class to a singleton. Chat systems are usually isolated from game logic but constantly required at different situations

class VRChatSystem {
private:
    vector<string> chatHistory;

public:
    VRChatSystem();

    void sendMessage(const string& message);
    string receiveMessage();

    // This one might require a bit of visualization of an abstract concept: separating data from visuals
    // Ideally, you would use VRChatSystem as the access point for chat data - sending, receiving, parsing and storing messages
    // The chat window would be better implemented alongside other UI elements. The idea is o reduce dependencies between data a nd visualization
    // Who knows in 5 years time how much code would be written in this class and what if a new designer wants an overhaul in all game UIs

    void openChatWindow();
    vector<string> getChatHistory() const;

    void broadcastMessage();
};

#endif 

