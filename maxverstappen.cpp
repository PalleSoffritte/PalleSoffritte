// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;
    int x;
    int y;
    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];
    int K = 0;
    for (int i = 0; i < N; ++i){
        if (P[0]>P[N-1])
        {
            x=P[0];
            y=P[N-1];
            P[0]=y;
            P[N-1]=x;
            K++;
        }
        if (P[i]<P[i+1]) 
    }

    


    cout << K << endl;

    return 0;
}
