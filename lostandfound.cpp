#include <bits/stdc++.h>
using namespace std;

string encode(string plain_text) {
    string return_text;
    int first_element = (int)plain_text[0];
    for (int i = plain_text.size() - 1; i >= 0; i--)
    {
        if(plain_text[i] != 'a' and plain_text[i] != 'i' and plain_text[i] != 'u' and plain_text[i] != 'e' and 
            plain_text[i] != 'o' and plain_text[i] != 'A' and plain_text[i] != 'U'
            and plain_text[i] != 'I' and plain_text[i] != 'E' and plain_text[i] != 'O') {
                return_text += plain_text[i];
             }
    }
    if (return_text.size() % 2 == 0) {
        return_text.insert(return_text.size() / 2, to_string(first_element));
        return return_text;
    }
    else {
        return_text.insert((return_text.size() / 2) + 1, to_string(first_element));
        return "The encoded string is: " + return_text;
    }
}
string decode(string cipher_text) {
    string decoded_text;
    int asciicode = 0;
    int counter = 1;
    for (int i = cipher_text.size() - 1; i >= 0; i--)
    {
        if (cipher_text[i] >= '0' && cipher_text[i] <= '9') {
            asciicode = asciicode + ((cipher_text[i] - '0') * counter);
            counter *= 10;
        }
        else {
            decoded_text += cipher_text[i];
        }
    }
    decoded_text.insert(0, 1, (char)asciicode);
    return "The possibilities are: " + decoded_text + " and " + decoded_text.substr(1);
}
int main() {
    cout << decode("nn98b") << "\n";
    cout << encode("banana");
}
