/*
//recieve 3 numbers and print out their sum

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    */
/* Enter your code here. Read input from STDIN. Print output to STDOUT *//*

    int num1;
    int num2;
    int num3;

    cin >> num1 >> num2 >> num3;
    cout << num1 + num2 + num3;
    return 0;
}*/


//=====================================================

//convert int number to its respective string name;

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));


    if(n > 0 && n < 10) {
        string names[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << names[n - 1];
    } else if (n > 9) {
        cout << "Greater than 9";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

//========================================
#include <iostream>
#include <cstdio>
using namespace std;

string number(int n) {
    string names[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        if (n > 0 && n < 10) {
        return names[n - 1];
    } else if (n > 9) {
        return "nine";
    } else {
        return "one";
    }

}
string isEven(int n) {
    if(n % 2 == 0) {
        return "even";
    }
    else {
        return "odd";
    }
}

int main() {
    // Complete the code.
    int a;
    int b;

    cin >> a >> b;
    cout << number(a);
    cout << "\n";
    cout << number(b);
    cout << "\n";
    cout << isEven(a);
    cout << "\n";
    cout << isEven(b);

    return 0;
}


//============================