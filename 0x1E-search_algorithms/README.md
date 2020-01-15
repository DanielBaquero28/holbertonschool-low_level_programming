<h1>Project:Search Algorithms</h1>
<p><strong>In this project we'll learn how to implement search algorithms, how to optimize them and which one to use depending on our needs.</strong></p>
<body>
<li>Task 0: Write a function that searches for a value in an array of integers using the Linear search algorithm</li>
<li>Task 1: Write a function that searches for a value in a sorted array of integers using the Binary search algorithm</li>
<li>Task 2: What is the time complexity (worst case) of a linear search in an array of size n?</li>
<li>Task 3: What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?</li>
<li>Task 4: What is the time complexity (worst case) of a binary search in an array of size n?</li>
<li>Task 5: What is the space complexity (worst case) of a binary search in an array of size n?</li>
<li>Task 6: What is the space complexity of this function / algorithm?
<br>
<code>
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code>
<br>
</li>
<li>Advanced Task 1: Write a function that searches for a value in a sorted array of integers using the Jump search algorithm</li>
</body>
<br>
<br>
<footer>Made by: <strong><a href="https://github.com/DanielBaquero28">Daniel Baquero</a></strong></footer>
</html>
