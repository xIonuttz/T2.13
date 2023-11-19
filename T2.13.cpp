#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Define a struct for Person
struct Person {
    string name;
    int age;
};

// Comparison function for sorting in descending order by age
bool compareByAgeDescending(const Person& a, const Person& b) {
    return a.age > b.age;
}

int main() {
    // Create a list of struct Person
    vector<Person> people = {
        {"Maria", 25},
        {"Denisa", 30},
        {"Alexandra", 22},
        // Add more persons as needed
    };

    // Sort the list by age in descending order
    sort(people.begin(), people.end(), compareByAgeDescending);

    // Print the sorted list
    cout << "Sorted list by age in descending order:\n";
    for (const auto& person : people) {
        cout << "Name: " << person.name << ", Age: " << person.age << "\n";
    }

    return 0;
}
