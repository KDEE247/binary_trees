#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses Binary Tree via Post-order Traversal.
 * @tree: Pter to Root Node of Tree to Traverse.
 * @func: Pter to a Function to Call for Each Node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
