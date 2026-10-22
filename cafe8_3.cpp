#include <iostream>
using namespace std;

void task1() {
    int n;

    cout << "Enter the number of menu items (1-20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Invalid input\n";
        return;
    }

    double total = 0;

    for (int i = 1; i <= n; i++) {
        double price = 2.5 + i * 0.5;
        cout << "Item " << i << ": " << price << '\n';
        total += price;
    }

    cout << "Total price: " << total << '\n';
}

void task2() {
    double cost;
    double revenue = 0;
    int count = 0;

    cout << "Enter order costs (0 to finish):\n";
    cin >> cost;

    while (cost != 0) {
        if (cost > 0) {
            revenue += cost;

            if (cost > 30)
                count++;
        }

        cin >> cost;
    }

    cout << "Total revenue: " << revenue << '\n';
    cout << "Orders over 30: " << count << '\n';
}

void task3() {
    int people;

    do {
        cout << "Enter the number of people (1-12): ";
        cin >> people;
    } while (people < 1 || people > 12);

    int tables = people / 4;

    if (people % 4 != 0)
        tables++;

    cout << "Minimum number of tables: " << tables << '\n';
}

void task4() {
    int rows, cols;

    cout << "Enter the number of rows and columns (1-8): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > 8 || cols < 1 || cols > 8) {
        cout << "Invalid input\n";
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j)
                cout << "X ";
            else
                cout << ". ";
        }

        cout << '\n';
    }
}

int main() {
    int choice;

    cout << "Choose a task (1-4): ";

    if (!(cin >> choice)) {
        cout << "Invalid input\n";
        return 0;
    }

    switch (choice) {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    default:
        cout << "Invalid task number\n";
    }

    return 0;
}