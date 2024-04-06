#include<iostream>
#include<vector>
#include<string>
#include<map>
using  namespace std;

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */

class Encrypter {
public:
    map<char, string>mp;
    vector<string>d;

    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {

        for (int i = 0; i < keys.size(); i += 1) {
            mp[keys[i]] = values[i];
        }
        d = dictionary;
    }


    string encrypt(string st1) {
        string ans = "";
        for (int i = 0; i < st1.size(); i += 1) {

            if (mp.count(st1[i]) == 0) {
                return "";
            }
            ans += mp[st1[i]];
        }
        return ans;
    }

    //O(n)

    int decrypt(string dt1) {
        int ans = 0;
        //Iterate Over the Dictionary and Encrypt and Check.

        for (int i = 0; i < d.size(); i += 1) {
            string s = encrypt(d[i]);
            if (s == dt1) {
                ans += 1;
            }
        }

        return ans;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<char>keys(n);
    vector<string>values(n), dictionary(m);


    for (int i = 0; i < n; i += 1) {
        char x;
        cin >> x;
        keys.push_back(x);
    }
    for (int i = 0; i < n; i += 1) {
        string x;
        cin >> x;
        values.push_back(x);
    }
    for (int i = 0; i < m; i += 1) {
        string x;
        cin >> x;
        dictionary.push_back(x);
    }

    //Constructor Invocation.
    Encrypter e(keys, values, dictionary);

    string st1;
    cin >> st1;
    cout << e.encrypt(st1) << endl;

    string dt1;
    cin >> dt1;
    cout << e.decrypt(dt1) << endl;


}