#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts Nodes with at Least 1 Child in a Binary Tree.
 * @tree: Pter to Root Node of the Tree to Count Number of Nodes.
 * Return: If Tree is NULL, the Function Must return 0, Else return Node Count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
