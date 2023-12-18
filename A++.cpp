#include<iostream>
#include<fstream>
#include<iomanip>
#include"IT.h"
using namespace std;
int count;
const int x=5;
fstream file;

main()
{
    cout << "Choose the number of students." << endl;
    cin >> count;
    struct table std[count];
    // file area
    for(int i=0; i<count; i++)
    {
        file.open("data.txt");
        for(int j=0; j<x; j++)
        {
            
           file >> std[i].mat[j];
        }
        file.close();
    }
    // input area
    for(int i=0; i<count; i++)
    {
        cout << i+1 << "- Student: ";
        cin >> std[i].name;
        for(int j=0; j<x; j++)
        {
           cout << std[i].mat[j] << ": ";
            cin >> std[i].grades[j];
        }
    }
    for (int i=0; i<count; i++)
    {
        for (int j=0; j<x; j++)
        {
            
        }
    } 
    print (std, x, count);
    cout << "/n/n/n/nif you want save enter 1\nif you do not enter 0" << endl;
    
}

