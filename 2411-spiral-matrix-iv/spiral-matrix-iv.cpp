class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;
        int count = 0; 
        int tne=m*n; 
        // Tracks the number of elements filled.
        ListNode* temp = head;

        // Initialize the matrix with default value -1.
        vector<vector<int>> v(m, vector<int>(n,-1));

        while (count < m * n && temp!=NULL) {
            // Fill the top row
            for (int j = minc; j <= maxc && temp; j++) {
                v[minr][j] = temp->val;
                temp = temp->next;
                count++;
            }
            if(count>=tne) break;
            minr++;

            // Fill the right column
            for (int i = minr; i <= maxr && temp; i++) {
                v[i][maxc] = temp->val;
                temp = temp->next;
                count++;
            }
             if(count>=tne) break;
            maxc--;

            // Fill the bottom row
            for (int j = maxc; j >= minc && temp; j--) {
                v[maxr][j] = temp->val;
                temp = temp->next;
                count++;
            }
             if(count>=tne) break;
            maxr--;

            // Fill the left column
            for (int i = maxr; i >= minr && temp; i--) {
                v[i][minc] = temp->val;
                temp = temp->next;
                count++;
            }
             if(count>=tne) break;
            minc++;
        }

        return v;
    }
};
