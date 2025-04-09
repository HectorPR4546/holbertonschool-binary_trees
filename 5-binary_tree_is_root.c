#include "binary_trees.h"

/**
 * binary_tree_is_root - find if a node is a root
 * @node: pointer to check
 * Return: 1 if a node or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL)
		return (0);

	if (node->right == NULL)
		return (0);
	return (1);
}
