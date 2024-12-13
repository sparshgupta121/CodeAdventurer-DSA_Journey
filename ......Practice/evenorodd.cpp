#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "8520.51";  // Corrected string declaration

    int n = s.length();    // Get the length of the string

    char last = s[n - 1];  // Get the last character of the string

    if (last=="0"|| last=="."){
        last=last-1;
    }

    return 0;
}
