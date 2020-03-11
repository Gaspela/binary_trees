#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Balance in left and right.
*/
int binary_tree_balance(const binary_tree_t *tree)
{

	int avl_left = 0;
	int avl_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		avl_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		avl_right = 1 + binary_tree_height(tree->right);

	return (avl_left - avl_right);
}
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);

	return (height_right);
}
