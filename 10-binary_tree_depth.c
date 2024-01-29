#include "binary_trees.h"
/**
 * binary_tree_depth - Measures Depth of a Node in a Binary Tree.
 * @tree: Pter to the node to Measure the Depth.
 * Return: If tree is NULL, Function Must return 0, Else return the Depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
