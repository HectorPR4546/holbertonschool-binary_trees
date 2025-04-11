#include "binary_trees.h"

/**
 * binary_tree_postorder - goes using post-order traversal
 * @tree: pointer to the root node
 * @func: pointer to call each node
 * Return Nodes and if tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
