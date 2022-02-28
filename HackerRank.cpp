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

//if numbers between int a and int b are more than 9, print either even or odd.
//if they are lower than 10, print their name in string.
#include <iostream>
#include <cstdio>
using namespace std;

string isEven(int n) {
    if(n % 2 == 0) {
        return "even\n";
    } else {
        return "odd\n";
    }
}
string numberString(int n) {
    string arrayNum [10] = {"one\n", "two\n", "three\n", "four\n", "five\n", "six\n", "seven\n", "eight\n", "nine\n"};
    return arrayNum[n - 1];
}
int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(i < 10) {
            cout << numberString(i);
        } else {
            cout << isEven(i);
        }
    }
    return 0;
}


//============================

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    if (c > d ) {
        if (max > c) {
            return max;
        } else {
            return c;
        }
    } else {
        if (max > d) {
            return max;
        } else {
            return d;
        }
    }
}
int maxNum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

//=============================
//find values using pointers
#include <stdio.h>
#include<cmath>
void update(int *a,int *b) {
    // Complete this function
    int A = *a + *b;
    int B = abs(*b - *a);

    *a = A;
    *b = B;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

//================================
//dynamic array and reversing it.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    std::cin >> N;
    int arr[N];
    int num;
    for(int i = N - 1; i >= 0; i--) {
        cin >> num;
        arr[i] = num;
    }
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
