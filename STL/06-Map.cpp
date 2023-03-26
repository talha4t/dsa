#include <bits/stdc++.h>
using namespace std;

int main() {

    map<string, int> id;
    // here the first data type use for ley and second data type use for value
    id["talha"] = 1;
    id["mahmud"] = 2;
    id["pavel"] = 5; // insert O(log2(n))

    cout << id["pavel"] << '\n'; //  access O(log2(n))


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

    
    // print distinct element of integer array in unsorted way

    map<int, bool> vis;

    vector<int> vv = {2, 2, 1, 1, 1, 3};

    for (int i = 0; i < vv.size(); i++)
        vis[vv[i]] = true;
    
    cout << "Unsorted" << '\n';
    for (int i = 0; i < vv.size(); i++) { // convert it in for loop
        int u = vv[i];

        if (vis[u]) {
            cout << u << '\n';
            vis[u] = false;
        }
    }
    /*
    For each loop
    
    for (auto u : vv) {
        if (vis[u]) {
            cout << u << '\n';
            vis[u] = false;
        }
    }
    */



    // print distinct element of integer array in sorted way

    map<int, bool> vis1;

    vector<int> vv1 = {2, 2, 1, 1, 1, 3};

    for (int i = 0; i < vv1.size(); i++)
        vis1[vv1[i]] = true;
    
    cout << "Sorted" << '\n';
    for (auto u : vis1)
        cout << u.first << '\n';

    return 0;
}