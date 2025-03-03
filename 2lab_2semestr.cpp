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
        cout << "Cтрава: " << name << " коштує " << price << " і готується " << time << endl;
    }
    ~Menu() {
        cout << "Видалено: " << name << endl;
    };
};

class Reservation {
private:
    string nameClient;
    string timeReserv;
    int table;
public:
    Reservation() : nameClient(""), timeReserv(""), table(-1) {};
    Reservation(string name) : nameClient(name) {};
    Reservation(string name, string time) : nameClient(name), timeReserv(time), table(-1) {};
    Reservation(string n, string time, int table) : nameClient(n), timeReserv(time), table(table) {}

    void diplayReserv() {
        cout << "Cтолик №" << table << " зарезерований на " << nameClient << " на " << timeReserv << endl;
    }
    ~Reservation() {
        cout << "Видалено бронювання для: " << nameClient << endl;
    };
};



class Review {
private:
    string nameDelishes;
    int rating;
    string comments;

public:
    Review() : nameDelishes(""), rating(5), comments("") {};
    Review(string n, int r) : nameDelishes(n), rating(r), comments("") {};
    Review(string n, int r, string comment) : nameDelishes(n), rating(r), comments(comment) {};

    void displayReview() {
        cout << "Страву " << nameDelishes << " оцінено на " << rating << " з коментарем: " << comments << endl;
    }

    ~Review() {
        cout << "Видалено відгук для страви: " << nameDelishes << endl;
    };
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Menu grechka("М'ясо", 5);
    Menu kartoha("Картопля", 20, "20 хвилин");

    Reservation reserv1("Олег", "16:00");
    Reservation reserv2("Максим", "12:00", 10);

    Review review1("Картопля", 5, "Все супер");
    Review review2("Борщ", 1, "Не сподобалось");

    grechka.displayInfo();
    kartoha.displayInfo();

    reserv1.diplayReserv();
    reserv2.diplayReserv();

    review1.displayReview();
    review2.displayReview();

    return 0;
}
