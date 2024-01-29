#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert Node as right-child of other in binarytree
 * @parent: Pter to the Node to Insert the right-child in.
 * @value: The Value to Assign in the New Node
 * Return: If Parent is NULL or error occurs: NULL; Else: a Pter to a new node
 * Description: If Parent already has a right-child, the new node takes its
 * place and the old right-child is set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
