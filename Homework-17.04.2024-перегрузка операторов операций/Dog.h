#pragma once
#include <iostream>
using namespace std;

class Dog {
    string name;
    string color;
    string bread;
    string favoriteFood;
    double weight;
    string* friends = nullptr;
    int friendsCount = 0;
    string humanNames[25]{
        "Alexandr", "Kostya", "Roma", "Anya", "Lena",
        "Ivan", "Marina", "Sergey", "Olya", "Dima",
        "Tanya", "Andrey", "Natasha", "Vova", "Katya",
        "Artem", "Yulya", "Maxim", "Vika", "Pavlik",
        "Sveta", "Nikita", "Nina", "Denis", "Eva"
    };
    string dogFriends[27]{
        "Lordik", "Barsik", "Murzik", "Rex", "Muhtar",
        "Bobik", "Sharik", "Pushok", "Zhuchka", "Bonya",
        "Tishka", "Ryzhik", "Belka", "Strelka", "Archi",
        "Beizi", "Chak", "Kit", "Simba", "Snezhok",
        "Tuzik", "Greta", "Volt", "Richi", "Kuzya",
        "Mus`ka", "Nafanya"
    };

public:

    Dog();
    Dog(string color, string bread);
    Dog(string name, string color, string bread);
    Dog(string name, string color, string bread, double weight);
    Dog(string name, string color, string bread, string favorite_food);
    Dog(const Dog& original);

    ~Dog();

    void Bark() const;
    void Growl() const;
    void Walk();
    void Eat() const;
    void Sleep() const;
    void Print();

    void SetName(string name);
    void SetColor(string color);
    void SetBread(string bread);
    void SetFavoriteFood(string favorite_food);
    void SetWeight(double weight);
    void SetFriends(string* friends);

    string GetName() const;
    string GetColor() const;
    string GetBread() const;
    string GetFavoriteFood() const;
    double GetWeight() const;
    string* GetFriends() const;
    bool operator < (const Dog& original) const;
    bool operator > (const Dog& original) const;
};