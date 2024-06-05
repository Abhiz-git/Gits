<h2> Explanation of Optimized Bubble Sort code in C lang.</h>
<p>&emsp; Please take a look at the images, I have tried to traverse or Dry Run the code using pen paper with the example you have provided.<br>
<li>On the first page, using a traditional method of Bubble Sort, the total <b>Comparisons</b> required to sort the array and end the code was <b>6<b>, and the total <b>passes<b> required was n-1 i.e. <b>3</b>.</li>
So, here the time complexity will be 6 for a "for nested loop" and passes were 3 so <b>the total time Complexity is 6+3+1 swap = 10</b><br><br>

<li>On the Second page, using the Optimized Method, the total <b>Comparisons</b> required to sort the array and end the code was <b>5</b>, and the total <b>passes</b> required was <b>2</b>.</li><br>
So, here the time complexity will be 5 for a "for nested loop", and passes were 2 so <b>the total time Complexity is 5+2+1swap=8.</b><br><br>

      &emsp;In your example [3,2,4,5], there were 4 elements in the array, if the size of the array increases and only one element in the array is not in the order that is [3,2,4,5,6,7] here n=6 and passes = n-1 i.e 5<br><br> 

The traditional method will take <b>5 passes and 15 comparisons</b> to sort the array and end the function.<br>

<br>&emsp;As shown in the pdf with the optimized logic in the 2nd pass array sorted is detected by traversing the 2nd pass, though elements are increased it will take <b>only 2 passes and 9 comparisons</b> to sort the array and end the function.<br>

      <br>&emsp;Thus, the conclusion is, in my Optimized code, the early exit mechanism primarily improves performance for sorted arrays and nearly sorted arrays but, it doesn't change the worse-case complexity (array in reverse order) due to the nature of the algorithm.<br>

      <br>&emsp;The best time complexity is o(n)
<b><i>Explanation: nested for loop -> n-1, pass -> 1 = n-1+1 = n.</i></b></p>