#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    void getVehicleData() {
        cout << "Enter Make: ";
        cin >> make;

        cout << "Enter Model: ";
        cin >> model;

        cout << "Enter Year: ";
        cin >> year;
    }

    void displayVehicleData() {
        cout << "\nMake: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Truck : public Vehicle {
protected:
    int load_capacity;

public:
    void getTruckData() {
        getVehicleData();

        cout << "Enter Load Capacity: ";
        cin >> load_capacity;
    }

    void displayTruckData() {
        displayVehicleData();

        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

class RefrigeratedTruck : public Truck {
private:
    int temperature_control;

public:
    void getRefrigeratedTruckData() {
        getTruckData();

        cout << "Enter Temperature Control: ";
        cin >> temperature_control;
    }

    void displayRefrigeratedTruckData() {
        displayTruckData();

        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main() {

    RefrigeratedTruck obj;

    obj.getRefrigeratedTruckData();

    cout << "\n--- Refrigerated Truck Details ---" << endl;
    obj.displayRefrigeratedTruckData();

    return 0;
}
