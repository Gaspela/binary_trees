#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: full tree or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_full += binary_tree_is_full(tree->left);

	if (tree->right)
		right_full += binary_tree_is_full(tree->right);

	if ((left_full + right_full) % 2 == 0)
		return (1);

	return (0);
}
