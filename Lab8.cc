#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void encryptTheFile();
void obtainKeyValue();
bool displayMenu();
int main(int argc, char const *argv[]){

    int choice;
    int key;
    key = 3; //default

    do{
        displayMenu();
        cout << "-Enter in a value from top to bottom unless you wish to quit the program. :";
        cin >> choice;
    if(choice == 1){
        obtainKeyValue();
        cin >> key;                     // call the set key function and assign to key
    }else if (choice == 2){

        ifstream inStream;
        ofstream outStream;
        inStream.open(data.txt);
        outStream.open(output.txt);

        if(inStream.fail() || outStream.fail()){

            cout << "-There is an error opening the input or output of the file." << endl;
            exit(0);
        }
        void encryptTheFile();             //call the encryption function

    }else if (choice == 3){
                                        //call the decryption function
    }
    }while(choice != 4);



 return 0;
}


bool displayMenu(){

    cout << "-Set the shift key value (default is 3)" << endl;
    cout << "*For a shift key value enter an integer starting at 1 and 4 being the last option, entering 4 will end the program*" << endl;
    cout << "-Encrypt a file" << endl;
    cout << "-Decrypt a file" << endl;
    cout << "-Quit" << endl;

return 'X';
}

void obtainKeyValue(){

    cout << "-Enter a shift key value between 1 and 10 to Encrypt and Decrypt";
}

void encryptTheFile(ifstream &inStream, ofstream &outStream){

    string in_file;

    cout << "-Enter an input file name.";
    cin >> data.txt;

    while(!inStream.eof()){

        
    }


}