//
//  main.cpp
//  Vector to Linked List
//
//  Created by Brian Cobo on 12/6/18.
//  Copyright © 2018 Brian Cobo. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class NumberList
{
private:
    struct ListNode
    {
        double value;
        struct ListNode *next;
    };
    
    ListNode *head;
    
public:
    NumberList()
    { head = nullptr; }
    
    ~NumberList();
    
    void appendNode(double num)
    {
        ListNode *newNode;
        ListNode *nodePtr;
        
        newNode = new ListNode;
        newNode->value = num;
        newNode->next = nullptr;
        
        if (!head)
            head = newNode;
        else
        {
            nodePtr = head;
            
            while (nodePtr->next)
                nodePtr = nodePtr->next;
            
            nodePtr->next = newNode;
        }
    }
    
    void displayList() const
    {
        ListNode *nodePtr;
        
        nodePtr = head;
        
        while (nodePtr)
        {
            cout << nodePtr->value << endl;
            nodePtr = nodePtr->next;
        }
    }
};

int main()
{
    vector <vector <int> > vec = { {1}, {1,2}, {1,2,3} };
    
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
