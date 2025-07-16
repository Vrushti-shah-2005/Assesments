#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Constants used in cost calculation
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// Class to handle event details and cost calculation
class Event 
{
private:
    string eventName;
    string firstName, lastName;
    int numGuests;
    int numMinutes;
    int numServers;
    double costForOneServer;
    double totalFoodCost;
    double averageCost;
    double totalCost;

public:
    // Function to take user input
    void inputEventDetails() 
    {

        cout << "Enter the name of the Event: ";
         cin>> eventName;

        cout << "Enter your First Name: ";
        cin >> firstName;

        cout << "Enter your Last Name: ";
        cin >> lastName;

        cout << "Enter the Number of Guests: ";
        cin >> numGuests;

        cout << "Enter the Duration of Event in Minutes: ";
        cin >> numMinutes;
    }

    // Function to calculate all costs
    void calculateCosts() 
    {
        // Number of servers needed (1 server per 20 guests)
        numServers = ceil(numGuests / 20.0);

        // Server cost calculations
        double cost1 = (numMinutes / 60) * CostPerHour;
        double cost2 = (numMinutes % 60) * CostPerMinute;
        costForOneServer = cost1 + cost2;

        // Food cost
        totalFoodCost = numGuests * CostOfDinner;

        // Average cost per person
        averageCost = totalFoodCost / numGuests;

        // Total cost
        totalCost = totalFoodCost + (costForOneServer * numServers);
    }

    // Function to display the cost estimate
    void displaySummary() 
    {
        cout << "\n---------- Event Summary ----------\n";
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firstName << " " << lastName << endl;
        cout << "Number of Guests: " << numGuests << endl;
        cout << "Event Duration: " << numMinutes << " minutes" << endl;
        cout << "Number of Servers Required: " << numServers << endl;
        cout << "Cost for One Server: Rs. " << costForOneServer << endl;
        cout << "Total Food Cost: Rs. " << totalFoodCost << endl;
        cout << "Average Cost per Person: Rs. " << averageCost << endl;
        cout << "Total Event Cost: Rs. " << totalCost << endl;
        cout << "----------------------------------\n";
    }
};

// Main function
int main() {
    char choice;

    do 
    {
        // Create object of Event class
        Event myEvent;

        // Get input from user
        myEvent.inputEventDetails();

        // Calculate costs based on input
        myEvent.calculateCosts();

        // Display cost summary
        myEvent.displaySummary();

        // Ask if user wants to organize another event
        cout << "\nDo you want to enter another event? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you for using the Event Organizer!\n";
    return 0;
}
