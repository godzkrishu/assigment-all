#include <iostream>
#include <vector> //for vector
using namespace std;

int main()
{
    // vector  for float elements
    vector<float> v1;

    // adding 5 elements
    v1.push_back(10.20);
    v1.push_back(89.30);
    v1.push_back(12.11);
    v1.push_back(33.33);
    v1.push_back(22.19);

    // print all elements
    cout << "vector elements are: ";
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << ' ';
    }
    cout << endl;

    return 0;
}
