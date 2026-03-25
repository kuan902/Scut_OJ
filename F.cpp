#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createList(const vector<int>& nums) {
    ListNode dummy;
    ListNode* cur = &dummy;
    for (int num : nums) {
        cur->next = new ListNode(num);
        cur = cur->next;
    }
    return dummy.next;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* cur = &dummy;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        cur->next = new ListNode(sum % 10);
        cur = cur->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums1, nums2;
    int num;
        while (cin.peek() != '\n' && cin >> num) {
        nums1.push_back(num);
    }
    cin.ignore(); 
    while (cin >> num) {
        nums2.push_back(num);
    }

    ListNode* l1 = createList(nums1);
    ListNode* l2 = createList(nums2);
    ListNode* res = addTwoNumbers(l1, l2);
    printList(res);

    return 0;
}