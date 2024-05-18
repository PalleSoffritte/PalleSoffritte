// NOTE: it is recommended to use this even if you don't understand the
// following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// input data
int N;
string S;

int main() {
    //  uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin >> N;
    cin >> S;
    char lista[26] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < 26; i++)
    {
        if (S[j]==lista[i])
        {
            cout<<lista[i+1];
        }
        
    }
    }
    return 0;
}
