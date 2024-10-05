#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct CarDetails {
    string engine, color;
    int owners;
};

struct Car {
    string make, model;
    int year;
    double price;
    bool negotiable;
    CarDetails details;
};

int main() {
    int n;
    cout << "How many cars? ";
    cin >> n;
    cin.ignore();  

    vector<Car> cars(n);

    for (int i = 0; i < n; i++) {
        cout << "Make: ";
        getline(cin, cars[i].make);
        cout << "Model: ";
        getline(cin, cars[i].model);
        cout << "Year: ";
        cin >> cars[i].year;
        cout << "Price: ";
        cin >> cars[i].price;
        cout << "Negotiable (1 = yes, 0 = no): ";
        cin >> cars[i].negotiable;
        cin.ignore();

        cout << "Engine: ";
        getline(cin, cars[i].details.engine);
        cout << "Color: ";
        getline(cin, cars[i].details.color);
        cout << "Owners: ";
        cin >> cars[i].details.owners;
        cin.ignore();
    }

    cout << "Make\tModel\tYear\tPrice\tTorg\tEngine\tColor\tOwners\n";

    for (int i = 0; i < n; i++) {
        cout << cars[i].make << "\t"
            << cars[i].model << "\t"
            << cars[i].year << "\t"
            << cars[i].price << "\t"
            << (cars[i].negotiable ? "Yes" : "No") << "\t"
            << cars[i].details.engine << "\t"
            << cars[i].details.color << "\t"
            << cars[i].details.owners << endl;
    }

    return 0;
}