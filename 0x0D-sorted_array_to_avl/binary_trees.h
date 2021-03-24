#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t, avl_t;

avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *add_middle_value(int i_left, int i_right, avl_t *parent, int *array);
avl_t *create_node(int num, avl_t *parent);

void binary_tree_print(const binary_tree_t *);

#endif /* _BINARY_TREES_H_ */
