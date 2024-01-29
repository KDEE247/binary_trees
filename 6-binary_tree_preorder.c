#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes Thru Binary Tree Using Pre-order Traversal.
 * @tree: Pter to Root Node of the Tree to Traverse.
 * @func: Pter to a Function to Call for Each Node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
