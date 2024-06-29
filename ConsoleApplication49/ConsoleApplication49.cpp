#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


//struct Subscriber {
//    string surname;
//    string name;
//    string phoneNumber;
//};
//
//
//vector<Subscriber> readSubscribersFromFile(const string& filename) {
//    vector<Subscriber> subscribers;
//    ifstream file(filename);
//    if (!file) {
//        cerr << "Cannot open file: " << filename << endl;
//        return subscribers;
//    }
//
//    Subscriber sub;
//    while (file >> sub.surname >> sub.name >> sub.phoneNumber) {
//        subscribers.push_back(sub);
//    }
//
//    file.close();
//    return subscribers;
//}
//
//
//void printAllSubscribers(const vector<Subscriber>& subscribers) {
//    for (const auto& sub : subscribers) {
//        cout << "Surname: " << sub.surname << ", Phone Number: " << sub.phoneNumber << '\n';
//    }
//}
//
//
//void printSubscriberDetails(const vector<Subscriber>& subscribers, const string& surname) {
//    auto it = find_if(subscribers.begin(), subscribers.end(), [&](const Subscriber& sub) {
//        return sub.surname == surname;
//        });
//
//    if (it != subscribers.end()) {
//        cout << "Surname: " << it->surname << ", Phone Number: " << it->phoneNumber << '\n';
//    }
//    else {
//        cout << "Subscriber with surname " << surname << " not found.\n";
//    }
//}
//
//int main() {
//
//    string filename = "subscribers.txt";
//    vector<Subscriber> subscribers = readSubscribersFromFile(filename);
//
//    if (subscribers.empty()) {
//        cerr << "No subscribers loaded.\n";
//        return 1;
//    }
//
//
//    int choice;
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Print all subscribers\n";
//        cout << "2. Search subscriber by surname\n";
//        cout << "3. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            printAllSubscribers(subscribers);
//            break;
//        case 2: {
//            cout << "Enter surname: ";
//            string surname;
//            cin >> surname;
//            printSubscriberDetails(subscribers, surname);
//            break;
//        }
//        case 3:
//            cout << "Exiting...\n";
//            break;
//        default:
//            cout << "Invalid choice. Please try again.\n";
//        }
//    } while (choice != 3);
//
//    return 0;
//}























//void copyFileLines(const string& inputFilename, const string& outputFilename) {
//
//    ifstream inputFile(inputFilename);
//    if (!inputFile) {
//        cerr << "Cannot open file: " << inputFilename << endl;
//        return;
//    }
//
//
//    ofstream outputFile(outputFilename);
//    if (!outputFile) {
//        cerr << "Cannot open file: " << outputFilename << endl;
//        return;
//    }
//
//
//    string line;
//
//    while (getline(inputFile, line)) {
//        outputFile << line << '\n';
//    }
//
//
//    inputFile.close();
//    outputFile.close();
//}
//
//int main() {
//    string inputFilename = "input.txt";
//    string outputFilename = "output.txt";
//
//    copyFileLines(inputFilename, outputFilename);
//
//    cout << "File lines copied from " << inputFilename << " to " << outputFilename << " successfully." << endl;
//
//    return 0;
//}




//void reverseCopyFileLines(const string& inputFilename, const string& outputFilename) {
//   
//    ifstream inputFile(inputFilename);
//    if (!inputFile) {
//        cerr << "Cannot open file: " << inputFilename << endl;
//        return;
//    }
//
//   
//    vector<string> lines;
//    string line;
//    while (getline(inputFile, line)) {
//        lines.push_back(line);
//    }
//    inputFile.close();
//
//    
//    ofstream outputFile(outputFilename);
//    if (!outputFile) {
//        cerr << "Cannot open file: " << outputFilename << endl;
//        return;
//    }
//
//    
//    for (auto it = lines.rbegin(); it != lines.rend(); ++it) {
//        outputFile << *it << '\n';
//    }
//    outputFile.close();
//}
//
//int main() {
//    string inputFilename = "input.txt";
//    string outputFilename = "output.txt";
//
//    reverseCopyFileLines(inputFilename, outputFilename);
//
//    cout << "File lines copied from " << inputFilename << " to " << outputFilename << " in reverse order successfully." << endl;
//
//    return 0;
//}
//









