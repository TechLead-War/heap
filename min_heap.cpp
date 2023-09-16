template <typename T>
class MinHeap {
private:
	T[] arr;
	int size;
	int capacity;
public:
	MinHeap(int cap) {
		arr = new T[c];
		size = 0;
		capacity = cap;
	}
	int left_child(int i) return i * 2 + 1;
	int right_child(int i) return i * 2 + 2;
	int parent(int i) return (i - 1) / 2;
	T get_min() return arr[0];

	void minHeapify(int i) {
		"""
			In heapify we assume that the rest of nodes
			are forming heap, just the i-th node is not 
			following the heap property. 
			Usage: extract_minimum

			Complexity: O(log(N)) // i.e, H -> height of heap tree 
		"""

		int lt = left_child(i), rt = right_child(i);
		int smallest = i;
		if (lt < capacity and arr[lt] < arr[i]) 
			smallest = lt;
		if (rt < capacity and arr[rt] < arr[i]) 
			smallest = rt;

		if (smallest != i) {
			swap(arr[i], arr[smallest]);
			minHeapify(smallest);
		}
	}

	T extract_min() {
		"""
			Operations:
				0. Check if heap is empty.
				1. Swap with the last item of heap with root
				2. reduce the heap size.
				3. heapify()

			Complexity: O(log(N)) // i.e, H -> height of heap tree 

		"""
		if (size == 0) return T();
		if (size == 1) {
			size--;
			return arr[0];
		}
		swap(arr[0], arr[size - 1]); // swap with last item
		size--; // reduce heap size
		minHeapify(0);
		return arr[size]; // since we swapped and now min will be in the last so we returned it.
	}
}