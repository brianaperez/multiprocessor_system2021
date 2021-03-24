# MultiProcessor System Question
#### Question Level : Intern
#### Year : 2020 / 2021

# Problem

A processor is able to perform a certain number of tasks per hour.

Find the minimum number of hours required to schedule all the tasks, given that after each hour, the capacity of the processor that was last scheduled cuts in half.

For example, if a processor of capacity 5 is able to perform 5 tasks in the first hour, and in the second hour it is only eligible to perform 5/2 = 2 (rounded down) tasks.

Input
capacity = an array of numbers representing the capacity of each processor

tasks = the number of tasks to be completed

Output
Calculate the minimum number of hours required to complete all tasks.

Constraints
The number of tasks is an integer always greater than 1. The capacity of all processors is also at least 1. It is guaranteed that there is always sufficient capacity to complete all the tasks.

Examples
Example 1:
Input: capacity = [3,1,7,2,4], tasks = 15
Output: 4
Explanation:
In the first hour, assign the set of tasks to the processor with capacity 7.

Once completed, the capacity of this processor drops to 7/2 = 3, and the new state becomes capacity = [3,1,3,2,4], and tasks = 8.

In the next hour, assign tasks to the processor with capacity 4.

Then, capacity = [3,1,3,2,2], and tasks = 4.

In the third hour, assign the next batch of tasks to processor with capacity 3.

Then, capacity = [1,1,3,2,2], and tasks = 1.

Assign the last task to processor with capacity 1 in the forth hour.

Therefore, it took 4 hours to complete all the tasks.

