#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Balance in left and right.
 * 
*/
int binary_tree_balance(const binary_tree_t *tree)
{

    int avl_left = 0;
    int avl_right = 0;

    if (!tree)
        return (0);

    if (tree->left)
        avl_left = 1 + binary_tree_balance(tree->left);
    if (tree->right)
        avl_right = 1 + binary_tree_balance(tree->right);

    return (avl_left - avl_right);
}
