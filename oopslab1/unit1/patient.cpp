#include <iostream>
using namespace std;

class patient {
public:
    int patientid;
    string name;
    string disease;

    // Setter function
    void setPatient(int id, string n, string d) {
        patientid = id;
        name = n;
        disease = d;
    }

    // Display function
    void showPatient();
};

// Define showPatient()
void patient::showPatient() {
    cout<< "Patient ID: " << patientid
        << ",Name: " << name
        << ",Disease: " << disease << endl;
}

int main() {
    patient p1, p2;  // fixed ':' to ';'

    // Set values
    p1.setPatient(301, "Arjun", "Fever");
    p2.setPatient(302, "Meena", "Diabetes");

    // Display
    p1.showPatient();
    p2.showPatient();

    return 0;
}
