#include "binary_trees.h"

/**
 * binary_tree_leaves - cpunt the leaves
 * @tree: pointer to the root node
 * Return: if tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		int left_l = binary_tree_leaves(tree->left);
		int right_l = binary_tree_leaves(tree->right);

		if (left_l == 0)
		{
			return (1);
		}

		if (right_l == 0)
		{
			return (1);
		}

		return (left_l + right_l);
	}
}

