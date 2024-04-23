#include "Dog.h"
#include <iostream>

Dog::Dog() : Dog::Dog("Benya", "beige", "Pikines ", "meat") {}
Dog::Dog(string color, string bread) : Dog::Dog("Belka", color, bread, "meat") {}
Dog::Dog(string name, string color, string bread) : Dog::Dog(name, color, bread, "meat") {}
Dog::Dog(string name, string color, string bread, double weight) : Dog::Dog(name, color, bread, "meat") {
    SetWeight(weight);
}
// main c-tor
Dog::Dog(string name, string color, string bread, string favoriteFood) {
    SetName(name);
    SetFavoriteFood(favoriteFood);
    SetBread(bread);
    SetWeight(6);
    SetColor(color);
    friendsCount = 3;
    friends = new string[friendsCount];
    for (int i = 0; i < friendsCount; i++)
    {
        int random = rand() % 27;
        friends[i] = dogFriends[random];
    }
}
Dog::Dog(const Dog& original) : Dog::Dog("Benya", "beige", "Pikines ", "meat") {
    this->name = original.name;
    this->bread = original.bread;
    this->color = original.color;
    this->favoriteFood = original.favoriteFood;
    this->friendsCount = original.friendsCount;
    this->friends = new string[this->friendsCount];
    for (int i = 0; i < this->friendsCount; i++)
    {
        this->friends[i] = original.friends[i];
    }
}

Dog::~Dog() {
    delete[] friends;
    friends = nullptr;
}

void Dog::Bark() const {
    cout << bread << " " << name << " : " << "Tyav-Tyav...\n";
}

void Dog::Growl() const {
    cout << bread << " " << name << " : " << "R-R-R-R-R-R...\n";
}

void Dog::Walk() {
    cout << " loves to walk in the park.";
}

void Dog::Eat() const {
    cout << bread << " " << name << " love eat " << favoriteFood << ".\n";
}

void Dog::Sleep() const {
    cout << bread << " " << name << " went to sleep.\n";
}

void Dog::Print() {
    cout << name << " color is " << color << ".\n";
    if (weight < 8) {
        Bark();
    }
    else {
        Growl();
    }
    cout << name << "";
    Walk();
    cout << name << " was " << weight << " kg.\n";
    Eat();
    cout << name << " now " << weight + 1 << " kg.\n";
    cout << "And ";
    Sleep();
    cout << GetName() << " friends: ";
    for (int i = 0; i < friendsCount; i++)
    {
        cout << friends[i] << ", ";
    }
    cout << "\n\n";
}

void Dog::SetName(string name) {
    for (int i = 0; i < 25; i++) {
        if (name == humanNames[i]) {
            throw "ERROR!";
        }
        this->name = name;
    }

}

string Dog::GetName() const {
    return name;
}

void Dog::SetColor(string color) {
    if (color == "Orange" || color == "Green" || color == "Blue" ||
        color == "Pink" || color == "Red" || color == "Salatovyi" ||
        color == "Malinovyi") {
        throw "ERROR!";
    }
    this->color = color;
}

string Dog::GetColor() const {
    return color;
}

void Dog::SetBread(string bread) {

    this->bread = bread;
}

string Dog::GetBread() const {
    return bread;
}

void Dog::SetFavoriteFood(string favorite_food) {
    if (favorite_food == "Krosovki") {
        throw "ERROR!";
    }
    this->favoriteFood = favorite_food;
}

string Dog::GetFavoriteFood() const {
    return favoriteFood;
}

void Dog::SetWeight(double weight) {
    if (weight < 0 || weight > 100) {
        throw "ERROR!";
    }
    this->weight = weight;
}

double Dog::GetWeight() const {
    return weight;
}

void Dog::SetFriends(string* friends) {
    this->friends = friends;
}

string* Dog::GetFriends() const {
    return friends;
}
bool Dog::operator<(const Dog& ooriginal) const {
    return weight < ooriginal.weight;
}
bool Dog::operator > (const Dog& ooriginal) const {
    return weight > ooriginal.weight;
}



