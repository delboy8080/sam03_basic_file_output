#include <iostream>
#include <fstream>

using namespace std;
int main() {
   ofstream fout("Output.txt"); // create a file output stream to Output.txt. If the file does not exist create it.
   if(fout) // make sure the file has opened correctly
   {
       cout << "Please enter 5 names: " << endl;
       string name;
       for(int i = 0; i <5; i++)
       {
           cout << "Name " << (i+1) << ":";
           cin >> name; // read in a name;
           fout << name <<endl; // add it to the file followed by a new line character.
       }
       fout.close(); // close the file when we are finished.
   }
   else
   {
       cout << "Unable to open file." <<endl;
   }

   return 0;
}

/*
 *
 * 1. Modify the above to output 5 peoples full names.
 *
 * 2. Create a function to read in the names from the user and return them as an array.
 *
 */