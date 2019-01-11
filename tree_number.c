//
//
//  Ağaçtaki eleman sayısı
//
//

#include <stdio.h>
#include <stdlib.h>

struct tree {
    int info;
    struct tree *left;
    struct tree *right;
};
typedef struct tree *TREEPTR;

void tree_number(TREEPTR root, int &number) {
    if(root !== NULL) {
        tree_number(root->left);
        tree_number(root->right);
        number ++;
    }
}