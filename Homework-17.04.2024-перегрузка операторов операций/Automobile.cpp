#include "Automobile.h"

Automobile::Automobile() : Automobile::Automobile("Ford", "Fusion", "Gasoline", 2000.01) {}
Automobile::Automobile(string brand) : Automobile::Automobile(brand, "Fusion", "Gasoline", 2000.01) {}
Automobile::Automobile(string brand, string model) : Automobile::Automobile(brand, model, "Gasoline", 2000.01) {}
Automobile::Automobile(string brand, string model, string fuel) : Automobile::Automobile(brand, model, fuel, 2000.01) {}
//main c-tor
Automobile::Automobile(string brand, string model, string fuel, double engineVolume) {
    SetBrand(brand);
    SetModel(model);
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(engineVolume);
    SetFuel(fuel);
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
    ratingCount = 1;
    rating = new int[ratingCount];
    for (int i = 0; i < ratingCount; i++)
    {
        rating[i] = rand() % 5 + 1;
    }
}
Automobile::Automobile(const Automobile& original) : Automobile::Automobile("Ford", "Fusion", "Gasoline", 2000.01) {
    this->brand = original.brand;
    this->model = original.model;
    this->fuel = original.fuel;
    this->engineVolume = original.engineVolume;
    this->ratingCount = original.ratingCount;
    this->rating = new int[this->ratingCount];
    for (int i = 0; i < this->ratingCount; i++)
    {
        this->rating[i] = original.rating[i];
    }
}

Automobile::~Automobile() {
    delete[] rating;
    rating = nullptr;
}

void Automobile::CarInfo() const {
    cout << "Car Information:\n";
    cout << "\t\tCar brand: " << brand << "\n";
    cout << "\t\tModel: " << model << "\n";
    cout << "\t\tCar equipment: " << equipment << "\n";
    cout << "\t\tEngine type: " << engineType << "\n";
    cout << "\t\tEngine volume: " << engineVolume << " sm3\n";
    cout << "\t\tFuel: " << fuel << "\n";
    cout << "\t\tTransmision: " << transmision << "\n";
    cout << "\t\tEngine power: " << power << " hp\n";
    cout << "\t\tWheel drive: " << wheelDrive << " wheels\n";
    cout << "\t\tRating: " << *rating << " stars\n";
    cout << "\n\n";
}

void Automobile::SetBrand(string brand) {
    for (int i = 0; i < 31; i++) {

        if (brand == carBrands[i]) {
            this->brand = brand;
            return;
        }
    }
    throw "ERROR!";
}

string Automobile::GetBrand() const {
    return brand;
}

void Automobile::SetModel(string model) {
    this->model = model;
}

string Automobile::GetModel() const {
    return model;
}

void Automobile::SetEquipment(string equipment) {
    this->equipment = equipment;
}

string Automobile::GetEquipment() const {
    return equipment;
}

void Automobile::SetEngineType(string engineType) {
    this->engineType = engineType;
}

string Automobile::GetEngineType() const {
    return engineType;
}

void Automobile::SetEngineVolume(double engineVolume) {
    this->engineVolume = engineVolume;
}

double Automobile::GetEngineVolume() const {
    return engineVolume;
}

void Automobile::SetFuel(string fuel) {
    this->fuel = fuel;
}

string Automobile::GetFuel() const {
    return fuel;
}

void Automobile::SetTransmision(string transmision) {
    this->transmision = transmision;
}

string Automobile::GetTransmision() const {
    return transmision;
}

void Automobile::SetPower(double power) {
    this->power = power;
}

double Automobile::GetPower() const {
    return power;
}

void Automobile::SetWheelDrive(int wheelDrive) {
    if (wheelDrive != 2 && wheelDrive != 4)
    {
        throw "ERROR!";
    }
    this->wheelDrive = wheelDrive;
}

int Automobile::GetWheelDrive() const {
    return wheelDrive;
}

void Automobile::SetRating(int* rating) {
    this->rating = rating;
}

int* Automobile::GetRating() const {
    return rating;
}