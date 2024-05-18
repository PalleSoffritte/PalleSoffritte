// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> H, V;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int totH = 0;
    int totV = 0;
    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
        cin >> H[i];
    V.resize(N);
    for (int i = 0; i < N; i++){
        cin >> V[i];
    }
    for (int i = 0; i < N; i++)
    {
        totH += H[i];
        totV += V[i];
    }
    if (totH > totV)
    {
        cout << "Verstappen" << endl;
    }
    else
    {
        cout << "Hamilton" << endl;
    }
    int c=0;
    int k=0;
    for (int i = 0; i < N; i++)
    {
        if (H[c]>H[i])      
        {
            c=i;
        }
        
        
        if (V[k]>V[i])      
        {
            k=i;
        }
    }
    if (H[c] > V[k])
    {
        cout << "Verstappen" << endl;
    }
    else
    {
        cout << "Hamilton" << endl;
    }
    return 0;
}
