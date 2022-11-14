#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    struct ListNode* answer = NULL;


    return answer;
}

void insertLL(ListNode** ll, int val) {
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));

    new_node->val = val;
    new_node->next = NULL;

    struct ListNode* traverse_node = *ll;

    if (*ll == NULL) {
        *ll = new_node;
    }
    else {
        while (traverse_node->next != NULL) {
            traverse_node = traverse_node->next;
        }
        traverse_node->next = new_node;
    }
}

void printLL(ListNode* ll) {
    while (ll != NULL) {
        cout << ll->val << endl;
        ll = ll->next;
    }
}

int main() {
    ListNode* question1 = NULL;
    ListNode* question2 = NULL;

    int question1Arr[] = { 1,2,4 };
    int question2Arr[] = { 1,3,4 };

    for (int i = 0; i < sizeof(question1Arr) / sizeof(int); i++) {
        insertLL(&question1, question1Arr[i]);
    }

    for (int i = 0; i < sizeof(question2Arr) / sizeof(int); i++) {
        insertLL(&question2, question2Arr[i]);
    }

    printLL(question1);
    cout << endl;
    printLL(question2);
}