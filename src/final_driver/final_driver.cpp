/**
 * @file final.cpp
 * @brief Driver file for parsing through Marine Economy data file.
 * @author Chris Nicholas
 * @assignment Final Project
 * @date 12/11/2020
 */
#include "final.h"
 
int main()
{
    string fileName;

    //Get name of File
    cout << "Enter File Name: ";
    cin >> fileName;
    cout << endl;
    
    string str;

    //Open File streams
    ifstream file(fileName);
    ofstream newFile("marineEcon_fixed.txt");

    //Check if File Exists
    if(!file.good()){
        cout << "File Doesn't Exist" << endl;
    }
    else{
        //Write Header Row for Table
        newFile << "Year" << " | " << setw(28) << left << "Catagory" << " | " << setw(14) << left << "Variable" << " | " << setw(9) << left << "Value" << " | " << setw(10) << left << "Data Value" << " | " << setw(9) << left << "Magnitude" << endl;
        
        //Call Parse Function
        while(getline(file,str)){
            parseFile(str, newFile);
        }
    }

    //Close File Streams
    file.close();
    newFile.close();

    return 0;
}