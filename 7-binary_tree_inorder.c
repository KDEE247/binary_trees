#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes Thru Binary Tree via in-order Traversal.
 * @tree: Pter to Root Node of the Tree to Traverse.
 * @func: Pter to a Function to Call for Each Node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
