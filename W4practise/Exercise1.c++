#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);

    // 1. Write initial entries
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cerr << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile << "Alice 90\n";
    outFile << "Bob 85\n";
    outFile << "Charlie 92\n";
    outFile << "David 88\n";
    outFile << "Eviline 95\n";
    outFile.close();

    // 2. Read and display
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cerr << "Cannot open file for reading\n";
        return 1;
    }
    // TODO: read loop and print
    string name;
    int score;
    while (inFile >> name >> score) {
        cout << "Name: " << name << ", Score: " << score << endl;
    }
    inFile.close();

    return 0;
}
