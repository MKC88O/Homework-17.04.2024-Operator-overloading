#include "PowerBank.h"

PowerBank::PowerBank() : PowerBank::PowerBank("Noname", "Black", 20000) {}
PowerBank::PowerBank(string brand) : PowerBank::PowerBank(brand, "Black", 20000) {}
PowerBank::PowerBank(string brand, string color) : PowerBank::PowerBank(brand, color, 20000) {}
//main c-tor
PowerBank::PowerBank(string brand, string color, double capacity) {
    SetBrand(brand);
    SetColor(color);
    SetQuantityPorts(4);
    SetCapacity(capacity);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
    ratingCount = 5;
    rating = new int[ratingCount];
    for (int i = 0; i < ratingCount; i++)
    {
        rating[i] = rand() % 5 + 1;
    }
}
PowerBank::PowerBank(string brand, double capacity) : PowerBank::PowerBank(brand, "Black", capacity) {}
PowerBank::PowerBank(double capacity, string color) : PowerBank::PowerBank("Noname", color, capacity) {}
PowerBank::PowerBank(double capacity) : PowerBank::PowerBank("Noname", "Black", capacity) {}
PowerBank::PowerBank(const PowerBank& original) : PowerBank::PowerBank("Noname", "Black", 20000) {
    this->brand = original.brand;
    this->color = original.color;
    this->quantityPorts = original.quantityPorts;
    this->capacity = original.capacity;
    this->ratingCount = original.ratingCount;
    this->rating = new int[this->ratingCount];
    for (int i = 0; i < this->ratingCount; i++)
    {
        this->rating[i] = original.rating[i];
    }
}

PowerBank::~PowerBank() {
    delete[] rating;
    rating = nullptr;
}

void PowerBank::Charging() const {
    if ((TypeC || microUSB) && !USB && charg) {
        cout << "Power bank charge the device.\n\n";
    }
    else if (USB) {
        cout << "Power bank charging.\n\n";
    }
}

void  PowerBank::PowerBankInfo() const {
    cout << "Power Bank Info:\n";
    cout << "\t\tBrand: " << brand << "\n";
    cout << "\t\tColor: " << color << "\n";
    cout << "\t\tQuantity USB-ports: " << quantityPorts << "\n";
    cout << "\t\tCapacity: " << capacity << " mA/h\n";
    if (TypeC) {
        cout << "\t\tHave Type C-port \n";
    }
    if (microUSB) {
        cout << "\t\tHave Micro USB-port \n";
    }
    cout << "\t\tRating: " << *rating << " stars\n";
    cout << "\n\n";

}

void PowerBank::SetBrand(string brand) {
    this->brand = brand;
}

string PowerBank::GetBrand() const {
    return brand;
}

void PowerBank::SetColor(string color) {
    this->color = color;
}

string PowerBank::GetColor() const {
    return color;
}

void PowerBank::SetQuantityPorts(int quantityPorts) {
    this->quantityPorts = quantityPorts;
}

int PowerBank::GetQuantityPorts() const {
    return quantityPorts;
}

void PowerBank::SetCapacity(double capacity) {
    this->capacity = capacity;
}

double PowerBank::GetCapacity() const {
    return capacity;
}

void PowerBank::SetTypeC(bool Type_C) {
    this->TypeC = Type_C;
}

bool PowerBank::GetTypeC() const {
    return TypeC;
}

void PowerBank::SetUSB(bool USB) {
    this->USB = USB;
}

bool PowerBank::GetUSB() const {
    return USB;
}

void PowerBank::SetMicroUSB(bool Micro_USB) {
    this->microUSB = Micro_USB;
}

bool PowerBank::GetMicroUSB() const {
    return microUSB;
}

void PowerBank::SetCharg(bool charg) {
    this->charg = charg;
}

bool PowerBank::GetCharg() const {
    return charg;
}

void PowerBank::SetRating(int* rating) {
    this->rating = rating;
}

int* PowerBank::GetRating() const {
    return rating;
}


