#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the Balance Factor of a Binary Tree.
 * @tree: Pter to Root Node of the Tree to Measure the Balance Factor.
 * Return: If Tree is NULL, return 0, Else return Balance Factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures Height of a Binary Tree.
 * @tree: Pter to Root Node of the Tree to Measure the Height.
 * Return: If Tree is NULL, Function Must return 0, Else return Height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
