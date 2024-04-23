#pragma once
#include <iostream>
using namespace std;
class Mouse {
    string brand;
    string model;
    string color;
    bool wireless;
    bool left_button;
    bool right_button;
    bool scrol;
    int* rating = nullptr;
    int ratingCount = 0;

public:
    Mouse();
    Mouse(string brand);
    Mouse(string brand, string model);
    Mouse(string brand, string model, string color);
    Mouse(bool wireless);
    Mouse(const Mouse& original);

    ~Mouse();

    void Press_left_button() const;
    void Press_right_button() const;
    void Scrol() const;
    void MouseInfo() const;

    void SetBrand(string brand);
    void SetModel(string model);
    void SetColor(string color);
    void SetWireless(bool wireless);
    void SetLeftButton(bool left_button);
    void SetRightButton(bool right_button);
    void SetScrol(bool scrol);
    void SetRating(int* rating);

    string GetBrand() const;
    string GetModel() const;
    string GetColor() const;
    bool GetWireless() const;
    bool GetLeftButton() const;
    bool GetRightButton() const;
    bool GetScrol() const;
    int* GetRating() const;
};


