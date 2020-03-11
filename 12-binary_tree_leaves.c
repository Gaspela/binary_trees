#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: number leaves or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counts_leaves = 0;

	if (!tree)
		return (0);

	counts_leaves += binary_tree_leaves(tree->left);
	counts_leaves += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		counts_leaves++;

	return (counts_leaves);
}
