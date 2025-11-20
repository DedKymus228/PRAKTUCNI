#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Apartment {
    int number;
    string ownerName;
    int residentsCount;
    double totalArea;
};

int main() {
    int n;
    cout << "Enter number of apartments: ";
    cin >> n;

    vector<Apartment> registry(n);

    for (int i = 0; i < n; i++) {
        cout << "Apartment number: ";
        cin >> registry[i].number;

        cin.ignore();
        cout << "Owner Name: ";
        getline(cin, registry[i].ownerName);

        cout << "Residents count: ";
        cin >> registry[i].residentsCount;

        cout << "Total area: ";
        cin >> registry[i].totalArea;
        cout << endl;
    }

    int preferentialCount = 0;

    for (int i = 0; i < n; i++) {
        if (registry[i].residentsCount > 0) {
            double areaPerPerson = registry[i].totalArea / registry[i].residentsCount;
            if (areaPerPerson < 13.65) {
                preferentialCount++;
            }
        }
    }

    cout << "Count of preferential apartments (< 13.65 sq.m/person): " << preferentialCount << endl;

    return 0;
}