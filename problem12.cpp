#include <iostream>
using namespace std;

int main() {
    int totalStudents = 241;
    int groups = 11;

    int studentsPerGroup = totalStudents / groups;

    int lastGroup = totalStudents % groups;

    int firstGroup = studentsPerGroup;

    if (lastGroup == 0) {
        lastGroup = studentsPerGroup;
    }

    cout << "In first group: " << firstGroup << endl;
    cout << "In last group: " << lastGroup << endl;

    return 0;
}