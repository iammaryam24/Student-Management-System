#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "\n1. Add Student\n2. View Students\n3. Search Student\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: "; cin >> s.id;
            cout << "Enter Name: "; cin >> s.name;
            cout << "Enter Grade: "; cin >> s.grade;
            students.push_back(s);
        } 
        else if (choice == 2) {
            for (auto &s : students)
                cout << "ID: " << s.id << " | Name: " << s.name << " | Grade: " << s.grade << endl;
        } 
        else if (choice == 3) {
            int id; cout << "Enter ID to search: "; cin >> id;
            bool found = false;
            for (auto &s : students) {
                if (s.id == id) {
                    cout << "Found → " << s.name << " (" << s.grade << ")" << endl;
                    found = true;
                }
            }
            if (!found) cout << "Student not found!\n";
        }
    } while (choice != 4);
    return 0;
}
