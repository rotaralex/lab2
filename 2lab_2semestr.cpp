#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


class Menu {
private:
    string name;
    int price;
    string time;
public:
    Menu() : name(""), price(0), time("") {};
    Menu(string n) : Menu(n, 0, "") {};
    Menu(string n, int p) : name(n), price(p), time("") {};
    Menu(string n, int p, string t) : name(n), price(p), time(t) {}

    void displayInfo() {
        cout << "C�����: " << name << " ����� " << price << " � �������� " << time << endl;
    }
    ~Menu() {
        cout << "��������: " << name << endl;
    };
};

