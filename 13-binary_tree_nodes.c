#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: number child for node or 0;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count_node_childs = 0;

    if (!tree)
        return (0);

    if (tree->left || tree->right)
        count_node_childs++;

    count_node_childs += binary_tree_nodes(tree->left);
    count_node_childs += binary_tree_nodes(tree->right);

    return (count_node_childs);

}
