#Amazon Online Assessment Practice 2021

This repository contains my solution to the Amazon Online Assement Question on MultiProcessor System

Question Level: Intern

Year:2020/2021

**multi_processor_systemv1_0.cpp** \n
  This was my first try on solving the problem.
  First, I need to initialize a int variable labeled "hours". The whole point is the change these hours and by the end of completeing all tasks, return hours.
  
  Afterwards, a while loop was set up with the following condition: tasks >= 1. In the given problem, it is stated that "The number of tasks is an integer always greater than 1". However, within the first provided example, tasks is able to be equal to 1.
  
  Next, need to find the max element in the capacity vector. I initialized a int variable known as max as set it equal to *max_element(capacity.begin().capacity.end())
