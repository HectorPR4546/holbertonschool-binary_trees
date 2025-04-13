#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling
 * @node: pointer to the node
 * Return: sibling or NULL if node is not a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	sibling = node->parent;

	if (sibling->left == NULL)
		return (NULL);

	if (sibling->right == NULL)
		return (NULL);

	if (sibling->left->n == node->n)
		sibling = sibling->right;

	else
		sibling = sibling->left;

	return (sibling);
}

