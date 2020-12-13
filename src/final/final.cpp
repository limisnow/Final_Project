/**
 * @file final.cpp
 * @brief String Parsing Library Implementation
 * @author Chris Nicholas
 * @assignment Final Project
 * @date 12/11/2020
 */
#include "final.h"
#include <sstream>
#include <vector>
void parseFile(string str, ofstream& newFile)
{
    string dollars = "Dollars";
    vector<string> vos;
    
    //Determine if the word "Dollars" is in the string
    size_t found = str.find(dollars);
    if(found!=string::npos){
        stringstream ss(str);
        
        //Put all words from the str into a vector to be parsed
        while(ss.good()){
            string substr;
            getline(ss, substr, ',');
            vos.push_back(substr);
        }

        //Write the new line into the new file
        newFile << vos[0] << " | " << setw(28) << left << vos[1] << " | " << setw(14) << left << vos[2] << " | " << setw(9) << left << vos[6] << " | " << setw(10) << left << vos[3] << " | " << setw(9) << left << vos[4] << endl;

    }
}