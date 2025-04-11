#include "binary_trees.h"

/**
 * binary_tree_inorder - go in-order traversal
 * @tree: pointer to the root of the node to traverse
 * @func: pointer to call each node
 * Return: node or do nothing if tree & func are NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
