#include <bits/stdc++.h>
using namespace std;

int main() {

    // initialized vector 
    vector <int> v;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x); // taking input
    }

    // print vector 
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    
    // declare size i
    int n1;
    cin >> n1;
    vector<int> v1(n1);

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << ' ';

    vector<int>v2(10);
    v2.push_back(7); // 7 push in 11th position
    
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << ' ';

    
    // push default value

    // here 10 is the size of the vector and 5 is the element of all postion's aka 1 to 10
    vector<int>v3(10, 5);

    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << ' ';

    // copy vector 
    vector<int> v4;
    v4.push_back(7);
    v4.push_back(6);

    vector<int> v5 = v4;

    for (int i = 0; i < v5.size(); i++)
        cout << v5[i] << ' ';
    return 0;
}