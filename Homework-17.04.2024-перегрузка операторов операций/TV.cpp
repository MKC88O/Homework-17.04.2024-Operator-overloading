#include "TV.h"

TV::TV() : TV::TV("NoName", "NoName3000", "Black", 48) {}
TV::TV(string brand) : TV::TV(brand, "NoName3000", "Black", 48) {}
TV::TV(string brand, string model) : TV::TV(brand, model, "Black", 48) {}
TV::TV(string brand, string model, string color) : TV::TV(brand, model, color, 48) {}
//main c-tor
TV::TV(string brand, string model, string color, double diagonal) {
    SetBrand(brand);
    SetModel(model);
    SetDiagonal(diagonal);
    SetColor(color);
    ratingCount = 3;
    rating = new int[ratingCount];
    for (int i = 0; i < ratingCount; i++)
    {
        rating[i] = rand() % 5 + 1;
    }
}

TV::TV(const TV& original) : TV::TV("NoName", "NoName3000", "Black", 48) {
    this->brand = original.brand;
    this->model = original.model;
    this->diagonal = original.diagonal;
    this->color = original.color;
    this->ratingCount = original.ratingCount;
    this->rating = new int[this->ratingCount];
    for (int i = 0; i < this->ratingCount; i++)
    {
        this->rating[i] = original.rating[i];
    }
}


TV::~TV() {
    delete[] rating;
    rating = nullptr;
}


void TV::TVInfo() const {
    cout << "TV Info:\n";
    cout << "\tBrand: " << brand << "\n";
    cout << "\tModel: " << model << "\n";
    cout << "\tDiagonal: " << diagonal << " inches" << "\n";
    cout << "\tColor: " << color << "\n";
    cout << "\tRating: " << *rating << " stars\n";

}

void TV::TV_On() {
    cout << "The TV turns on...\n";
}

void TV::TV_Off() {
    cout << "The TV turns off\n";
}

void TV::changeChannel(int channel) {
    cout << "Changing channel to " << channel << "\n";
}

void TV::printTV() {
    TVInfo();
    cout << "\n";
    TV_On();
    changeChannel(1);
    TV_Off();
    cout << "\n\n";
}

void TV::SetBrand(string brand) {
    this->brand = brand;
}

string TV::GetBrand() const {
    return brand;
}

void TV::SetModel(string model) {
    this->model = model;
}

string TV::GetModel() const {
    return model;
}

void TV::SetDiagonal(double diagonal) {
    this->diagonal = diagonal;
}

double TV::GetDiagonal() const {
    return diagonal;
}

void TV::SetColor(string color) {
    this->color = color;
}

string TV::GetColor() const {
    return color;
}

void TV::SetRating(int* rating) {
    this->rating = rating;
}

int* TV::GetRating() const {
    return rating;
}
