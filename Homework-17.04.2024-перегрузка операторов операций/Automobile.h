#pragma once
#include <iostream>
using namespace std;

class Automobile {
    string brand;
    string model;
    string equipment;
    string engineType;
    double engineVolume = 0;
    string fuel;
    string transmision;
    double power = 0;
    int wheelDrive = 0;
    int* rating = nullptr;
    int ratingCount = 0;
    string carBrands[32] {
        "Toyota", "Honda", "BMW", "Ford", "Chevrolet",
        "Volkswagen", "Tesla", "Audi", "Mercedes", "Subaru",
        "Nissan", "Jeep", "Hyundai", "Kia", "Mazda",
        "Lexus", "Porsche", "Volvo", "Jaguar", "Land Rover",
        "Chevrolet", "Ferrari", "Lamborgini", "Moskvich", "VAZ",
        "ZAZ", "Opel", "Reno", "Peugeot", "Seat", "Suzuki"
    };
public:
    Automobile();
    Automobile(string brand);
    Automobile(string brand, string model);
    Automobile(string brand, string model, string fuel);
    Automobile(string brand, string model, string fuel, double engineVolume);
    Automobile(const Automobile& original);

    ~Automobile();

    void CarInfo() const;

    void SetBrand(string brand);
    void SetModel(string model);
    void SetEquipment(string equipment);
    void SetEngineType(string engineType);
    void SetEngineVolume(double engineVolume);
    void SetFuel(string fuel);
    void SetTransmision(string transmision);
    void SetPower(double power);
    void SetWheelDrive(int wheelDrive);
    void SetRating(int* rating);

    string GetBrand() const;
    string GetModel() const;
    string GetEquipment() const;
    string GetEngineType() const;
    double GetEngineVolume() const;
    string GetFuel() const;
    string GetTransmision() const;
    double GetPower() const;
    int GetWheelDrive() const;
    int* GetRating() const;
};


