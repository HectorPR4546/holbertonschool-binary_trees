#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a tree
 * @tree: pointer to the root of the node
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left_h = binary_tree_height(tree->left) + 1;

	if (tree->right)
	right_h = binary_tree_height(tree->right) + 1;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the node
 * Return: Nodes balance or if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
}
