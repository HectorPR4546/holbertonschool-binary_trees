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

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_h = binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		right_h = binary_tree_height(tree->right) + 1;
	}

	return (left_h > right_h ? left_h : right_h);
}
