// Homework-17.04.2024-перегрузка операторов операций.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include "Dog.h"
#include "PowerBank.h"
#include "Mouse.h"
#include "TV.h"
#include "Automobile.h"
#include "Sosed.h"

using namespace std;

void operator >> (istream& cin, Automobile& car) {
    cout << "Hello!\n\n";
    
    cout << "Enter car brand:\t\t";
    string brand;
    cin >> brand;
    car.SetBrand(brand);
    
    cout << "Enter car model:\t\t";
    string model;
    cin >> model;
    car.SetModel(model);
    
    cout << "Enter car equipment:\t\t";   
    string equipment;
    cin >> equipment;
    car.SetEquipment(equipment);
    
    cout << "Enter car engine type:\t\t";  
    string engineType;
    cin >> engineType;
    car.SetEngineType(engineType);
    
    cout << "Enter car engine volume:\t";
    double engineVolume;
    cin >> engineVolume;
    car.SetEngineVolume(engineVolume);
    
    cout << "Enter car fuel:\t\t\t"; 
    string fuel;
    cin >> fuel;
    car.SetFuel(fuel);
    
    cout << "Enter car transmision:\t\t"; 
    string transmision;
    cin >> transmision;
    car.SetTransmision(transmision);
    
    cout << "Enter car power:\t\t";
    double power;
    cin >> power;
    car.SetPower(power);
    
    cout << "Enter car wheel drive:\t\t";
    int wheelDrive;
    cin >> wheelDrive;
    car.SetWheelDrive(wheelDrive);
    cout << "\n";
}
void operator << (ostream& cout, Automobile& car) {
    cout << "\n==========================================\n";
    cout << "Car Info: \n\n";
    cout << "\tBrand: \t\t" << car.GetBrand() << "\n\n";
    cout << "\tModel:\t\t" << car.GetModel() << "\n\n";
    cout << "\tEquipment:\t" << car.GetEquipment() << "\n\n";
    cout << "\tEngine type:\t" << car.GetEngineType() << "\n\n";
    cout << "\tEngine volume:\t" << car.GetEngineVolume() << "\n\n";
    cout << "\tFuel:\t\t" << car.GetFuel() << "\n\n";
    cout << "\tTransmision:\t" << car.GetTransmision() << "\n\n";
    cout << "\tPower:\t\t" << car.GetPower() << "\n\n";
    cout << "\tWheel drive:\t" << car.GetWheelDrive() << "\n\n";
    int* Rating = car.GetRating();
    for (int i = 0; i < 1; i++) {
        cout << "\tRating:\t\t" << Rating[i];
    }
    cout << "\n==========================================\n";
}
double operator + (const Automobile& car1, const Automobile& car2) {
    return car1.GetPower() + car2.GetPower();
}
void operator < (const Automobile& car1, Automobile& car2) {
    int* Rating1 = car1.GetRating();
    int* Rating2 = car2.GetRating();
    for (int i = 0; i < 1; i++) {
        if (Rating1[i] < Rating2[i]) {
            cout << car1.GetBrand() << " " << Rating1[i] << " stars\n";
            cout << car2.GetBrand() << " " << Rating2[i] << " stars\n";
            cout << car2.GetBrand() << " - It is Super car! Rating: " << Rating2[i] << " stars\n";
        }
        else {
            cout << car1.GetBrand() << " " << Rating1[i] << " stars\n";
            cout << car2.GetBrand() << " " << Rating2[i] << " stars\n";
            cout << car1.GetBrand() << " - It is Super car! Rating: " << Rating1[i] << " stars\n";
        }
        
    }
}
void operator > (const Automobile& car1, Automobile& car2) {
    int* Rating1 = car1.GetRating();
    int* Rating2 = car2.GetRating();
    for (int i = 0; i < 1; i++) {
        if (Rating1[i] > Rating2[i]) {
            cout << car1.GetBrand() << " " << Rating1[i] << " stars\n";
            cout << car2.GetBrand() << " " << Rating2[i] << " stars\n";
            cout << car1.GetBrand() << " - It is Super car! Rating: " << Rating1[i] << " stars\n";
        }
        else {
            cout << car1.GetBrand() << " " << Rating1[i] << " stars\n";
            cout << car2.GetBrand() << " " << Rating2[i] << " stars\n";
            cout << car2.GetBrand() << " - It is Super car! Rating: " << Rating2[i] << " stars\n";
        }

    }
}

void operator >> (istream& cin, Dog& dog) {
    cout << "Hello!\n";
    cout << "Enter yuor dog information:\n\n";
    cout << "Name:\t\t";
    
    string name;
    cin >> name;
    dog.SetName(name);

    cout << "Color:\t\t";
    string color;
    cin >> color;
    dog.SetColor(color);

    cout << "Bread:\t\t";
    string bread;
    cin >> bread;
    dog.SetBread(bread);

    cout << "Favorite food:\t";
    string favoriteFood;
    cin >> favoriteFood;
    dog.SetFavoriteFood(favoriteFood);

    cout << "Weight:\t\t";
    double weight;
    cin >> weight;
    dog.SetWeight(weight);
}
void operator << (ostream& cout, Dog& dog) {
    cout << "\n==========================================\n";
    cout << "Yuor dog information: \n\n";
    cout << "\tName: \t\t" << dog.GetName() << "\n\n";
    cout << "\tColor: \t\t" << dog.GetColor() << "\n\n";
    cout << "\tBread: \t\t" << dog.GetBread() << "\n\n";
    cout << "\tFavorite food: \t" << dog.GetFavoriteFood() << "\n\n";
    cout << "\tWeight: \t" << dog.GetWeight() << "\n\n";
    cout << "\tFriends: ";
    int friendsCount = 3;
    string* friends = dog.GetFriends();
    cout << "\t";
    for (int i = 0; i < friendsCount; i++)
    {
        cout << friends[i] << ", ";
    }
    cout << "\n\n";
    cout << "\n==========================================\n";
}

void operator >> (istream& cin, Mouse& mouse) {
    cout << "Hello!\n\n";
    
    cout << "Enter mouse brand:\t\t";
    string brand;
    cin >> brand;
    mouse.SetBrand(brand);
    
    cout << "Enter mouse model:\t\t";
    string model;
    cin >> model;
    mouse.SetModel(model);
    
    cout << "Enter mouse color:\t\t";
    string color;
    cin >> color;
    mouse.SetColor(color);
    
    cout << "Enter mouse wireless:\t\t";
    bool wireless;
    cin >> wireless;
    mouse.SetWireless(wireless);
}
void operator << (ostream& cout, Mouse& mouse) {
    cout << "\n==========================================\n";
    cout << "Mouse Info: \n\n";
    cout << "\tBrand: \t\t" << mouse.GetBrand() << "\n\n";
    cout << "\tModel:\t\t" << mouse.GetModel() << "\n\n";
    cout << "\tColor:\t\t" << mouse.GetColor() << "\n\n";
    cout << "\tWireless:\t" << mouse.GetWireless() << "\n\n";
    int* Rating = mouse.GetRating();
    for (int i = 0; i < 1; i++) {
        cout << "\tRating:\t\t" << Rating[i];
    }
    cout << "\n==========================================\n";
}
void operator >> (istream& cin, PowerBank& PB) {
    cout << "Hello!\n";
    cout << "Enter power bank info:\n\n";

    cout << "Brand:\t\t\t";
    string brand;
    cin >> brand;
    PB.SetBrand(brand);


    cout << "Color:\t\t\t";
    string color;
    cin >> color;
    PB.SetColor(color);

    cout << "Quantity ports:\t\t";
    int quantityPorts;
    cin >> quantityPorts;
    PB.SetQuantityPorts(quantityPorts);

    cout << "Capacity:\t\t";
    double capacity;
    cin >> capacity;
    PB.SetCapacity(capacity);
}
void operator << (ostream& cout, PowerBank& PB) {
    cout << "\n==========================================\n";
    cout << "Power bank info: \n\n";
    cout << "\tBrand: \t\t" << PB.GetBrand() << "\n\n";
    cout << "\tColor:\t\t" << PB.GetColor() << "\n\n";
    cout << "\tQuantity ports:\t" << PB.GetQuantityPorts() << "\n\n";
    cout << "\tCapacity:\t" << PB.GetCapacity() << "\n\n";
    int* Rating = PB.GetRating();
    for (int i = 0; i < 1; i++) {
        cout << "\tRating:\t\t" << Rating[i];
    }
    cout << "\n==========================================\n";
}

void operator >> (istream& cin, Sosed& sosed) {
    cout << "Hello!\n";
    cout << "Enter sosed info:\n\n";

    cout << "\tName:\t\t";
    string name;
    cin >> name;
    sosed.SetName(name);

    cout << "\tShoes:\t\t";
    string shoes;
    cin >> shoes;
    sosed.SetShoes(shoes);

    cout << "\tTool:\t\t";
    string tool;
    cin >> tool;
    sosed.SetTool(tool);

    cout << "\tMental condition: ";
    string mentalCondition;
    cin >> mentalCondition;
    sosed.SetMentalCondition(mentalCondition);
}
void operator << (ostream& cout, Sosed& sosed) {
    cout << "\n==========================================\n";
    cout << "Sosed info: \n\n";
    cout << "\tName: \t\t" << sosed.GetName() << "\n\n";
    cout << "\tShoes:\t\t" << sosed.GetShoes() << "\n\n";
    cout << "\tTool:\t\t" << sosed.GetTool() << "\n\n";
    cout << "\tMental condition: " << sosed.GetMentalCondition() << "\n\n";
    cout << "\tFriends: ";
    int friendsCount = 3;
    string* friends = sosed.GetFriends();
    cout << "\t";
    for (int i = 0; i < friendsCount; i++)
    {
        cout << friends[i] << ", ";
    }
    cout << "\n\n";
    cout << "\n==========================================\n";
}

void operator >> (istream& cin, TV& tv) {
    cout << "Hello!\n";
    cout << "Enter TV info:\n\n";

    cout << "Brand:\t\t\t";
    string brand;
    cin >> brand;
    tv.SetBrand(brand);

    cout << "Model:\t\t\t";
    string model;
    cin >> model;
    tv.SetModel(model);

    cout << "Diagonal:\t\t";
    double diagonal;
    cin >> diagonal;
    tv.SetDiagonal(diagonal);

    cout << "Color:\t\t\t";
    string color;
    cin >> color;
    tv.SetColor(color);
}
void operator << (ostream& cout, TV& tv) {
    cout << "\n==========================================\n";
    cout << "TV info: \n\n";
    cout << "\tBrand: \t\t" << tv.GetBrand() << "\n\n";
    cout << "\tModel:\t\t" << tv.GetModel() << "\n\n";
    cout << "\tDiagonal:\t" << tv.GetDiagonal() << "\n\n";
    cout << "\tColor:\t\t" << tv.GetColor() << "\n\n";
    int* Rating = tv.GetRating();
    for (int i = 0; i < 1; i++) {
        cout << "\tRating:\t\t" << Rating[i];
    }
    cout << "\n==========================================\n";
}
int main()
{
    srand(time(0));
    ////////////////////////////////////////////////////////////////////////////                  DOG                    ///////////////////////////////////////////////////////////////// 
    Dog dog;
    //dog.Print();
    cout << dog;

    Dog Belka("Grey", "Mops");
    //Belka.Print();
    cout << Belka;

    Dog Strelka("Strelka", "brown", "taxa");
    //Strelka.Print();
    cout << Strelka;

    Dog Lordik("Lordik", "ginger", "Pikines", "oladushki");
    //Lordik.Print();
    cout << Lordik;

    Dog Tuzik("Tuzik", "Black", "Dvor`Ter`er", 25);
    //Tuzik.Print();
    cout << Tuzik;

    Dog copyDog = dog;
    //copyDog.Print();
    cout << copyDog;

     Dog dogs;
     cin >> dogs;
     cout << dogs;

    if (Lordik < Belka) {
        cout << Belka.GetName() << " - It is Kaban! Weight: " << Belka.GetWeight() << " KG\n";
    }
    else {
        
        cout << Lordik.GetName() << " - It is Kaban! Weight: " << Lordik.GetWeight() << " KG\n";
    }
    
    if (Tuzik > Strelka) {
        cout << Tuzik.GetName() << " - It is Kaban! Weight: " << Tuzik.GetWeight() << " KG\n";
    }
    else {
        cout << Strelka.GetName() << " - It is Kaban! Weight: " << Strelka.GetWeight() << " KG\n";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                  SOSED                    ///////////////////////////////////////////////////////////////

    Sosed sosed;
    //sosed.printSosed();
    cout << sosed;

    Sosed Petya("Petya");
    //Petya.printSosed();
    cout << Petya;

    Sosed Volodya("Volodya", "tapochki");
    //Volodya.printSosed();
    cout << Volodya;

    Sosed Maxim("Maxim", "Krosovki", "notebook");
    //Maxim.printSosed();
    cout << Maxim;

    Sosed Vasya("Vasya", "sapogi", "drel'", "normal'nyi patsan");
    //Vasya.printSosed();
    cout << Vasya;

    Sosed copySosed = sosed;
    //copySosed.printSosed();
    cout << copySosed;

    Sosed inputSosed;
    cin >> inputSosed;
    cout << inputSosed;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                  AUTOMOBILE                    //////////////////////////////////////////////////////////

    Automobile car;
    //car.CarInfo();
    cout << car;
    
    Automobile car1("VAZ");
    //car1.CarInfo();
    cout << car1;

    Automobile car2("VAZ", "2101");
    //car2.CarInfo();
    cout << car2;

    Automobile car3("VAZ", "2101", "propan");
    //car3.CarInfo();
    cout << car3;

    Automobile car4("VAZ", "2101", "propan", 1300);
    //car4.CarInfo();
    cout << car4;

    Automobile copyCar = car4;
    //copyCar.CarInfo();
    cout << copyCar;

    Automobile cars;
    cin >> cars;
    cout << cars;

    double powerTotal = car + car1;
    cout << "Total power of car and car1: " << powerTotal << " hp" << "\n";

    car4 < cars;
    cout << "\n\n";
    car4 > cars;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      TV                        //////////////////////////////////////////////////////////

    TV tv;
    //tv.printTV();
    cout << tv;

    TV Samsung("Samsung");
    //Samsung.printTV();
    cout << Samsung;

    TV LG("LG", "lg-800");
    //LG.printTV();
    cout << LG;

    TV Philips("Philips", "Ph-800", "Gray");
    //Philips.printTV();
    cout << Philips;

    TV Xiaomi("Xiaomi", "Xi-800", "White", 60);
    //Xiaomi.printTV();
    cout << Xiaomi;

    TV copyTV = tv;
    //copyTV.printTV();
    cout << copyTV;

    TV noName;
    cin >> noName;
    cout << noName;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      POWER BANK                        //////////////////////////////////////////////////////////

    PowerBank PB;
    PB.Charging();
    //PB.PowerBankInfo();
    cout << PB;

    PowerBank PB1(25000);
    PB1.Charging();
    //PB1.PowerBankInfo();
    cout << PB1;

    PowerBank PB2(30020, "Yelow");
    PB2.Charging();
    //PB2.PowerBankInfo();
    cout << PB2;

    PowerBank PB3("PB3", 35020);
    PB3.Charging();
    //PB3.PowerBankInfo();
    cout << PB3;

    PowerBank PB4("PB4", "Green", 40000);
    PB4.Charging();
    //PB4.PowerBankInfo();
    cout << PB4;

    PowerBank PB5("PB5", "ReD");
    PB5.Charging();
    //PB5.PowerBankInfo();
    cout << PB5;

    PowerBank PB6("PB6");
    PB6.Charging();
    //PB6.PowerBankInfo();
    cout << PB6;

    PowerBank copyPB = PB;
    //copyPB.PowerBankInfo();
    cout << copyPB;

    PowerBank PB7;
    cin >> PB7;
    cout << PB7;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      MOUSE                        //////////////////////////////////////////////////////////

    Mouse mouse;
    mouse.Press_left_button();
    mouse.Press_right_button();
    mouse.Scrol();
    cout << "\n";
    //mouse.MouseInfo();
    cout << mouse;

    Mouse mouse1(0);
    //mouse1.MouseInfo();
    cout << mouse1;

    Mouse mouse2("Brand", "model");
    //mouse2.MouseInfo();
    cout << mouse2;

    Mouse mouse3("Brand", "model", "gray");
    //mouse3.MouseInfo();
    cout << mouse3;

    Mouse mouse4(string("Brand"));
    //mouse4.MouseInfo();
    cout << mouse4;

    Mouse copyMouse = mouse;
    //copyMouse.MouseInfo();
    cout << copyMouse;

    Mouse mouse5;
    cin >> mouse5;
    cout << mouse5;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
