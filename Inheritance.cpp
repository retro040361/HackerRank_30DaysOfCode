#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here
    Student(string first, string last, int id, vector<int> scores)
        : Person(first, last, id)
    {
        testScores = scores;
    }
    /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    string calculate(void)
    {
        int temp = 0;
        int n = testScores.size();
        for (int i = 0; i < n; i++)
        {
            temp += testScores[i];
        }
        temp = temp / n;
        if (temp >= 90)
            return "O";
        else if (temp >= 80)
            return "E";
        else if (temp >= 70)
            return "A";
        else if (temp >= 55)
            return "P";
        else if (temp >= 40)
            return "D";
        else
            return "T";
    }
    // Write your function here
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}