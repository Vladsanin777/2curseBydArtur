#include <iostream>
#include <string>
using namespace std;

int main() {
    string st, word, min_word;
    int min_len = 1000;

    cout << "Vvedite stroku: ";
    getline(cin, st);

    st = st + " ";

    word = "";
    for (int i = 0; i < st.length(); i++) {
        if (st[i] != ' ') {
            word = word + st[i];
        } else {
            if (word.length() > 0) {
                if (word.length() < min_len) {
                    min_len = word.length();
                    min_word = word;
                }
                word = "";
            }
        }
    }

    if (min_len != 1000) {
        cout << "Samoe korotkoe slovo: \"" << min_word << "\"" << endl;
        cout << "Ego dlina: " << min_len << endl;
    } else {
        cout << "Slova ne naideny" << endl;
    }

    return 0;
}
