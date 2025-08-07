#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    while(getchar() != '\n');

    // sort the vector
    string line_input;
    getline(cin, line_input);

    istringstream iss(line_input);
    vector<int> arr;
    int num;

    while (iss >> num) {
        arr.push_back(num);
    }

    int no_of_participants = 0;

    /*
    while score is still positive and score is equal or better than kth pos
        if curr score less than prev score:
            no_of_participants go up
    */

    int i = 0;

    while(arr[i] > 0 && arr[i] >= arr[K-1] && i<N){
        no_of_participants++;
        i++;
    }

    cout<<no_of_participants;
}
    