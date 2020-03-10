#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: pointer to check leaf.
 * Return: True is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
    {
        return (0);
    }
    if (node->right)
    {
        return (0);
    }
    if (node->left)
    {
        return (0);
    }
    return (1);
}
