//Iterative Method+
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int data){
        val=data;
        next=nullptr;
    } 
};
ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
int main(){
    ListNode*head=new ListNode(10);
    head->next=new ListNode(20);
    head->next->next=new ListNode(30);
    head->next->next->next=new ListNode(40);
    ListNode*temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    ListNode* headR=reverse(head);
    ListNode* tempR=headR;
    while(tempR!=nullptr){
        cout<<tempR->val<<" ";
        tempR=tempR->next;
    }
    return 0;
}


// Recursive Reverse
// ListNode* reverseList(ListNode* head) {
//     if (head == NULL || head->next == NULL)
//         return head;

//     ListNode* newHead = reverseList(head->next);

//     head->next->next = head;
//     head->next = NULL;

//     return newHead;
// }