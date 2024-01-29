#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes Binary Tree.
 * @tree: Pter to the Root Node of the Tree to Delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
