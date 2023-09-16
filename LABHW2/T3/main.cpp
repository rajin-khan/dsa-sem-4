#include "UnsortedType.cpp"
#include <iostream>

using namespace std;

void combineSequences(int m, int n, int* firstSeq, int* secondSeq) {

    UnsortedType<int> combinedSeq;
    UnsortedType<int> combinedSeqOutput;

    int i = 0, j = 0;

    while (i < m && j < n) { 
        
        if (firstSeq[i] < secondSeq[j]) {
            
            combinedSeq.InsertItem(firstSeq[i]); 
            i++; 
        }
        else if (secondSeq[j] < firstSeq[i]) { 
            combinedSeq.InsertItem(secondSeq[j]);
            j++; 
        }
        else { 
            combinedSeq.InsertItem(firstSeq[i]); 
            combinedSeq.InsertItem(secondSeq[j]);
            i++;
            j++;
        }
    }

    while (i < m) {

        combinedSeq.InsertItem(firstSeq[i]);
        i++;
    }
    while (j < n) {

        combinedSeq.InsertItem(secondSeq[j]);
        j++;
    }

    int length = combinedSeq.LengthIs();

    for (int k=0; k<length; k++) {

        int item;
        combinedSeq.GetNextItem(item);
        combinedSeqOutput.InsertItem(item);
    }

    for (int k=0; k<length; k++) {

        int item;
        combinedSeqOutput.GetNextItem(item);
        cout << item << " ";
    }
}

int main() {

    int m, n;

    cin >> m;

    int* firstSeq = new int[m];
    for (int i = 0; i < m; i++) {

        cin >> firstSeq[i];
    }

    cin >> n;

    int* secondSeq = new int[n];
    for (int i = 0; i < n; i++) {

        cin >> secondSeq[i];
    }

    combineSequences(m, n, firstSeq, secondSeq);

    delete[] firstSeq;
    delete[] secondSeq;

    return 0;
}
