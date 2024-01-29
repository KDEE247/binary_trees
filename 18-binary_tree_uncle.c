#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the Uncle of a Node in a Binary Tree.
 * @node: Pter to Node to Find the Uncle.
 * Return: If Node is NULL or has no Uncle, NULL; Else, a Pter to Uncle Node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
