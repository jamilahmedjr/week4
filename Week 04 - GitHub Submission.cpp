// Week 04 - GitHub Submission.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;

const string FileName = "Constitution_of_the_United_States.html";

int main()
{

    ifstream fs;
    cout <<"***********************************************************" << endl;
    cout << "************ Week 04 - GitHub Submission ******************" << endl;
    cout << "***********************************************************" << endl;
    cout << endl;
    cout << "Analyzing file 'Constitution_of_the_United_States.html'" << endl;
    cout << endl;

    fs.open(FileName);

    char words;
    int a = 0,
        e = 0,
        i = 0,
        o = 0,
        u = 0;
    while (fs >> words)
        {
            if (words == 'a' or words == 'A')
                a++;
            else if (words == 'e' or words == 'E')
                e++;
            else if (words == 'i' or words == 'I')
                i++;
            else  if (words == 'o' or words == 'O')
                o++;
            else if (words == 'u' or words == 'U')
                u++;

     }

   
    cout << "The number of A's:" << setw(28) << setfill('.') << "." << a << endl;
    cout << "The number of E's:" << setw(28) << setfill('.') << "." << e << endl;
    cout << "The number of I's:" << setw(28) << setfill('.') << "." << i << endl;
    cout << "The number of O's:" << setw(28) << setfill('.') << "." << o << endl;
    cout << "The number of U's:" << setw(28) << setfill('.') << "." << u << endl;
    cout << "Thw Vowel count is:" << setw(31) << setfill('.') << a + e + i + o + u << endl;

    
    system("pause");
    return 0;
}

