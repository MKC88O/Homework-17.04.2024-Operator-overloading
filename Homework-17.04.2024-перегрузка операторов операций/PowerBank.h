#pragma once
#include <iostream>
using namespace std;

class PowerBank {
    string brand;
    string color;
    int quantityPorts = 0;
    double capacity = 0;
    bool TypeC = false;
    bool USB = false;
    bool microUSB = false;
    bool charg = false;
    int* rating = nullptr;
    int ratingCount = 0;

public:
    PowerBank();
    PowerBank(string brand);
    PowerBank(string brand, string color);
    PowerBank(string brand, string color, double capacity);
    PowerBank(string brand, double capacity);
    PowerBank(double capacity, string color);
    PowerBank(double capacity);
    PowerBank(const PowerBank& original);

    ~PowerBank();

    void Charging() const;
    void  PowerBankInfo() const;

    void SetBrand(string brand);
    void SetColor(string color);
    void SetQuantityPorts(int quantityPorts);
    void SetCapacity(double capacity);
    void SetTypeC(bool TypeC);
    void SetUSB(bool USB);
    void SetMicroUSB(bool MicroUSB);
    void SetCharg(bool charg);
    void SetRating(int* rating);

    string GetBrand() const;
    string GetColor() const;
    int GetQuantityPorts() const;
    double GetCapacity() const;
    bool GetTypeC() const;
    bool GetUSB() const;
    bool GetMicroUSB() const;
    bool GetCharg() const;
    int* GetRating() const;

};



