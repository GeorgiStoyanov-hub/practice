#include <iostream>
#include <string>

std::string EncryptCaeasar(const std::string &input, int shift){
    /*This line declares a function named EncryptCaeasar that takes a string (input) and an integer (shift) as parameters.
     * The function returns a string, which will be the encrypted text.*/

    std::string encryptedText; //This line declares an empty string variable named
                                // 'encryptedText' to store the encrypted characters.

    for(char c : input){    /*This line starts a loop that iterates through each character (char c) in the input string.*/

        if(isalpha(c)){ //This line checks if the current character is an alphabetic character.

            char base = isupper(c) ? 'A' : 'a'; //This line determines whether the current character is an uppercase
                                                // or lowercase letter and sets the base variable accordingly.

            char encryptedChar = (c - base + shift) % 26 + base;



            encryptedText += encryptedChar; //This line appends the calculated encryptedChar to the encryptedText string.
        }else{
            encryptedText += c;
        }
    }

    return encryptedText; //Finally, the function returns the fully encrypted text.

    /*So, the function iterates through each character of the input string, applies the Caesar cipher to alphabetic
     * characters, and builds the encrypted text. It handles both uppercase and lowercase letters and ensures
     * that the result wraps around properly within the valid range of 26 letters.*/
}

int main(){
    std::cout << "Enter the text to encrypt: ";
    std::string inputText;
    std::getline(std::cin, inputText); /*This line uses std::getline to read a line of text from the standard
                                        * input (keyboard) and stores it in the inputText variable.
                                        * This allows the user to input a string with spaces.*/

    int shift; //This line declares an integer variable named shift to store the number of
                // intervals (shifts) for the Caesar cipher.

    /*This is a do-while loop that prompts the user to enter the number of intervals until a valid value (between 0 and 25)
    *is entered. If the entered value is outside this range, an error message is displayed, and the user is prompted again.*/
    do{
        std::cout << "Enter the number of intervals (shifts, between 0 and 25): ";
        std::cin >> shift;

        if(shift < 0 || shift > 25){
            std::cout << "Invalid input. Shift must be between 0 and 25. Try Again. \n";
        }
    }
    while(shift < 0 || shift > 25);



    std::string encryptedText = EncryptCaeasar(inputText, shift);
    /*This line calls the EncryptCaesar function with the user's
    * input (inputText) and the specified shift value (shift).
    * The result (encrypted text) is stored in the encryptedText variable.*/

    std::cout << "Original text: " << inputText << std::endl;
    std::cout << "Encrypted text: " << encryptedText << std::endl;

    return 0;
}