#include "binary_trees.h"
/**
 * binary_tree_size - Measures the Size of a Binary Tree.
 * @tree: Pter to Root Node of the Tree to be Measured.
 * Return: The Size of the Tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
