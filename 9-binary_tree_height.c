#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a tree
 * @tree: pointer to the root of the node
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	else
	{
		size_t left_h = binary_tree_height(tree->left);
		size_t right_h = binary_tree_height(tree->right);
		
		if (left_h < right_h)
			return (left_h + 1);
		else
			return (right_h + 1);
	}
}
