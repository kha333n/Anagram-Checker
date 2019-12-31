// Anagram Checker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkAnagram(string string1, string string2) 
{ 
    // Get lengths of both strings 
    int n1 = string1.length(); 
    int n2 = string2.length(); 
  
    // If length of both strings is not same, then they 
    // cannot be anagram 
    if (n1 != n2) 
        return false; 
  
    // Sort both the strings 
    sort(string1.begin(), string1.end()); 
    sort(string2.begin(), string2.end()); 
  
    // Compare sorted strings 
    for (int i = 0; i < n1; i++) 
        if (string1[i] != string2[i]) 
            return false; 
  
    return true; 
} 

int main()
{
    string string1, string2;
    cout << "Enter String 1: ";
	cin >> string1;
	cout << endl << "Enter String 2: " ;
	cin >> string2;
	cout << endl;
	
    if (checkAnagram(string1, string2))
    {
        cout << "The two strings are anagram of each other" << endl;
    }
    else
    {
        cout << "The two strings are not anagram of each other" << endl;
    }
    return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
