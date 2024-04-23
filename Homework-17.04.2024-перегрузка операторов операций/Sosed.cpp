#include "Sosed.h"

Sosed::Sosed() : Sosed::Sosed("Arkadiy", "Chugunnye Bashmaki", "Perforator", "CRAZYYY!") {}
Sosed::Sosed(string name) : Sosed::Sosed(name, "Chugunnye Bashmaki", "Perforator", "CRAZYYY!") {}
Sosed::Sosed(string name, string shoes) : Sosed::Sosed(name, shoes, "Perforator", "CRAZYYY!") {}
Sosed::Sosed(string name, string shoes, string tool) : Sosed::Sosed(name, shoes, tool, "CRAZYYY!") {}
//main c-tor
Sosed::Sosed(string name, string shoes, string tool, string mentalCondition) {
    SetName(name);
    SetShoes(shoes);
    SetTool(tool);
    SetSleeping(true);
    SetMentalCondition(mentalCondition);
    friendsCount = 3;
    friends = new string[friendsCount];
    for (int i = 0; i < friendsCount; i++)
    {
        int random = rand() % 25;
        friends[i] = sosedFriends[random];
    }
}

Sosed::Sosed(const Sosed& original) : Sosed::Sosed("Arkadiy", "Chugunnye Bashmaki", "Perforator", "CRAZYYY!") {
    this->name = original.name;
    this->shoes = original.shoes;
    this->tool = original.tool;
    this->mentalCondition = original.mentalCondition;
    this->friendsCount = original.friendsCount;
    this->friends = new string[this->friendsCount];
    for (int i = 0; i < this->friendsCount; i++)
    {
        this->friends[i] = original.friends[i];
    }
}

Sosed::~Sosed() {
    delete[] friends;
    friends = nullptr;
}

void Sosed::Never_sleep() {
    cout << "A-HA-HA!!! NO, NO, NO\n";
}

void Sosed::About_myself() const {
    cout << "My name is " << name << ", i am a " << mentalCondition << " And i have a " << tool << "\n";
}

void Sosed::Work() const {
    cout << "I'll put my on now " << shoes << " and take my " << tool << "\n";
    cout << "I urgently need to do something. NOW!\n";
}

void Sosed::printSosed() {
    if (GetSleeping()) {
        Never_sleep();
        About_myself();
        Work();
        cout << GetName() << " friends: ";
        for (int i = 0; i < friendsCount; i++)
        {
            cout << friends[i] << ", ";
        }
        cout << "\n\n";
    }
}

void Sosed::SetName(string name) {
    for (int i = 0; i < 27; i++) {
        if (name == NotHumanNames[i]) {
            throw "ERROR!";
        }
        this->name = name;
    }
}

string Sosed::GetName() const {
    return name;
}

void Sosed::SetShoes(string shoes) {
    this->shoes = shoes;
}

string Sosed::GetShoes() const {
    return shoes;
}

void Sosed::SetTool(string tool) {

    this->tool = tool;

}

string Sosed::GetTool() const {
    return tool;
}

void Sosed::SetSleeping(bool sleeping) {

    this->sleeping = sleeping;

}

bool Sosed::GetSleeping() const {
    return sleeping;
}

void Sosed::SetMentalCondition(string mentalCondition) {

    this->mentalCondition = mentalCondition;

}

string Sosed::GetMentalCondition() const {
    return mentalCondition;
}

void Sosed::SetFriends(string* friends) {
    this->friends = friends;
}

string* Sosed::GetFriends() const {
    return friends;
}



