#include "binary_trees.h"

/**
 * binary_tree_size - measure size
 * @tree: pointer to the node
 * Return: size, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		int left_z = binary_tree_size(tree->left);
		int right_z = binary_tree_size(tree->right);

		return (left_z + right_z + 1);
	}
}
