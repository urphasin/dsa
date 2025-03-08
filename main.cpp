#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long LL;
using vlong = long long;
typedef struct abc abc_t;

typedef struct abc {
    int a;
    int b;
} abc;

typedef struct Node {
    int val;
    struct Node* next;
} Node_t;


int main(int argc, char** argv) {
    std::cout << "Argumests passed [argv] : " << argc<< "\n";
    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }

    abc a = {0, 1};
    abc* p = &a;
    printf("Address of a: %p \n", p);
    printf("Address of p: %p \n", &p);
    printf("a.a: %d, a.b: %d", a.a, a.b);

    return 0;
}
