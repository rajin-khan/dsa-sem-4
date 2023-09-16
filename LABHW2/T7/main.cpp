#include<iostream>
#include "quetype.cpp"

using namespace std;

/*
int minCoins(QueType<int> q1, int value) {

    int front;

    if (value==0) {

        return 0;
    }
    else {

        int ans = INT_MAX;

        while (!q1.IsEmpty()) {

            q1.Dequeue(front);

            if (value-front >= 0) {

                int subAns = minCoins(q1, value-front);

                if (subAns != INT_MAX && subAns+1 < ans) {

                    ans = subAns+1;
                }
            }
        }
    }
}


int minCoins(int value, int denoms[], int n) {

    if (value==0) {

        return 0;
    }
    else {

        int ans = INT_MAX;

        for (int i=0; i<n; i++) {

            if (value-denoms[i] >= 0) {

                int subAns = minCoins(value-denoms[i], denoms, n);

                if (subAns!=INT_MAX && subAns+1 < ans) {

                    ans = subAns+1;
                }
            }
        }

        return ans;
    }
}

*/

 //non optimised code

int minCoins(int value, int coins[], int n)
{

    if (value == 0) {
        
        return 0;
    }

    int ans = INT_MAX;

    for (int i=0; i<n; i++)
    {
        if (coins[i] <= value)
        {
            int subAns = minCoins(value-coins[i], coins, n);

            if (subAns != INT_MAX && subAns + 1 < ans) {

                ans = subAns + 1;
            }
        }
    }
    return ans;
}

int main() {

    int n;

    cout << "Enter the number of coins: ";
    cin >> n;

    int coins[n];

    cout << "Enter the coins: ";

    for (int i=0; i<n; i++) {

        cin >> coins[i];
    }

    int value;

    cout << "Enter the value: ";
    cin >> value;

    cout << "The minimum amount of coins required are: " << minCoins(value, coins, n) << endl;
    
    return 0;
}


/*//optimised code
int minCoins(int value, int coins[], int n, int table[])
{

    if (value == 0) {
        
        return 0;
    }

    int ans = INT_MAX;

    for (int i=0; i<n; i++)
    {
        if (coins[i] <= value)
        {
            int subAns = 0;

            if (table[value-coins[i]]!=-1) {

                subAns = table[value-coins[i]];
            }
            else {

                subAns = minCoins(value-coins[i], coins, n, table);

            }

            if (subAns != INT_MAX && subAns + 1 < ans) {

                ans = subAns + 1;
            }
        }
    }
    table[n] = ans;

    return ans;
}

int main() {

    int n;

    cout << "Enter the number of coins: ";
    cin >> n;

    int coins[n];

    cout << "Enter the coins: ";

    for (int i=0; i<n; i++) {

        cin >> coins[i];
    }

    int value;

    cout << "Enter the value: ";
    cin >> value;

    int table[value + 1];
    table[0] = 0;

    for (int i=0; i<=value; i++) {

        table[i]=-1;
    }
    
    table[0] = 0;

    cout << "The minimum amount of coins required are: " << minCoins(value, coins, n, table) << endl;
    
    return 0;
} */