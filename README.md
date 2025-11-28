# SearchSortLab
Part I. Pre-Lab Questions
Answer briefly:
What is the importance of searching in data structures?
Searching can help us find the specific data quickly, because it can save time and make our program efficient, especially when dealing with a large amount of data.


Why is sorting necessary before performing a binary search?
The binary search only works if the data is sorted because it divides the list in half each time and decides which half to search next based on order. 
Differentiate between linear search and binary search?
The linear search checks every item one by one  until it finds the target, so it is simple but slow for the big data. The binary search is faster because it splits the data and only looks in the half where the target could be, but it needs sorted data.
What is meant by “Divide and Conquer” in algorithms?
The divide and conquer, breaking a big problem into smaller parts, solving each part separately, and then combining the result, they make complex problems easier and faster to solve.


When is interpolation search more efficient than binary search?
Interpolation search works better when the data is sorted and uniformly distributed because it guesses where the target might be based on its value, so it can jump closer to the target faster than binary search.

Part II. Laboratory Exercises
Guide Questions:
Which algorithm executed faster?
Based on the program that I execute, the binary search will execute faster than the linear search especially with larger datasets. But the interpolation search are more faster than the binary search if the data is uniformly distributed.
What happens if the array is not sorted in Binary or Interpolation Search?
If the array is not sorted the binary search will not work at all because it assumes that the elements are in a specific order to function correctly in interpolation search also requires the array to be sorted because won’t be able  where to look for  the target element, leading to incorrect results to find the element.
In what type of dataset would Interpolation Search perform best?
The interpolation searches are performed best on data sets that are uniformly distributed. When the data is uniformly distributed, interpolation search can make better guesses about where to find the target element, which can lead to faster search times compared to binary search.

Activity 2 – Implementing Sorting Algorithms
Guide Questions:
Which algorithm was easiest to implement?
For me Bubble sort because this type of algorithm is often considered the easiest to implement because it uses a simple approach of repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order.
Which algorithm was the fastest?
Insertion sort can be faster than bubble sort and selection sort it builds the sorted array one element at a time and is efficient for small  data sets. For the larger datasets it may not be faster compared to more advanced algorithms like quick sort or merge sort.
What is the time complexity of each sorting method?
Bubble sort O(n) when the array is already sorted. The average case O(n²)
Insertion sort O(n) when the array is already sorted. The average case O(n²) worst caseO(n²)
Selection sort  O(n²) average case O(n²) Worst case O(n²)

Activity 3 – Performance Comparison
 Part III. Post-Lab Assessment
Why is sorting a prerequisite for efficient searching?
Sorting is essential for efficient searching because many search algorithms, like binary search, rely on the data being organized in a specific order. When data is sorted, these algorithms can quickly eliminate half of the search space with each step, making the search process much faster compared to searching through an unsorted list, which may require checking each element one by one.
Which sorting algorithm uses a pivot?
The sorting algorithm that uses a pivot is Quick Sort. In Quick Sort, a pivot element is chosen from the array, and the other elements are rearranged so that those less than the pivot come before it and those greater come after it.
How does Shell Sort improve Insertion Sort?
Shell Sort improves Insertion Sort by allowing the algorithm to compare and swap elements that are far apart, rather than just adjacent elements.This reduces the number of comparisons and shifts needed when the gap is eventually reduced to 1, making it faster than traditional Insertion Sort for larger datasets.
Give one real-world example where sorting and searching are used together.
A real-world example where sorting and searching are used together is in library databases. When a user searches for a book by title or author, the database first sorts the books alphabetically or by publication date. Then, it uses a search algorithm to quickly locate the requested book within the sorted list, making it efficient for users to find what they need.
What did you learn from comparing these algorithms?
I learned that each sorting and searching algorithm has its unique strengths and weaknesses. Some algorithms are better suited for small datasets, while others excel with larger or sorted datasets. Understanding the time complexity and the specific use cases for each algorithm helps in making informed decisions when tackling problems in programming and computer science. It also emphasizes the importance of choosing the right algorithm based on the context, which can significantly impact performance.
