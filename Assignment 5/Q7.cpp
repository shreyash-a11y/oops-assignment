#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void displaySpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class FuelGauge {
protected:
    int fuelLevel;

public:
    void setFuelLevel(int f) {
        fuelLevel = f;
    }

    void displayFuelLevel() {
        cout << "Fuel Level: " << fuelLevel << "%" << endl;
    }
};

class Thermometer {
protected:
    float temperature;

public:
    void setTemperature(float t) {
        temperature = t;
    }

    void displayTemperature() {
        cout << "Temperature: " << temperature << " C" << endl;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void displayDashboard() {
        cout << "\n--- Car Dashboard ---" << endl;

        displaySpeed();
        displayFuelLevel();
        displayTemperature();
    }
};

int main() {
    CarDashboard car;

    car.setSpeed(80);
    car.setFuelLevel(65);
    car.setTemperature(36.5);

    car.displayDashboard();

    return 0;
}
