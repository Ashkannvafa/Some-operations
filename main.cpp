#include <bits/stdc++.h>
using namespace std;

int main () {
   vector <int> a = {2, 3, 5, 91, 6, 7, 8};
   vector <int> b {};
   char input;
   int newNumber {0};
   int sum {0};
   int x {0}; 
   bool c = true;
   while (c) {
    for (size_t i = 0; i < a.size(); ++i) {
       b.push_back(a[i]);
    }
    cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit\nPlease select a menu header : ";
    cin >> input;
    switch (input) {
        case 'p' :
        case 'P' :
          cout << "Print numbers :" << endl;
          cout << "[ ";
          for (size_t i {0}; i < a.size(); ++i) {
              cout << a[i] << " ";
          }
          cout << "]"; 
          break;
        
        case 'a' :
        case 'A' :
          cout << "Add a number :";
          cin >> newNumber;
          cout << newNumber << " added";
          a.push_back(newNumber);
          break;
        
        case 'm' :
        case 'M' :
          cout << "Display mean of the numbers : " << endl;
          for (size_t i {0}; i < a.size(); ++i) {
              sum += a[i];
          }
          cout << double(sum) / a.size();
          break;
        
        case 's' :
        case 'S' :
          cout << "Display the smallest number : ";
          for (size_t i {1}; i < b.size(); ++i) {
              if (b[i-1] > b[i]) {
                  x = b[i-1];
                  b[i-1] = b[i];
                  b[i] = x;  
              }
          }
          cout << b[0];
          break;
        
        case 'l' :
        case 'L' :
          cout << "Display the largest number : ";
          for (size_t i {1}; i < b.size(); ++i) {
              if (b[i-1] > b[i]) {
                  x = b[i-1];
                  b[i-1] = b[i];
                  b[i] = x;  
              }
          }
          cout << b[b.size() - 1];
          break;
        
        case 'q' :
        case 'Q' :
          cout << "Quit";
          c = false;
          break;
        
        default :
          cout << "Unknown selection, please try again";          
          
    }
    cout << endl << endl  << endl << endl;
}
    }