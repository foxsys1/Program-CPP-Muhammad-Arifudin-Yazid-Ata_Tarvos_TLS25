
#include <bits/stdc++.h>
using namespace std;

string determine_color(int seconds) {
    if ((seconds - 45) % 103 >= 0 && (seconds - 45) % 103 < 4) {
        return "Kuning";
    }
    if ((seconds - 45) % 103 > 3 && (seconds - 45) % 103 < 83) {
        return "Merah";
    }
    else {
        return "Hijau";
    }
}

int main() {
    cout << determine_color(212);
}
