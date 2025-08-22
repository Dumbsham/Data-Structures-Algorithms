#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int rno;
    float gpa;

    Student() // for student s2
    {
        // THIS IS A DEFAULT CONSTRUCTOR
    }

    Student(string s, int r)
    { // 2. ussi order mein yahan hona chyie
        name = s;
        rno = r;
        // for student s1
        //  THIS IS A PARAMTERIZED CONSTRUCTOR
    }

    Student(string s, int r, float g) // for student s3
    {
        name = s;
        rno = r;
        gpa = g;
    }

    Student(int r)
    {
        rno = r;
    }
};

int main()
{
    Student s1("Saksham Sharma", 76); // 1. Jis order mein yahan value do
                                      //   s1.name = "Raghav Garg";
    s1.rno = 6;
    s1.gpa = 8.2;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    Student s3("KAINTH JATT", 89, 13);

    Student s4(45);

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;

    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
}