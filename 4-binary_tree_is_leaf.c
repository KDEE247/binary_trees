#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks If a Node is a Leaf of a Binary Tree.
 * @node: Pter to the Node to Check.
 * Return: If the Node is a leaf : 1; Else : 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
