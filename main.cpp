#include <iostream>
#include "list.hpp"

using namespace std; 

int main()
{
    List A;
    A.push_front(2);
    A.push_front(3);
    A.push_front(4);
    A.push_front(5);
    A.push_back(9);

    for(int i = 0; i < A.size();i++)
        cout << A[i] << endl;

    return 0; 
}