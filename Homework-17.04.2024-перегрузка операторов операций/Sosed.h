#pragma once
#include <iostream>
using namespace std;

class Sosed {
    string name;
    string shoes;
    string tool;
    bool sleeping = false;
    string mentalCondition;
    string* friends = nullptr;
    int friendsCount = 0;
    string sosedFriends[25]{
        "Alexandr", "Kostya", "Roma", "Anya", "Lena",
        "Ivan", "Marina", "Sergey", "Olya", "Dima",
        "Tanya", "Andrey", "Natasha", "Vova", "Katya",
        "Artem", "Yulya", "Maxim", "Vika", "Pavlik",
        "Sveta", "Nikita", "Nina", "Denis", "Eva"
    };
    string NotHumanNames[27]{
        "Lordik", "Barsik", "Murzik", "Rex", "Muhtar",
        "Bobik", "Sharik", "Pushok", "Zhuchka", "Bonya",
        "Tishka", "Ryzhik", "Belka", "Strelka", "Archi",
        "Beizi", "Chak", "Kit", "Simba", "Snezhok",
        "Tuzik", "Greta", "Volt", "Richi", "Kuzya",
        "Mus`ka", "Nafanya"
    };

public:
    Sosed();
    Sosed(string name);
    Sosed(string name, string shoes);
    Sosed(string name, string shoes, string tool);
    Sosed(string name, string shoes, string tool, string mentalCondition);
    Sosed(const Sosed& original);

    ~Sosed();

    void Never_sleep();
    void About_myself() const;
    void Work() const;
    void printSosed();

    void SetName(string name);
    void SetShoes(string shoes);
    void SetTool(string tool);
    void SetSleeping(bool sleeping);
    void SetMentalCondition(string mentalCondition);
    void SetFriends(string* friends);

    string GetName() const;
    string GetShoes() const;
    string GetTool() const;
    bool GetSleeping() const;
    string GetMentalCondition() const;
    string* GetFriends() const;
};



