/*
 * main.cpp
 *
 *  Created on: Oct 15, 2023
 *      Author: lesli
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>  // For reverse()

using namespace std;

int main() {
    ofstream ofile;  // Output file stream for writing to files
    ifstream ifile;  // Input file stream for reading from files

    string str = "example";  // Initialize 'str' with a value

    // Open 'CSC450_CT5_mod5.txt' in append mode
    ofile.open("C:/Users/lesli/Downloads/CSC450_CT5_mod5 (1).txt", ios::app);

    while (str != "e") {
        cout << "\nEnter string: (Enter 'e' to exit) ";
        cin >> str;
        if (str != "e") {
            ofile << str;  // Append the user's input to the file
        }
    }
    ofile.close();  // Close the output file

    // Open 'CSC450_CT5_mod5.txt' for reading and 'CSC450-mod5-reverse.txt' for writing
    ifile.open("C:/Users/lesli/Downloads/CSC450_CT5_mod5 (1).txt");
    ofile.open("C:/Users/lesli/OneDrive/Desktop/CSC450-mod5-reverse.txt");

    cout << "\n\nFile Data (CSC450 CT5_mod5.txt): \n\n";

    // Read from 'CSC450_CT5_mod5.txt', display it, and write it to 'CSC450-mod5-reverse.txt'
    while (ifile >> str) {
        cout << str;
        ofile << str;
    }
    ifile.close();  // Close the input file
    ofile.close();  // Close the output file

    // Open 'CSC450-mod5-reverse.txt' for reading and 'CSC450_CT5_mod5.txt' for writing
    ifile.open("C:/Users/lesli/OneDrive/Desktop/CSC450-mod5-reverse.txt");
    ofile.open("C:/Users/lesli/Downloads/CSC450_CT5_mod5 (1).txt");

    // Reverse the content in 'CSC450-mod5-reverse.txt' and write it to 'CSC450_CT5_mod5.txt'
    while (ifile >> str) {
        reverse(str.begin(), str.end());
        ofile << str;
    }
    ifile.close();  // Close the input file
    ofile.close();  // Close the output file

    // Reopen 'CSC450_CT5_mod5.txt' for reading and display the reversed content
    ifile.open("C:/Users/lesli/Downloads/CSC450_CT5_mod5 (1).txt");
    cout << "\n\nFile Data After Reverse (CSC450-mod5-reverse.txt):\n\n";

    while (ifile >> str) {
        cout << str;
    }

    return 0;
}
