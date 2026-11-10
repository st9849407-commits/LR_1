#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class FlightBooking 
{
public:
    FlightBooking(int id = 0, int capacity = 0, int reserved = 0);
    void printStatus();
    bool reserveSeats(int number_of_seats);
    bool cancelReservations(int number_of_seats);

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking(int id, int capacity, int reserved) 
{
    this->id = id;
    this->capacity = capacity;
    if (reserved < 0) {
        this->reserved = 0;
    } else if (reserved > capacity * 1.05) {
        this->reserved = capacity * 1.05;
    } else {
        this->reserved = reserved;
    }
}

void FlightBooking::printStatus() 
{
    double percentage = ((double)reserved / capacity) * 100;
    cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << percentage << "%) seats reserved" << endl;
}

bool FlightBooking::reserveSeats(int number_of_seats) 
{
    if (number_of_seats < 0) return false;
    if (reserved + number_of_seats <= capacity * 1.05) {
        reserved += number_of_seats;
        return true;
    }
    return false;
}

bool FlightBooking::cancelReservations(int number_of_seats) 
{
    if (number_of_seats < 0) return false;
    if (reserved - number_of_seats >= 0) {
        reserved -= number_of_seats;
        return true;
    }
    return false;
}

int main() 
{
    int reserved = 0, capacity = 0;
    cout << "Provide flight capacity: ";
    cin >> capacity;
    cout << "Provide number of reserved seats: ";
    cin >> reserved;

    FlightBooking booking(1, capacity, reserved);
    string command = "";
    cin.ignore();

    while (true) 
    {
        booking.printStatus();
        cout << "What would you like to do?: ";
        getline(cin, command);

        if (command == "quit") {
            break;
        }

        stringstream ss(command);
        string action;
        int seats;
        ss >> action >> seats;

        bool success = false;
        if (action == "add") {
            success = booking.reserveSeats(seats);
        } else if (action == "cancel") {
            success = booking.cancelReservations(seats);
        }

        if (!success) {
            cout << "Cannot perform this operation" << endl;
        }
    }

    return 0;
}
