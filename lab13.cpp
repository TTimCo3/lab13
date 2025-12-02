#include <iostream>
#include <vector>
using namespace std;

bool fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 1; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3;
}

bool corrected_fail_lecture(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i = 0; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3;
}

int main(){
    vector<int> test1 = {1,1,1,1,1,1,1,1,1,1};
    bool student1 = fail_lecture(test1);
    bool corStudent1 = corrected_fail_lecture(test1);
    cout << endl << "Expected output:" << endl;
    if(corStudent1){
        cout << "Student1 failed" << endl;
    }
    else{
        cout << "Student1's attendance record is satisfactory" << endl;
    }
    cout << "Actual output:" << endl;
    if(student1){
        cout << "Student1 failed" << endl;
    }
    else{
        cout << "Student1's attendance record is satisfactory" << endl;
    }

    vector<int> test2 = {0,1,1,1,1,1,1,1,1,1};
    bool student2 = fail_lecture(test2);
    bool corStudent2 = corrected_fail_lecture(test2);
    cout << endl << "Expected output:" << endl;
        if(corStudent2){
        cout << "Student2 failed" << endl;
    }
    else{
        cout << "Student2's attendance record is satisfactory" << endl;
    }
    cout << "Actual output:" << endl;
    if(student2){
        cout << "Student2 failed" << endl;
    }
    else{
        cout << "Student2's attendance record is satisfactory" << endl;
    }

    vector<int> test3 = {0,0,0,1,1,1,1,1,1,1};
    bool student3 = fail_lecture(test3);
    bool corStudent3 = corrected_fail_lecture(test3);
    cout << endl << "Expected output:" << endl;
    if(corStudent3){
        cout << "Student3 failed" << endl;
    }
    else{
        cout << "Student3's attendance record is satisfactory" << endl;
    }
    cout << "Actual output:" << endl;
    if(student3){
        cout << "Student3 failed" << endl;
    }
    else{
        cout << "Student3's attendance record is satisfactory" << endl;
    }
}