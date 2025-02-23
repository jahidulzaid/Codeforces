# Bismillahir Rahmanir Rahim
# Jahidul Islam, Green University Of Bangladesh
# @JahidulZaid

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    print(2 * n * m)






B. Gorilla and the Exam
time limit per test1 second
memory limit per test256 megabytes
Due to a shortage of teachers in the senior class of the "T-generation", it was decided to have a huge male gorilla conduct exams for the students. However, it is not that simple; to prove his competence, he needs to solve the following problem.

For an array b
, we define the function f(b)
 as the smallest number of the following operations required to make the array b
 empty:

take two integers l
 and r
, such that l≤r
, and let x
 be the min(al,al+1,…,ar)
; then
remove all such bi
 that l≤i≤r
 and bi=x
 from the array.
You are given an array a
 of length n
 and an integer k
. No more than k
 times, you can choose any index i
 (1≤i≤n
) and any integer p
, and replace ai
 with p
.

Help the gorilla to determine the smallest value of f(a)
 that can be achieved after such replacements.

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each set of input data contains two integers n
 and k
 (1≤n≤105
, 0≤k≤n
) — the length of the array a
 and the maximum number of changes, respectively.

The second line of each set of input data contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the array a
 itself.

It is guaranteed that the sum of the values of n
 across all sets of input data does not exceed 105
.

Output
For each set of input data, output a single integer on a separate line — the smallest possible value of f(a)
.