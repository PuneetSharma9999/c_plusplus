#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    float percentages[100], totalPercentage = 0.0, cgpa;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    if (cin.fail() || numSubjects <= 0 || numSubjects > 100) {
        cout << "Invalid number of subjects! Please enter a value between 1 and 100." << endl;
        return 1;
    }

    for (int i = 0; i < numSubjects; i++) {
        float percentage;
        cout << "Enter percentage for subject " << i + 1 << ": ";
        cin >> percentage;

        if (cin.fail() || percentage < 0 || percentage > 100) {
            cout << "Invalid percentage! Please enter a value between 0 and 100." << endl;
            return 1;
        }

        percentages[i] = percentage;
        totalPercentage += percentage;
    }

    float averagePercentage = totalPercentage / numSubjects;
    cgpa = averagePercentage / 9.5;

    cout << "Your average percentage is: " << averagePercentage << "%" << endl;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
