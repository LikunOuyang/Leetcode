# Question Description

# 2020/02/01

## 5330. Maximum Product of Splitted Binary Tree

*Difficulty: Medium*

Given a binary tree root. Split the binary tree into two subtrees by removing 1 edge such that the product of the sums of the subtrees are maximized.

Since the answer may be too large, return it modulo 10^9 + 7.

Example 1:

![Example](5330-chart.png)

Input: root = [1,2,3,4,5,6]

Output: 110

Explanation: Remove the red edge and get 2 binary trees with sum 11 and 10. Their product is 110 (11*10)

Constraints:

Each tree has at most 50000 nodes and at least 2 nodes.
Each node's value is between [1, 10000].

## 5331. Jump Game V

*Difficulty: Hard*

Given an array of integers arr and an integer d. In one step you can jump from index i to index:

i + x where: i + x < arr.length and 0 < x <= d.
i - x where: i - x >= 0 and 0 < x <= d.

In addition, you can only jump from index i to index j if arr[i] > arr[j] and arr[i] > arr[k] for all indices k between i and j (More formally min(i, j) < k < max(i, j)).

You can choose any index of the array and start jumping. Return the maximum number of indices you can visit.

Notice that you can not jump outside of the array at any time.

Example 1:

![Example](5331-chart.jpeg)

Input: arr = [6,4,14,6,8,13,9,7,10,6,12], d = 2

Output: 4

Explanation: You can start at index 10. You can jump 10 --> 8 --> 6 --> 7 as shown.

Note that if you start at index 6 you can only jump to index 7. You cannot jump to index 5 because 13 > 9. You cannot jump to index 4 because index 5 is between index 4 and 6 and 13 > 9.
Similarly You cannot jump from index 3 to index 2 or index 1.

# 2020/03/15

## 5179. Balance a Binary Search Tree

*Difficulty: Medium*

Given a binary search tree, return a balanced binary search tree with the same node values.

A binary search tree is balanced if and only if the depth of the two subtrees of every node never differ by more than 1.

If there is more than one answer, return any of them.

## 1383. Maximum Performance of a Team

*Difficulty: Hard*

There are n engineers numbered from 1 to n and two arrays: speed and efficiency, where speed[i] and efficiency[i] represent the speed and efficiency for the i-th engineer respectively. Return the maximum performance of a team composed of at most k engineers, since the answer can be a huge number, return this modulo 10^9 + 7.

The performance of a team is the sum of their engineers' speeds multiplied by the minimum efficiency among their engineers. 

Example 1:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 2

Output: 60

Explanation: 
We have the maximum performance of the team by selecting engineer 2 (with speed=10 and efficiency=4) and engineer 5 (with speed=5 and efficiency=7). That is, performance = (10 + 5) * min(4, 7) = 60.

Example 2:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 3

Output: 68

Explanation:
This is the same example as the first but k = 3. We can select engineer 1, engineer 2 and engineer 5 to get the maximum performance of the team. That is, performance = (2 + 10 + 5) * min(5, 4, 7) = 68.
Example 3:

Input: n = 6, speed = [2,10,3,1,5,8], efficiency = [5,4,3,9,7,2], k = 4

Output: 72

Constraints:

1 <= n <= 10^5

speed.length == n

efficiency.length == n

1 <= speed[i] <= 10^5

1 <= efficiency[i] <= 10^8

1 <= k <= n

# 2020/11/28

## 1671. Minimum Number of Removals to Make Mountain Array

*Difficulty: Hard*

You may recall that an array arr is a mountain array if and only if:

arr.length >= 3

There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:

arr[0] < arr[1] < ... < arr[i - 1] < arr[i]

arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given an integer array nums​​​, return the minimum number of elements to remove to make nums​​​ a mountain array.

Example 1:

Input: nums = [3,5,2,6], k = 2

Output: [2,6]

Explanation: Among the set of every possible subsequence: {[3,5], [3,2], [3,6], [5,2], [5,6], [2,6]}, [2,6] is the most competitive.

Example 2:

Input: nums = [2,4,3,3,5,4,9,6], k = 4

Output: [2,3,3,4]
 

Constraints:

1 <= nums.length <= 105

0 <= nums[i] <= 109

1 <= k <= nums.length

## 1673. Find the Most Competitive Subsequence

*Difficulty: Medium*

Given an integer array nums and a positive integer k, return the most competitive subsequence of nums of size k.

An array's subsequence is a resulting sequence obtained by erasing some (possibly zero) elements from the array.

We define that a subsequence a is more competitive than a subsequence b (of the same length) if in the first position where a and b differ, subsequence a has a number less than the corresponding number in b. For example, [1,3,4] is more competitive than [1,3,5] because the first position they differ is at the final number, and 4 is less than 5.

Example 1:

Input: nums = [3,5,2,6], k = 2
Output: [2,6]
Explanation: Among the set of every possible subsequence: {[3,5], [3,2], [3,6], [5,2], [5,6], [2,6]}, [2,6] is the most competitive.

Example 2:

Input: nums = [2,4,3,3,5,4,9,6], k = 4
Output: [2,3,3,4]
 

Constraints:

1 <= nums.length <= 105

0 <= nums[i] <= 109

1 <= k <= nums.length


## 1674. Minimum Moves to Make Array Complementary

*Difficulty: Medium*

You are given an integer array nums of even length n and an integer limit. In one move, you can replace any integer from nums with another integer between 1 and limit, inclusive.

The array nums is complementary if for all indices i (0-indexed), nums[i] + nums[n - 1 - i] equals the same number. For example, the array [1,2,3,4] is complementary because for all indices i, nums[i] + nums[n - 1 - i] = 5.

Return the minimum number of moves required to make nums complementary.

Example 1:

Input: nums = [1,2,4,3], limit = 4

Output: 1

Explanation: In 1 move, you can change nums to [1,2,2,3] (underlined elements are changed).
nums[0] + nums[3] = 1 + 3 = 4.
nums[1] + nums[2] = 2 + 2 = 4.
nums[2] + nums[1] = 2 + 2 = 4.
nums[3] + nums[0] = 3 + 1 = 4.
Therefore, nums[i] + nums[n-1-i] = 4 for every i, so nums is complementary.

Example 2:

Input: nums = [1,2,2,1], limit = 2

Output: 2

Explanation: In 2 moves, you can change nums to [2,2,2,2]. You cannot change any number to 3 since 3 > limit.

Example 3:

Input: nums = [1,2,1,2], limit = 2

Output: 0

Explanation: nums is already complementary
 

Constraints:

n == nums.length

2 <= n <= 105

1 <= nums[i] <= limit <= 105

n is even.

## 1675. Minimize Deviation in Array

*Difficulty:Hard*

You are given an array nums of n positive integers.

You can perform two types of operations on any element of the array any number of times:

If the element is even, divide it by 2.
For example, if the array is [1,2,3,4], then you can do this operation on the last element, and the array will be [1,2,3,2].
If the element is odd, multiply it by 2.
For example, if the array is [1,2,3,4], then you can do this operation on the first element, and the array will be [2,2,3,4].
The deviation of the array is the maximum difference between any two elements in the array.

Return the minimum deviation the array can have after performing some number of operations.

Example 1:

Input: nums = [1,2,3,4]

Output: 1

Explanation: You can transform the array to [1,2,3,2], then to [2,2,3,2], then the deviation will be 3 - 2 = 1.

Example 2:

Input: nums = [4,1,5,20,3]

Output: 3

Explanation: You can transform the array after two operations to [4,2,5,5,3], then the deviation will be 5 - 2 = 3.

Example 3:

Input: nums = [2,10,8]

Output: 3
 

Constraints:

n == nums.length

2 <= n <= 105

1 <= nums[i] <= 109

## 1675. Minimum Initial Energy to Finish Tasks

*Difficulty:Hard*

You are given an array tasks where tasks[i] = [actuali, minimumi]:

actuali is the actual amount of energy you spend to finish the ith task.

minimumi is the minimum amount of energy you require to begin the ith task.

For example, if the task is [10, 12] and your current energy is 11, you cannot start this task. However, if your current energy is 13, you can complete this task, and your energy will be 3 after finishing it.

You can finish the tasks in any order you like.

Return the minimum initial amount of energy you will need to finish all the tasks.

Example 1:

Input: tasks = [[1,2],[2,4],[4,8]]

Output: 8

Explanation:

Starting with 8 energy, we finish the tasks in the following order:

    - 3rd task. Now energy = 8 - 4 = 4.

    - 2nd task. Now energy = 4 - 2 = 2.

    - 1st task. Now energy = 2 - 1 = 1.

Notice that even though we have leftover energy, starting with 7 energy does not work because we cannot do the 3rd task.

Example 2:

Input: tasks = [[1,3],[2,4],[10,11],[10,12],[8,9]]

Output: 32

Explanation:

Starting with 32 energy, we finish the tasks in the following order:

    - 1st task. Now energy = 32 - 1 = 31.

    - 2nd task. Now energy = 31 - 2 = 29.

    - 3rd task. Now energy = 29 - 10 = 19.

    - 4th task. Now energy = 19 - 10 = 9.

    - 5th task. Now energy = 9 - 8 = 1.

Example 3:

Input: tasks = [[1,7],[2,8],[3,9],[4,10],[5,11],[6,12]]

Output: 27

Explanation:

Starting with 27 energy, we finish the tasks in the following order:

    - 5th task. Now energy = 27 - 5 = 22.

    - 2nd task. Now energy = 22 - 2 = 20.

    - 3rd task. Now energy = 20 - 3 = 17.

    - 1st task. Now energy = 17 - 1 = 16.

    - 4th task. Now energy = 16 - 4 = 12.
    
    - 6th task. Now energy = 12 - 6 = 6.
 

Constraints:

1 <= tasks.length <= 105

1 <= actual​i <= minimumi <= 104

# 2020/12/12

## 1690. Stone Game VII

*Difficulty: Medium*

Alice and Bob take turns playing a game, with Alice starting first.

There are n stones arranged in a row. On each player's turn, they can remove either the leftmost stone or the rightmost stone from the row and receive points equal to the sum of the remaining stones' values in the row. The winner is the one with the higher score when there are no stones left to remove.

Bob found that he will always lose this game (poor Bob, he always loses), so he decided to minimize the score's difference. Alice's goal is to maximize the difference in the score.

Given an array of integers stones where stones[i] represents the value of the ith stone from the left, return the difference in Alice and Bob's score if they both play optimally

Example 1:

Input: stones = [5,3,1,4,2]

Output: 6

Explanation: 

- Alice removes 2 and gets 5 + 3 + 1 + 4 = 13 points. Alice = 13, Bob = 0, stones = [5,3,1,4].

- Bob removes 5 and gets 3 + 1 + 4 = 8 points. Alice = 13, Bob = 8, stones = [3,1,4].

- Alice removes 3 and gets 1 + 4 = 5 points. Alice = 18, Bob = 8, stones = [1,4].

- Bob removes 1 and gets 4 points. Alice = 18, Bob = 12, stones = [4].

- Alice removes 4 and gets 0 points. Alice = 18, Bob = 12, stones = [].

The score difference is 18 - 12 = 6.

Example 2:

Input: stones = [7,90,5,1,100,10,10,2]

Output: 122

Constraints:

n == stones.length

2 <= n <= 1000

1 <= stones[i] <= 1000