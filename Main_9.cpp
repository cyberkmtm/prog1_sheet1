#include <iostream>
using namespace std;

int main() {
    int total_Students;
    int marks;
    int count = 0;

    cout << "Enter the total number of students: ";
    cin >> total_Students;

    for (int i = 1; i <= total_Students; i++) {
        cout << "Enter the marks for student " << i << ": ";
        cin >> marks;

        if (marks > 20) {
            count++;
        }
    }

    cout << "Number of students with marks greater than 20: " << count << endl;

    return 0;
}