#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: uncle pointer or if not uncle NULL istead
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *unc;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	unc = node->parent->parent;

	if (unc->left == NULL)
		return (NULL);

	if (unc->right == NULL)
		return (NULL);

	if (unc->left->n == node->parent->n)
		unc = unc->right;

	else
		unc = unc->left;

	return (unc);
}
