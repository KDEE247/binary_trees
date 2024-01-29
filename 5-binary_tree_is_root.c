#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks If a Node is a Root of a Binary Tree.
 * @node: Pter to the Node to Check.
 * Return: If the Node is a Root: 1; Else: 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
