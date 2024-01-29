#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts Node as left-child of other binary tree
 * @parent: A Pter to Nodes to Insert the left-child in.
 * @value: The Value to store in a New Node.
 * Return: If Parent is NULL or an error occurs: NULL; else: pter to New node
 * Description: If Parent has a left-child, a New Node Assumes Position, the
 * old left-child is set as the left-child of the New Node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
