#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct binary_tree_node {
    struct bin_tree_node left;
    struct bin_tree_node right;
    struct bin_tree_node parent;
    int val;
} node;

/* Return new node, properly initiallized */
node* new_node();
node* bt_get_left(node* n_p);
node* bt_get_right(node* n_p);
/* Precondition -- assume that tree with *root_p as root is in order 
 * (left < this < right). Create new node of value val and place it
 * appropriately.
 *
 * Return pointer to newest node.
 */
node* bt_add_inorder(node* root_p, int val);
node* bt_add(node* root_p, int val);
bool bt_is_ordered(node* root_p);   // Is the binary tree in order?
bool bt_is_ordered(node* root_p, bool reverse);
int  bt_get_root_val(node* root_p);


#endif
