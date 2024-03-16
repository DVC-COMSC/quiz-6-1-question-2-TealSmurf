#include <iostream>
#include <fstream>
using namespace std;

int writeFile(const string& filename)
{
    ofstream outfile("C:\\Users\\jcoin\\Downloads\\Comsc 110\\quiz-6-1-question-2-TealSmurf\\employee.txt");
    
    ofstream ofs;

    int N;
    int id, s1;
    string eName, dName;

    cout << "Enter the number of employees: ";
    cin >> N;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    if(ofs)
    {
        ofs << N << endl;
        for(int i = 0; i < N; i++)
        {
            cout << "Enter their ID, employee name, department name, and salary: ";
            cin >> id >> eName >> dName >> s1;
            ofs << id << " " << eName << " " << dName << " " << s1 << endl;
        }
    }

    ofs.close();
    return N;
}

int readFile()
{
    ifstream ifs;

    cout << "ID         " << "Name      " << "Department    " << "Salary" << endl;

    int N, id, s1, total;
    string eName, dName;
    double avg;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    if(ifs)
    {
        ifs >> N;
        for(int i = 0; i < N; i++)
        {
            ifs >> id >> eName >> dName >> s1;
            cout << id << "     " << eName << "     " << dName << "         " << s1 << endl;
            total += s1;
        }
    }
    avg = total/N;
    cout << "               Total: " << total << "  Average: " << avg;

    ifs.close();
}