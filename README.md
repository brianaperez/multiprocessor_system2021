# MultiProcessor System Question
#### Question Level : Intern
#### Year : 2020 / 2021

# Problem

A processor is able to perform a certain number of tasks per hour.

Find the minimum number of hours required to schedule all the tasks, given that after each hour, the capacity of the processor that was last scheduled cuts in half.

For example, if a processor of capacity 5 is able to perform 5 tasks in the first hour, and in the second hour it is only eligible to perform 5/2 = 2 (rounded down) tasks.

### Input
**capacity** = an array of numbers representing the capacity of each processor

**tasks** = the number of tasks to be completed

### Output
Calculate the minimum number of hours required to complete all tasks.

### Constraints
The number of tasks is an integer always greater than 1. The capacity of all processors is also at least 1. It is guaranteed that there is always sufficient capacity to complete all the tasks.

### Examples

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

# My Process

### Solution v 1.0
First, I must initilze a int variable known as hours. In the solution, we will be incrementing hours by 1 as each task is completed. This will also be the variable that needs to be returned.

Second, set up a while loop. The reason I chose a while loop is because the code within should only continue of there are tasks still left. 
The condition for the while loop is set to 'tasks >= 1'.

Third, find max element within the capacity vector. I initialzed a int variable known as 'max' and set it equal to _*max_element(capacity.begin(), capacity.end())_
max_element when given a range can find the max element within that range. So for this problem, I want to pull out the max element from the capcity vector.

Fourth, when max is found in the capaciy vector, subtract max from # of tasks: tasks = tasks - max;

Fifth, make a for loop starting at 'int i = 0', conditional 'i < capacity.size()', and increment after operation 'i++'

Sxith, within the for loop apply a if statement. The conditional will take element in capacity at index i and compare it to value of max. If the conditional is met, we must set that value at i equal to itself divided by 2;

Seventh, after the closing of the foor loop increment hours by 1: 'hours++'.

We put return hours after the while loop closing bracket and find the code does work but should not be considered the full solution.

#### Issues

The problem with Solution v 1.0 is that it does not follow the exact process of the given example. When tasks is found within the latest capacity vector, it is assgined to the capacitor with the same value of 1. This would make tasks go to 0 and increment hours. v 1.0 does not follow that process, it instead selects the largest element which would be 3.

### Solution v 2.0

1) Initialze int variable 'hours' with a value of '0'

2) Create for loop with starting statement, 'int i = 0', conditional: 'i < capacity.size()', and incrementing i by 1 after operations 'i++'.

3) If statement nested in for loop with conditional: 'capacity.at(i) == tasks'. If true, increment hours by 1 and break the for loop using 'break'.

4) Create else if with conditional: 'tasks >= 1'. If tasks is not found in the capacity vector, we must check if tasks is a value greater than or equal to 1.

5) Within the else if, apply same code from **Solution v 1.0** from Steps 3 to 7.

6) Outside of the for loop, we 'return hours;' and that is it.

#### Explanation

Solution v 2.0 takes into account if the value of tasks can be found in the capacity vector. If tasks is found in the vector, you can easily increment hours and break the loop. You could make it to where 'tasks -= tasks' which would make tasks = 0 and not pass the conditional in else if statement. It seems easier to increment hours by 1 and break the loop as all that matters is that we return the correct amount of hours taken to complete all tasks.
