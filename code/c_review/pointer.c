#include <vss.h>
// 光速学习 C 语言之结构体及指针实战 LeetCode.572
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode *s, struct TreeNode *t);

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
    if (t == NULL) return true;
    if (s == NULL && t != NULL) return false;
    return isSameTree(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
}

bool isSameTree(struct TreeNode *s, struct TreeNode *t) {
    if (s == NULL && t == NULL) return true;
    if (s == NULL || t == NULL) return false;
    return s->val == t->val && isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
}