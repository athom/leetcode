#include <assert.h>
#include "../solutions/remove-nth-node-from-end-of-list.h"
#include "../helper/helper.h"

namespace RemoveNthNodeFromEndOfList{
    struct TestCase {
            ListNode* param1;
            int param2;
            string result;
    };

    vector<TestCase> TCs() {
        vector<TestCase> r;

        TestCase tc1;
        int a1[] = {1, 2, 3, 4, 5, 6, 7};
        tc1.param1 = seed_list(a1, 7);
        tc1.param2 = 2;
        tc1.result = "1 2 3 4 5 7 NULL";
        r.push_back(tc1);

        TestCase tc2;
        tc2.param1 = seed_list(a1, 7);
        tc2.param2 = 1;
        tc2.result = "1 2 3 4 5 6 NULL";
        r.push_back(tc2);

        return r;
    }

    void run() {
        Solution s;
        vector<TestCase> tcs = TCs();
        for (int i = 0; i < tcs.size(); ++i) {
            TestCase tc = tcs[i];
            ListNode* h = s.removeNthFromEnd(tc.param1, tc.param2);
            cout << tc.result;
            cout<< endl;
            cout << to_str(h);
            assert(to_str(h) == tc.result);
        }
    }
}
