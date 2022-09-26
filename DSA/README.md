## Searching
 - Linear Search
     - Linear search is one of the simplest algorithms of data structure.
     - The element to be searched is compared with every element of the list one by one
     - Until the element that is to be searched is found.
     - If the element is not found till the end this means that the element is not present in the list. 
     - `T.C: O(n)`
 - Binary Search
     -  Binary search is another searching algorithm in programming. 
     - It is also known as half interval search algorithm. 
     - It is an efficient and fast searching algorithm.
     - The only condition required is that the elements in the list must be in sorted order.
     - It works by repeatedly dividing in half the portion of the list that could contain the item, until we've narrowed down the possible locations to just one.
     - `T.C: O(logn)`

     - Working of Binary Search
        - It wors when the list in sorted order
        - We compue the mid
        - We check if the element is in then then we return that mid element
        - Else if the target is greater than mid, we move to the right half of the array
        - And if the target is smallet than mid, we move to the left half of the array
        - We keep following these steps until our element is found.

## Sorting
**Stable vs Unstable Sort**
 - Stable sort sorts the identical elements in their same order as they appear in the input.
 - Examples: Bubble sort, Insertion sort, Merge Sort, Counting sort

 - In Unstable sort, order of identical elements is not guranteed to stay in the same order as they appeared in the input. Examples: Quick Sort, Heap Sort, Selection sort
- Genrally, unstable sort is faster than stable sorting

**Interval vs External Sort**
 - Internal sorting is that which takes place entirely within the main memory of computer. It comes into role when the dataset is small.
- External sorting is that which can handle massive amount of data at a time. Data reside in hard disk in case of external sorting.

**In-Place and Not-In-Place Sorting**
 - In-Place Sorting means to sort the array by modifying the element order directly within the array.
 - No auxiliary data structure is used. 
 - There can be only constant amount of extra space usually less than log(n). So this algorithm is space efficient.
 - Examples: Bubble Sort, Selection Sort, Insertion Sort, Heap Sort

**Not-In-Place Sorting**
 - Not-In-Place Sorting is that which uses auxiliary data structure to sort the array.
 - Examples: Merge Sort ( It requires additional O(n) space to perform the merge operation), Quick Sort

## Bubble Sort
 - Simplest sorting algorithm
 - Each element is being compared with its adjacent elements in this sorting method and last we have a logical order of the elements present in the array. 
 - In the process of arranging these given elements in a logical order, these steps are followed.
    - We linearly traverse the array from left
    - If the first array is greater than the second item in the array, we swap them
    - Now, we compare the next two elemets
    - We will repeat all the previous steps until the given array is sorted

 - Advantages:
    - Requires less memory than other sorting algorithms
    - Easy to code
 - Disadvantages:
    - It's slow, and with larger number, bubble sort is not preffered to use
    - The algorithm will be slowest when the array is sorted by in reverse
 - Time Complexity:
    -  Worst: O(n^2)
    - Average: O(n^2)
    - Best: O(n)
 - Space Complexity: O(1)

## Selection Sort
 - This sorting algorithm iterates through the array and finds the smallest element in the array
 - and swaps it with the first element.
 - This process is repeated until the array is sorted.
 - Steps:
    - From the given array find the smallest element by traversing the array
    - Swap the first element in the array with the smallest element from the array
    - Now, exclude the first element and select the smallext element from the remaining elemnts of the array
    - We repeat these steps till the array is sorted

 - Advantages:
    - It gives the same time complexity regardless of arrangements of items in the array
    - Since number of operations(swapping, size – 1) are less, so its favorable to use when swapping operations are costly in system
 - Disadvantages:
    - The time complexity is quite high, i.e., O(n^2) thus not good.
 - Time Complexity:
    - Worst, Average, Best: O(n^2)
 - Space Complexity: O(1)

## Insertion Sort
 - Insertion sort follows the same technique as we sort our cards in while we play game of cards
 - If there are n elements and it requires (n-1) pass to sort them then, at each pass we insert current element in the appropriate position so that the element are in order.
 - At any given time, one part of the array will be sorted and the other part will be unsorted
 - We pick the leftmost item from the unsorted part
 - And insert that item at its correct position in the sorted array
 - A sub-list is maintained which is always in sorted order.
 - It is better then Selection Sort and Bubble Sort algorithms.
 - It is efficient for smaller data sets but inefficient for larger data sets.
 - It does not change the relative order of elements which are equal.

 - Advantages:
    - Easy to understand and code
    - For a smaller number of items in an array it's much faster than merge sort
 - Disadvantages:
    - If there are large elements then it gives bad performance because of its time complexity
    - Shifting items because of insertion can be costly

 - Time Complexity:
    - Worst: O(n^2)
    - Average: O(n^2)
    - Best: O(n)
 - Space Complexity: O(1)

## Quick Sort
 - Quick Sort follows the divide and conquer method
 - The Main process of Quicksort is Partition. 
 - Once we decide on our pivot, we will put all values smaller than or equal to pivot in the left half and all the values greater than pivot in the right half of the pivot.
 - This means the pivot will be at its final sorted position after this process ends. Now we will recursively call to the left and right of the pivot so that the rest of the array also gets sorted. 
 - The main intention of this process is to place the pivot at its final position
 - It is an in-place sorting algorithm.
 - The algorithm is efficient for arrays with more elements in it.
 
 - Approach:
    - We will be using 2 pointers namely left, right. Initializing left at index 0 and right at index n-1
    - We will swap arr[left] and arr[right] if arr[left] > pivot  and arr[right] < pivot  and will increment left and decrement right . This goes on until left < right.
    - Finally when left > right, we will stop swapping arr[left] and arr[right] and swap pivot with arr[right] so that pivot gets its final position.
    - We will now recursively repeat this process in the left and right of the pivot so that we get our final sorted array.

 - Time Complexity:
    - Worst: O(n^2)
    - Average: O(nlogn)
    - Best: O(nlogn)
 - Space Complexity: O(logn)

## Merge Sort
 - Merge Sort follows the divide and conquery method.
 - Merge sort repeatedly breaks down a array into several sub arrays 
 - Until each sub array consists of a single element 
 - and merging those sub array in a manner that results into a sorted array.
 - It is a stable sorting algorithm which means that the same element in an array maintain their original positions with respect to each other.
 - Merge Sort is useful for sorting Linked Lists.

- Time Complexity:
   - Worst, Average, Best: O(nlogn)
- Space Complexity: O(n)

## Stack
 - Stack is one of the basic linear Data structure, that we use for storing our data. 
 - Data in a stack is stored in a serialized manner. 
 - One important thing about using a Stack is that the data first entered in the stack will be at the last of the stack. 
 - This is one of the reason why we also called Stack a FILO Data Structure, 

## Linked List
 - A Linked List is a chain of nodes that are connected to one another using pointers.
 - Each node in a linked list has two things: Data and Pointer to the next node

 - Types of Linked Lists
    - Singly Linked Lists
    - Doubly Linked Lists
    - Circular Linked Lists

### Singly Linked List
- A Singly linked List a Sequence of nodes connected to one another using pointers.
- It contains data and pointer to the next node

Advantages:
- **Performing operations on a list becomes easy:** Singly linked list give us the flexibility to perform various operations such as insertion, deletion in an efficient manner as compared to arrays.

- **Efficient memory allocation:** We need not tho allocate memory in advance to the singly linked list, dynamic memory is allocated in singly linked list hence it saves extra memory .

Disdvantages:
- Members could be assigned anywhere in the memory.
- Each member shall include an address size member, hence it utilizes poor memory.
- Some operations like reversing a list is complicated when compared with arrays.

### Doubly Linked Lists
- Doubly linked lists have the following:
   - Data: Like Singly-linked lists, it also contains data that is stored.
   - Pointer (next) – Contains the address of the next node in the doubly linked list
   - Pointer (previous) – Contains the address of the previous node in the doubly linked list

Advantages:
- It is better as unlike singly linked list, in a doubly-linked list we can traverse in both directions. 
- Thus, if in case any pointer is lost we can still traverse.
- In Doubly Linked List we can traverse from Head to Tail as well as Tail to Head.
- Delete operation is quicker if the pointer to the node to be deleted is given to us already.
- Insertion is quicker in doubly-linked lists.

Disadvantages:
- Extra space is required for the previous pointer for doubly-linked lists(DLL)
- All operations require an additional modification of the previous pointer as well along with next pointer.



## Trees
- A tree is a hierarchical data structure, which has one root node and multiple child nodes(branches). 
- Unlike, Arrays, Linked Lists, Stacks or queues, a Tree is non linear data structure.

### Why Trees
- One reason could be that we want to store information that follows, natural hierarchy, like how we store folders in a computer system.
- Trees, unlike arrays, stacks, queues do not have an upper limit on how many nodes can be created, as they are created using pointers
- Trees (BST) are able to do searching quicker than arrays, linked lists etc
- Trees provide moderate insertion/deletion (Slower than Linked lists, quicker than arrays)

### Components of Trees:
- Root:
   - The topmost node of a tree is known as the root.
   - There exists only one root node per tree.

- Parent:
   - Any node which has an edge directed downwards to the child node is known as parent node.
   - Each parent can have one or more child node.

- Child Nodes:
   - Any node which has an edge directed upwards to the parent node is known as child node.
   - Each child node has a single parent node.

- Siblings:
   - A set of nodes that are extended from the same parent are known as the siblings.
   
- Leaves:
   - Any node that does not have any child node is known as the leaf node.

- Branch:
   - Any node which has at least one child node is known as branch node.

- Subtree:
   - A sub tree of a tree is defined as a tree that consist of a node along with all it’s descendants.

- Ancestor:
   - Any predecessor of a node along with all the ancestors of the predecessor of that node is known is as the ancestor.
   - The root node has no ancestors.

- Descendants:
   - All the children of a node along with all the descendants of the children of a node is known as descendant.
   -  A leaf node has no descendants.

- Null Nodes:
   - If in a binary tree, a node has only one child it is said to have a single null link.
   - Similarly if a node has no child node it is said to have two null links.

### Terminologies:
- Degree:
   - The degree of a node can be defined as it’s number of sub trees.
   - A node with zero degree is a leaf node.  
   - A node with maximum degree is the root node in the tree.

- Edges:
   - An edge can be defined as a connection or a link from one node to another node.

- Path:
   - A course of nodes and edges for operations such as traversal,etc is known as a path.

- Depth:
   - The number of edges that lie in between the path from a node to the root in a tree is defined as the depth of the tree. 

- Level:
   - Level of a node is symbolic of the generation of a given node. It is one greater than the level of it’s parent.

**NOTE: **
- Depth of the tree starts from 0 and level starts from 1
- Formula max number of nodes at any given level for tree:
   - 2^L (if level start from 0)
   - 2^L-1 (if level starts from 1)

- Formula max number of nodes in the whole tree:
   - 2^L+1  - 1 (if level start from 0)
   - 2^L  - 1 (if level starts from 1)

- Height:
   - Height of a node can be defined as the longest path downwards between the root node and a leaf.
   - Height of a tree starts from 0

Height of tree is h then Max nodes a Full Binary Tree will have
   - (2h+1 – 1)nodes  (if h starts from 0)
   - (2h – 1)nodes  (if h starts from 1)

Minimum number of nodes in a Binary Tree of height h would be
   - (h + 1) (if h starts from 0)
   - h (if h starts from 1)

## Types of Trees
- **Tree (n-ary):**
   - This type of set is a superset of any type of tree
   - A tree with at least one node(root/parent)
   - Any node can have any number of child nodes thus any degree
   - The node with highest number of child nodes defines the order(degree) of the tree

### Types of Binary Trees
 - **Full Binary Tree:**
    - A binary tree is said to be a Full binary tree if all nodes except the leaf nodes have either 0 or 2 children. 
    - Therefore, the degree of such tree can either be 0 or 2.
    - A full binary tree with N leaves contains 2N - 1 nodes
    - In a full binary tree no of leaf nodes is the number of internal nodes plus 1, L = l + 1

- **Complete Binary Tree:** 
    - A binary tree is said to be a Complete binary tree if all the levels are completely filled except possibly the last level; and the last level has all the keys towards left.

- **Perfect Binary Tree:**
    - A binary tree is said to be a Perfect binary tree if all the internal nodes have exactly 2 children, all leaf nodes are at the same level.
    - A perfect binary tree has:
       - (2^h  - 1) nodes (if h starts from 0)
       - (2^h  - 1) nodes (if h starts from 1)

- **Balanced Binary Tree:**
    - A binary tree is said to be a Balanced binary tree if, for each node it holds that the number of inner nodes in the left sub tree and the number of inner nodes in the right sub tree differ by at most 1

## Binary Search Tree
 - A binary search tree is nothing but an advanced version of binary tree.
 - All properties of binary tree exist
 - Left child value should be less than or equal to any parent node's value
 - Right child value should be larger than or equal to parents node's value

## AVL Tree
 - AVL tree is a binary search tree self-balancing. 
 - We allocate a balancing factor for each node in the AVL tree, by checking if the tree is balanced or not
 - In the AVL tree, the correct balance factor is 1, 0 and -1.
 - When we want to enter a new node, then we will rotate the tree to make sure that the tree is always balanced. 
 - View, Insert and remove happen at O(log n)
 - Generally, we apply it when we are going operations like lookup, example searching in your phone’s contacts directory

## Red Black Tree
 - This another example of a tree that is auto-balancing
 - The name is given because either a node will be painted red or black, acc to red-black properties
 - Even though this tree is not a fully balanced tree, the searching operation only takes O(logn) time.
 - When adding a new node, we should always rotate the tree to make sure that the tree's properties are always maintained.

### Applications of Tree
 - It provides a simple and systematic method to store and represent the data in a hierarchical form.
 - It stores the data/values in a way that provides ease of search and traversal.
 - It executes the insertion/deletion operation within a moderate range of time.
 - A certain category of trees(,i.e, B- Tree,etc.) can be used for indexing purposes in database.
 - It is used for the representation of ordered lists of data/information.  


## Graph
- Graphs are data structures that have a wide-ranging application in real life. 
- These include analysis of electrical circuits, finding the shortest routes between two places, building navigation systems like Google Maps, even social media using graphs to store data about each user, etc. 

- A graph is a non-linear data structure consisting of nodes that have data and are connected to other nodes through edges.

## Types of Graphs
- Undirected Graph: is a graph where edges are bidirectional, with no direction associated with them, i.e, there will be an undirected edge. 

- Directed Graph:
is a graph where all the edges are directed from one vertex to another, i.e, there will be a directed edge. 

If there is at least one cycle present in the graph then it is called an Undirected Cyclic Graph.

The first directed graph is not cyclic as we can’t start from a node and end at the same node. Hence it is called Directed Acyclic Graph, commonly called DAG.

If we just add an edge to the directed graph, then at least one cycle is present in the graph, hence it becomes Directed Cyclic Graph.

## Degree of Graph
It is the number of edges that go inside or outside that node.

For undirected graphs, the degree is the number of edges attached to a node.

Total degree of a Graph: 2 x E
This is because every edge is associated/ connected to two nodes.

For directed graphs, we’ve Indegree and Outdegree. The indegree of a node is the number of incoming edges. The outdegree of a node is the number of outgoing edges.

Edge Weight
A graph may have weights assigned on its edges. It is often referred to as the cost of the edge.

If weights are not assigned then we assume the unit weight, i.e, 1. In applications, weight may be a measure of the cost of a route. For example, if vertices A and B represent towns in a road network, then weight on edge AB may represent the cost of moving from A to B, or vice versa.


## Graph Representations
- Adjacency Matrix
- Adjacency List