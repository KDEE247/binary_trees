#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the Leaves in a Binary Tree.
 * @tree: Pter to Root Node of the Tree to Count Leaves.
 * Return: The Number of Leaves in the Tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
