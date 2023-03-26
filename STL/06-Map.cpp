#include <bits/stdc++.h>
using namespace std;

int main() {

    map<string, int> id;
    // here the first data type use for ley and second data type use for value
    id["talha"] = 1;
    id["mahmud"] = 2;
    id["pavel"] = 5;

    cout << id["pavel"] << '\n';


    map<string, string> gender;
    // we use both string. first denote the key and the second index denote the value
    gender["talha"] = "male";
    gender["pavel"] = "male";
    gender["tanha"] = "female";

    cout << gender["tanha"] << '\n';


    vector<int> v = {1, 4, 6, 4, 9, 9, 10, 1, 1, 1, 1, 1};

    map<int, int> cnt;
    
    for (auto u : v)
        cnt[u]++;
    
    for (auto u : cnt)
        cout << u.first << " = " << u.second << '\n';
    

    cout << '\n';

    // count string frequency

    vector<string> name = {"talha", "mahmud", "talha", "pavel", "talha", "mahmud"};

    map<string, int> nct;

    for (auto u : name)
        nct[u]++;

    for (auto u : nct) 
        cout << u.first << " = " << u.second << '\n'; 

    return 0;
}