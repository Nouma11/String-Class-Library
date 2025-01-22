#include <iostream>
#include "clsString.h" // Include the header file for clsString
using namespace std;

int main() {
    // Create an object of clsString
    clsString str("Hello World! This is a test string.");

    // Test 1: Length of the string
    cout << "Test 1: Length of the string\n";
    cout << "Length: " << str.Length() << endl;

    // Test 2: Count words in the string
    cout << "\nTest 2: Count words in the string\n";
    cout << "Number of words: " << str.CountWords() << endl;

    // Test 3: Upper first letter of each word
    cout << "\nTest 3: Upper first letter of each word\n";
    str.UpperFirstLetterOfEachWord();
    cout << "Modified string: " << str.GetValue() << endl;

    // Test 4: Lower first letter of each word
    cout << "\nTest 4: Lower first letter of each word\n";
    str.SetValue("Hello World! This Is A Test String.");
    str.LowerFirstLetterOfEachWord();
    cout << "Modified string: " << str.GetValue() << endl;

    // Test 5: Upper all letters in the string
    cout << "\nTest 5: Upper all letters in the string\n";
    str.SetValue("hello world!");
    str.UpperAllString();
    cout << "Modified string: " << str.GetValue() << endl;

    // Test 6: Lower all letters in the string
    cout << "\nTest 6: Lower all letters in the string\n";
    str.SetValue("HELLO WORLD!");
    str.LowerAllString();
    cout << "Modified string: " << str.GetValue() << endl;

    // Test 7: Invert all letters case in the string
    cout << "\nTest 7: Invert all letters case in the string\n";
    str.SetValue("Hello World!");
    str.InvertAllLettersCase();
    cout << "Modified string: " << str.GetValue() << endl;

    // Test 8: Count capital letters in the string
    cout << "\nTest 8: Count capital letters in the string\n";
    str.SetValue("Hello World!");
    cout << "Number of capital letters: " << str.CountCapitalLetters() << endl;

    // Test 9: Count small letters in the string
    cout << "\nTest 9: Count small letters in the string\n";
    str.SetValue("Hello World!");
    cout << "Number of small letters: " << str.CountSmallLetters() << endl;

    // Test 10: Count specific letter in the string
    cout << "\nTest 10: Count specific letter in the string\n";
    str.SetValue("Hello World!");
    char letter = 'l';
    cout << "Number of '" << letter << "': " << str.CountSpecificLetter(letter) << endl;

    // Test 11: Count vowels in the string
    cout << "\nTest 11: Count vowels in the string\n";
    str.SetValue("Hello World!");
    cout << "Number of vowels: " << str.CountVowels() << endl;

    // Test 12: Split the string into words
    cout << "\nTest 12: Split the string into words\n";
    str.SetValue("Hello World! This is a test string.");
    vector<string> words = str.Split(" ");
    cout << "Words in the string:\n";
    for (const string& word : words) {
        cout << "- " << word << endl;
    }

    // Test 13: Trim left spaces in the string
    cout << "\nTest 13: Trim left spaces in the string\n";
    str.SetValue("    Hello World!");
    str.TrimLeft();
    cout << "Trimmed string: '" << str.GetValue() << "'" << endl;

    // Test 14: Trim right spaces in the string
    cout << "\nTest 14: Trim right spaces in the string\n";
    str.SetValue("Hello World!    ");
    str.TrimRight();
    cout << "Trimmed string: '" << str.GetValue() << "'" << endl;

    // Test 15: Trim both left and right spaces in the string
    cout << "\nTest 15: Trim both left and right spaces in the string\n";
    str.SetValue("    Hello World!    ");
    str.Trim();
    cout << "Trimmed string: '" << str.GetValue() << "'" << endl;

    // Test 16: Reverse words in the string
    cout << "\nTest 16: Reverse words in the string\n";
    str.SetValue("Hello World! This is a test string.");
    str.ReverseWordsInString();
    cout << "Reversed string: " << str.GetValue() << endl;

    // Test 17: Replace a word in the string
    cout << "\nTest 17: Replace a word in the string\n";
    str.SetValue("Hello World! This is a test string.");
    string replacedString = str.ReplaceWord("World", "Universe");
    cout << "Replaced string: " << replacedString << endl;

    // Test 18: Remove punctuations from the string
    cout << "\nTest 18: Remove punctuations from the string\n";
    str.SetValue("Hello, World! This is a test string.");
    str.RemovePunctuations();
    cout << "String without punctuations: " << str.GetValue() << endl;

    return 0;
}