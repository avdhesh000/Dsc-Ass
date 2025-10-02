// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 10;       
//     int &y = x;       
//     cout << y << ' '; // Print value of 'y' (10, because it refers to 'x')
    
//     x += 5;           // Modify 'x'
//     cout << y << ' '; // Print value of 'y' (15, because it still refers to 'x')
    
//     y += 5;           // Modify 'y'
//     cout << x << ' '; // Print value of 'x' (20, because 'y' modifies 'x')
    
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& s, const string& p) {
    int lenS = s.length();
    int lenP = p.length();

    for (int i = 0; i <= lenS - lenP; ++i) {
        int j = 0;
        while (j < lenP && s[i + j] == p[j]) {  
            j++;
        }
        if (j == lenP) {
            return i; // Pattern found at index i
        }
    }
    return -1; // Pattern not found
}

int main() {
    string s = "He0lo";
    string p = "He0lo";

    int index = findPattern(s, p);
    cout << index << endl; // Output: 2

    s = "World";
    p = "dl";

    index = findPattern(s, p);
    cout << index << endl; // Output: -1

    return 0;
}
   