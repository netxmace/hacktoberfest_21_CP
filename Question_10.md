

## Question 10

Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.

In one operation, you

choose a non-negative integer p (p≥0),
select at most K indices in the array A, and
for each selected index i, replace Ai with Ai⊕2p. Here, ⊕ denotes bitwise XOR.
## Input
* The first line contains an integer T - the number of test cases. Then T test cases follow.
* The first line of each test case contains two integers N, K - the size of the array and the maximum number of elements you can select in an operation.
* The second line of each test case contains N integers A1,A2…AN.
## Output
For each test case, output the minimum number of operations to make all elements of the array 0.

## Constraints
- 1≤T≤105
- 1≤N,K≤105
- 0≤Ai≤109
- The sum of N over all test cases does not exceed 2⋅105
## Sample Input
- 1
- 3 2
- 3 6 10
## Sample Output
- 5
