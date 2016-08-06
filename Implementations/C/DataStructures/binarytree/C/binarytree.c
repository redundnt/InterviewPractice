#include "binarytree.h"


node* new_node(){
    node* result_p = malloc(sizeof(node));
    result_p->left   = NULL;
    result_p->right  = NULL;
    result_p->parent = NULL;
    result_p->val    = 0;
    return result_p;
}

node* node_get_left(node* n_p){
    if (n_p == NULL) return NULL;
    return n_p->left;
}

node* node_get_right(node* n_p){
    if (n_p == NULL) return NULL;
    return n_p->right;
}

int bt_add_left_child(node* n_p, node* c_p){
    if (n_p == NULL) return -1;
    if (n_p ->left == NULL) return 1;
    if (c_p == NULL) return -1;
    n_p->left = c_p;
    c_p->parent = n_p;
    return 0;       //Success
}

int bt_add_right_child(node* n_p, node* c_p){
    if (n_p == NULL) return -1;
    if (n_p ->right == NULL) return 1;
    if (c_p == NULL) return -1;
    n_p->right = c_p;
    c_p->parent = n_p;
    return 0;       //Success
}

node* node_add_inorder(node* root_p, int val){
    node* n_p = new_node();
    n_p->val = val;
    node* curr_p = root_p;

    if (curr_p == NULL) 
        return n_p;

    while (curr_p != NULL){
        if (val > curr_p->val) {
            if (curr_p->right == NULL){
                if (bt_add_right_child(curr_p, n_p))
                    return NULL;
                return n_p;
            }
            curr_p = curr_p->right;
        }
        else if (val < curr_p->val){
            if (curr_p->left == NULL){
                if (bt_add_left_child(curr_p, n_p))
                    return NULL;
                return n_p;
            }
            curr_p = curr_p->left;
        }
        else{ // Same Values
            
        }
    }
}
