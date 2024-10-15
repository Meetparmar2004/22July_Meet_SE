#include <iostream>
using namespace std;

// Class to manage lecture details
class lecture_details
{
public:
    // Arrays to store multiple lecture information
    int number_of_lecture[10];
    string lacturer_name[10];
    string subject[10];
    string course_name[10];

    int n;
    int a = 1; // Counter for displaying lecture details

    // Constructor to initialize lecture details
    lecture_details()
    {
        cout << "Enter number of Leture Details : ";
        cin >> n;

        // Loop to collect details for n lectures
        for (int i = 0; i < n; i++)
        {
            cout << "\n-----------Lecture Detail " << a << "-----------";
            cout << "\nEnter Name of Lecturer : ";
            cin >> lacturer_name[i];
            cout << "Enter Name of Subject : ";
            cin >> subject[i];
            cout << "Enter Name of Course : ";
            cin >> course_name[i];
            cout << "Enter Number of Lecture : ";
            cin >> number_of_lecture[i];
            a++;
        }
    }

    // Method to display the collected lecture details
    void display_details()
    {
        a = 1; // Reset counter for displaying details

        cout << "\n------- Display All Lecture Details -------";

        for (int i = 0; i < n; i++)
        {
            cout << "\n\n----------- Lecture Detail " << a << " -----------";
            cout << "\nLacturer Name : " << lacturer_name[i];
            cout << "\nSubject Name : " << subject[i];
            cout << "\nCourse Name :" << course_name[i];
            cout << "\nNumber of Lacture" << number_of_lecture[i];
            a++;
        }
    }
};

int main()
{
    lecture_details ld;
    ld.display_details();
}