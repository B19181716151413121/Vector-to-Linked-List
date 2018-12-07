//
//  main.cpp
//  Vector to Linked List
//
//  Created by Brian Cobo on 12/6/18.
//  Copyright © 2018 Brian Cobo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class t>
list <t> copyList (vector <vector <t>> vec)
{
    list <t> *ll;//Create list of type t
    ll = new list <t> [vec.size()]; // Create list inside of lists of type t
    
    cout << "VECTOR" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            ll[i].push_back(vec[i][j]);//Push values from vector onto linked list
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "LINKED LIST" << endl;
    for (int j = 0; j < vec.size(); j++)//Loop through the number of lists
    {
        for (int i:ll[j])//Print contents of inner linked Lists
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return *ll;//Return list
}

int main()
{
    vector <vector <int> > vec = { {1}, {1,2}, {1,2,3} };
    list <int> ll = copyList(vec);
    
    return 0;
}
