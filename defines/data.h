#ifndef __DATA_H__
#define __DATA_H__
#include<stdlib.h>
#include <vector>

using namespace std;
/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

#endif
