/**
 * @file index.cpp
 * @author illiyyin Akbar Ariyanto (you@domain.com)
 * @brief Create queue using struct
 * @version 0.1
 * @date 2023-01-05
 *
 * @copyright Copyright (c) 2023
 *
 * Create queue Students
 * Stored students
 * View queue student (Call queuue number)
 * Showing Swowing queue student
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
using namespace std;

void Clear()
{
    system("cls");
}

// void Formulaquueu(queue<string> queue)
// {
//     while (!queue.empty())
//     {
//         cout << queue.front();
//         queue.pop();
//     }
// }

struct Student
{
    int nim;
    string name;
    string classes;
    string major;
    int age;
};

int main()
{
    // Call functoin
    Clear();

    // Declare queue
    queue<Student> students;
    queue<string> queue;

    // Declare variables
    int input, choose;
    string countless, value;

    // Declare Struct to variable
    Student temp;

    cout << "Project create queue using struct" << endl;
    cout << "====================================\n";

countless:
    cout << "1. Create queue students\n";
    cout << "2. View queue number\n";
    cout << "3. Showing in include queue students\n";
    cout << "4. Showing queueu student not yet included\n";

    cout << "Enter queue students: ";
    cin >> choose;

    if (choose == 1)
    {
        cout << "Create queue students: ";
        cin >> input;
        for (int i = 0; i < input; i++)
        {
            cout << "Enter your nim: ";
            cin >> temp.nim;
            cout << "Enter your name: ";
            cin >> temp.name;
            cout << "Enter your classes: ";
            cin >> temp.classes;
            cout << "Enter your major: ";
            cin >> temp.major;
            cout << "Enter your age: ";
            cin >> temp.age;
            students.push(temp);
        }
    }
    else if (choose == 2)
    {
        while (students.empty())
        {
            cout << "Not yet included\n";
        }
        // goto wrong;
    }
    else if (choose == 3)
    {
        cout << "Queue have been included : " << students.size();
    }
    else if (choose == 4)
    {
        while (students.empty())
        {
            cout << "There's not included of queue student\n";
            goto wrong;
        }
        cout << "There's already a queue student: \n";
        while (!students.empty())
        {
            cout << "Nim : " << students.front().nim << endl;
            cout << "Name : " << students.front().name << endl;
            cout << "Classes : " << students.front().classes << endl;
            cout << "Major : " << students.front().major << endl;
            cout << "Age : " << students.front().age << endl;
            students.pop();
        }
    }
    else
    {
        cout << "You choose are wrong: ";
    }

wrong:
    cout << "\nYou want try input again? : (Y/N)";
    cin >> countless;

    if (countless == "Y")
    {
        goto countless;
    }
    else
    {
        cout << "Thanks for your.......";
    }

    return 0;
}
