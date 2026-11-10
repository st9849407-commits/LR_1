#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class FlightBooking 
{
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus();
    bool reserveSeats(int number_of_seats);
    bool cancelReservations(int number_of_seats);
    int getId() { return id; };
    int getCapacity() { return capacity; };
    int getReserved() { return reserved; };

private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking() 
{
    id = 0;
    capacity = 0;
    reserved = 0;
}

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
    FlightBooking flights[10];
    string command = "";

    while (true) 
    {
        bool anyFlight = false;
        for (int i = 0; i < 10; i++) {
            if (flights[i].getId() != 0) {
                flights[i].printStatus();
                anyFlight = true;
            }
        }
        if (!anyFlight) {
            cout << "No flights in the system" << endl;
        }

        cout << "What would you like to do?: ";
        getline(cin, command);

        if (command == "quit") {
            break;
        }

        stringstream ss(command);
        string action;
        ss >> action;

        if (action == "create") {
            int id, capacity;
            ss >> id >> capacity;
            int freeSlot = -1;
            bool exists = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    exists = true;
                }
                if (flights[i].getId() == 0 && freeSlot == -1) {
                    freeSlot = i;
                }
            }
            if (exists) {
                cout << "Cannot perform this operation: flight already exists" << endl;
            } else if (freeSlot != -1) {
                flights[freeSlot] = FlightBooking(id, capacity, 0);
            } else {
                cout << "Cannot perform this operation: system is full" << endl;
            }
        } 
        else if (action == "delete") {
            int id;
            ss >> id;
            bool found = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    flights[i] = FlightBooking(0, 0, 0);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Cannot perform this operation: flight " << id << " not found" << endl;
            }
        } 
        else if (action == "add") {
            int id, seats;
            ss >> id >> seats;
            bool found = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    found = true;
                    if (!flights[i].reserveSeats(seats)) {
                        cout << "Cannot perform this operation: capacity reached" << endl;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Cannot perform this operation: flight " << id << " not found" << endl;
            }
        } 
        else if (action == "cancel") {
            int id, seats;
            ss >> id >> seats;
            bool found = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    found = true;
                    if (!flights[i].cancelReservations(seats)) {
                        cout << "Cannot perform this operation" << endl;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Cannot perform this operation: flight " << id << " not found" << endl;
            }
        }
    }

    return 0;
}
