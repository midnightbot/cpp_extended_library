// Basic Includes
#include <iostream>
#include <stack>
#include <queue>
#include <set>
#include <map>
//

///////////////////////////// Stacks /////////////////////////////

stack<int> stacks;
// Pushing item in stacks
stacks.push(10);
stacks.push(11);
stacks.push(12);

// viewing the stack top
int tp = stack.top();

// removing item from stack top
stack.pop();

// check stack size
cout << stacks.size();

// check if stack is empty
cout << stacks.empty();

///////////////////////////// Queue  /////////////////////////////
queue<int> q;
q.push(10);
q.push(11);
q.push(12);

cout << "Queue Size ==> " << q.size() << "\n";
cout << "Queue First Element ==> " << q.front() << "\n";
cout << "Queue Back Element ==> " << q.back() << "\n";

// Remove queue first Element
q.pop();
cout << "Queue First Element ==> " << q.front() << "\n"; 

// check if q is empty
cout << q.empty();

///////////////////////////// Vector  /////////////////////////////
void PrintVec(vector<int> arr) {
    // looping over a vector
    for(auto it : arr) {
        cout << " " << it;
    }
    cout << "\n";
}

vector<int> arr;

// adding item to vector
arr.emplace_back(10);
arr.emplace_back(11);
PrintVec(arr);

// removing elements from vector
arr.erase(arr.begin()+1); // remove the first element
PrintVec(arr);

// removing range of elements
arr.emplace_back(12);
arr.emplace_back(13);
arr.erase(arr.begin(), arr.begin()+1);
PrintVec(arr);

// sorting a vector
sort(arr.being(), arr.end());
///////////////////////////// Array  /////////////////////////////

///////////////////////////// Linked Lists  /////////////////////////////

///////////////////////////// Hash tables /////////////////////////////

///////////////////////////// Tries  /////////////////////////////

///////////////////////////// Binary Trees /////////////////////////////

///////////////////////////// Sets /////////////////////////////
void PrintSet(set<int> seen) {
    // looping over a set
    for(auto it : seen) {
        cout << " " << it;
    }
    cout << "\n";
}

set<int> seen;
// inserting item in set
seen.insert(1);
seen.insert(2);
seen.insert(2);
seen.insert(3);

// checking if an element is present in set or not
cout << (seen.find(2)!=seen.end()) << "\n";

// find set size
cout << "Set size ==> " << seen.size() << "\n";

// check if set is empty or not
cout << seen.empty();
///////////////////////////// Maps  /////////////////////////////
struct Student {
    string name;
    int roll_number;
};

void PrintStruct(Student s1) {
    cout << "Value -> " <<s1.name << "  " << s1.roll_number;
}

void PrintMap(map<int,Student> student_info) {
    // looping over a map
    for(auto it : student_info) {
        cout << "Key -> "<<it.first << " ";
        PrintStruct(it.second);
        cout << "\n";
    }
}

map<int, Student> student_info;
Student s1;
s1.name = "Anish";
s1.roll_number = 1;

Student s2;
s2.name = "Rohan";
s2.roll_number = 2;

student_info.insert({1,s1});
student_info.insert({2,s2});
PrintMap(student_info);

// check if a key is present in map
cout << (student_info.find(1)!=student_info.end()) << "\n";

// map size
cout << student_info.size() << "\n";

// remove all elements with a given key
student_info.erase(1);
PrintMap(student_info);

// clear the map
student_info.clear();
PrintMap(student_info);

///////////////////////////// Structure /////////////////////////////
struct Student {
    string name;
    int roll_number;
};

void PrintStudentInfo(Student student) {
    cout << "Student Name " << student.name << "\n";
    cout << "Student Roll Number " << student.roll_number << "\n";
    
}

Student s1;
s1.name = "Anish";
s1.roll_number = 1;
PrintStudentInfo(s1);

///////////////////////////// Classes /////////////////////////////