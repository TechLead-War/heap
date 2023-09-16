1. Binary Heap is a complete binary tree. All levels are completely filled, except last level that also should be filled from left to right, becuase we want to store binary heap as an array, and it uses less space with this.
2. left_child(i) = 2*i+1 
3. right_child(i)= 2*i+2
4. parent(i) = floor((i-1)/2)
5. It has locality of reference, so it's cache friendly.(array implementation)
6. It's a complete binary tree, so height of binary tree is minimum log(n), all operations will depond of height of this tree.
7. There are 2 types of heaps. 
	a. Min Heap - Every node has value smaller then its descendants.
	b. Max Heap 
8. Mostly heap are used in Priority Queue.


Heapify - is a sub-routine for many operations. Extract min/max, build heap.
	We compare root's left, right to itself(root), if left or right is minimum then we swap with that node, after then we call heapify recursively for that child. If root is smallest, then return.