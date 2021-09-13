#include <iostream>
#include <fstream>
using namespace std;
const char* fileName = "account.dat";

class Account {
private:
    char accountNumber[20];
    int totalBalance;
    char firstName[20], lastName[20];

public:
    void readData() {
        cout << "Account number: ";cin >> accountNumber;
        cout << "First name: "; cin >> firstName;
        cout << "Last Name: "; cin >> lastName;
        cout << "Total balance: "; cin >> totalBalance;
    }
    void showData() {
        cout << "\nAccount number: " << accountNumber << endl;
        cout << "First name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Total balance: " << totalBalance << endl;
    }
    void writeRecords() {
        fstream ofile;
        ofile.open(fileName, ios::out | ios::binary | ios::app);
        readData();
        ofile.write(reinterpret_cast<char*>(this), sizeof(*this));
    }
    void showRecords() {
        fstream ifile;
        ifile.open(fileName, ios::in | ios::binary);
        if (!ifile)
            cout << "ifile not found" << endl;
        else {
            cout << "\n--------All records from file--------\n";
            while (!ifile.eof()) {
                ifile.read(reinterpret_cast<char*>(this), sizeof(*this));
                if (!ifile.eof())
                    showData();
            }
        }
    }

    void showOneRecord() {
        fstream file;
        file.open(fileName, ios::in | ios::binary);
        if (!file)
            cout << "File cannot be opened" << endl;
        else {
            file.seekg(0, ios::end);
            size_t sizeOfFile = file.tellg();
            size_t sizeOfOneRecord = sizeof(*this);
            int numOfRecords = sizeOfFile / sizeOfOneRecord;
            cout << "Number of records in file: " << numOfRecords << endl;
            int recordNumber;
            cout << "Enter the record number: ";cin >> recordNumber;
            file.seekg((recordNumber - 1) * sizeOfOneRecord);
            file.read(reinterpret_cast<char*>(this), sizeOfOneRecord);
            showData();
        }
    }

    void editOneRecord() {
        fstream file;
        file.open(fileName, ios::out | ios::in | ios::binary);
        if (!file.is_open())
            cout << "File cannot be opened" << endl;
        else {
            file.seekg(0, ios::end);
            size_t sizeOfFile = file.tellg();
            size_t sizeOfOneRecord = sizeof(*this);
            int numOfRecords = sizeOfFile / sizeOfOneRecord;
            cout << "Number of records in file: " << numOfRecords << endl;
            int recordNumber;
            cout << "Enter the record number to update: ";cin >> recordNumber;
            cout << "Data for the record: " << endl;
            file.seekg((recordNumber - 1) * sizeOfOneRecord);
            file.read(reinterpret_cast<char*>(this), sizeOfOneRecord);
            showData();
            file.seekp((recordNumber - 1) * sizeOfOneRecord);
            cout << "Update the data below: " << endl << endl;
            readData();
            file.write(reinterpret_cast<char*>(this), sizeOfOneRecord);

        }
    }

    void deleteRecord() {
        fstream file;
        file.open(fileName, ios::in | ios::binary);
        if (!file)
            cout << "File cannot be opened" << endl;

        //putting the file pointer to the end of file
        file.seekg(0, ios::end);
        //gives the current position of file pointer in terms of bytes
        int sizeOfFile = file.tellg();
        //size of our one object
        int sizeOfOneRecord = sizeof(*this);
        int numOfRecords = sizeOfFile / sizeOfOneRecord;
        cout << "Number of records in file: " << numOfRecords << endl;
        int recordNumber;
        cout << "Enter the record number to delete: ";cin >> recordNumber;

        //created new file temporary file to copy the records except the one we want to delete
        fstream tmpfile("temp.dat", ios::out | ios::binary);

        //put the file pointer at the begining of the file for reading
        file.seekg(0);

        //we loop through the records in the file
        for (int i = 0; i < numOfRecords; ++i) {
            cout << "Loop 1" << endl;
            if (file.eof())
                break;
            file.read(reinterpret_cast<char*>(this), sizeOfOneRecord);

            //if we arrive at that record number, we escape
            if (i = (recordNumber - 1))
                continue;

            //we write the content from the file to tmpfile
            tmpfile.write(reinterpret_cast<char*>(this), sizeOfOneRecord);
        }
        file.close();

        fstream outfile(fileName, ios::out | ios::binary);
        tmpfile.close();
        tmpfile.open("temp.dat", ios::in | ios::binary);

        //we read from the tmpfile and write to our original file
        for (int i = 0; i < numOfRecords - 1; i++) {
            cout << "Loop 2" << endl;
            if (tmpfile.eof())
                break;
            tmpfile.read(reinterpret_cast<char*>(this), sizeOfOneRecord);
            outfile.write(reinterpret_cast<char*>(this), sizeOfOneRecord);
        }

        tmpfile.close();
        remove("temp.dat");
    }
};
void showMenu(Account& a) {
    int choice;
    cout << "---------------------------------";
    cout << "\nSelect the options below: " << endl;
    cout << "1. Add a record\n2. Update a record\n3. Show a record\n4. Show all records\n5. Delete a record\n6. Exit" << endl;
    cout << ">> ";cin >> choice;
    switch (choice) {
    case 1:
        a.writeRecords();
        break;
    case 2:
        a.editOneRecord();
        break;

    case 3:
        a.showOneRecord();
        break;

    case 4:
        a.showRecords();
        break;

    case 5:
        a.deleteRecord();
        break;

    case 6:
        exit(0);

    default:
        cout << "Please select a valid number!" << endl;
        exit(0);
    }
}
int main() {
    Account a;
    cout << "\n--------ACCOUNT MANAGEMENT SYSTEM--------\n";

    while (true)
        showMenu(a);
    return 0;
}