#include <cmath>
#include <iostream>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    // Calculate the tip
    double tip = meal_cost * (tip_percent / 100.0);

    // Calculate the tax
    double tax = meal_cost * (tax_percent / 100.0);

    // Calculate the total cost
    double total_cost = meal_cost + tip + tax;

    // Round the total cost to the nearest integer
    int rounded_total_cost = round(total_cost);

    // Print the total cost
    cout << rounded_total_cost << endl;
}

int main() {
    double meal_cost;
    int tip_percent, tax_percent;

    // Read input values
    cin >> meal_cost >> tip_percent >> tax_percent;

    // Call the solve function
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
