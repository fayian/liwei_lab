#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	Student(const string& firstName, const string& lastName, const string& dorm, const string& id) :
        first_name(firstName),
        last_name(lastName),
        dormitory(dorm),
        ID(id) {
    }

	string generate_address(){
        return "1001 University Road, Hsinchu, Taiwan 300, ROC, dorm " + dormitory + ", (" + ID + ") " + first_name + " " + last_name;
    }

private:
	string first_name;
    string last_name;
	string dormitory;
	string ID;
};


int main() {
  	string first_name;
    string last_name;
	string dormitory;
	string ID;

    cin >> first_name >> last_name >> dormitory >> ID;
    Student mStudent(first_name, last_name, dormitory, ID);

  	cout << mStudent.generate_address() << endl;
    return 0;
}
