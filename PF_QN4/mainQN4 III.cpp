#include <iostream>
#include <cstring>  // Required for string functions like strcpy
using namespace std;

int main() {
    char email[20];  // Declare an array that can hold up to 19 characters + null terminator

    // Assign an email address to the array
    strcpy(email, "myemail@gmail.com");  // Use strcpy to copy the string into the email array

    // Print the email address
    cout << "Email: " << email << endl;

    return 0;
}
