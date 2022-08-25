#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	binary_tree_t *root;
	int size;

	root = binary_tree_node(NULL, 98);

	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	root->left->left = binary_tree_node(root->left, 10);
	root->right->left = binary_tree_node(root->right, 10);
	
	binary_tree_print(root);
	size = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", size);

	root->right->right->left = binary_tree_node(root->right->right, 10);
	binary_tree_print(root);
	size = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", size);

	root->right->right->right = binary_tree_node(root->right->right, 10);
	binary_tree_print(root);
	size = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", size);
	return (0);
}
