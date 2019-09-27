# Pre-placement-problems
# 1. Micro and Array update
 Micro and Array Update Micro purchased an array A having N integer values. After playing it for a while, he got bored of it and
 decided to update value of its element. In one second he can increase value of each array element by 1. He wants each array element's
 value to become greater than or equal to K. Please help Micro to find out the minimum amount of time it will take, for him to do so. 
 
<h2> Input</h2>
First line consists of a single integer, T, denoting the number of test cases. First line of each test case consists of two 
space separated integers denoting N and K. Second line of each test case consists of N space separated integers denoting the array A. 
 
<h2>Output</h2>
For each test case, print the minimum time in which all array elements will become greater than or equal to K. Print a new 
line after each test case. 

<h2>Constraints</h2>

1<=T<=5

1<=T<=10^5

1<=A[i]

k<=10^6

<h2>Sample Input</h2>                                     
 
 2   
 
 3 4    
 
 1 2 5  
 
 3 2   
 
 2 5 5
  
<h2>Sample Output</h2>
 
 3  
 
 0
  
# 2. Hamiltonian and Lagrangian  
 Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb Mid Semester  examination, it’s now time for the results. The TAs have released the marks of students in the form of an array, where arr[i] represents  the marks of the ith student. 
 
 Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array. 
 
<h2>Input Format</h2>
The first line of input will contain a single integer n denoting the number of students. The next line will contain n space separated integers representing the marks of students. 
 
<h2>Output Format</h2>
 Output all the integers separated in the array from left to right that are not smaller than those on its right side. 
 
<h2>Constraints</h2> 

1 <= n <= 1000000 

0 <= arr[i] <= 10000 

<h2>Sample Input</h2>

6 

16 17 4 3 5 2
 
<h2>Sample Iutput</h2>

17 5 2
 
# 3. Frustrated coders   
 There are N frustrated coders standing in a circle with a gun in their hands. Each coder has a skill value S[ i ] and he can only kill  those coders that have strictly less skill than him. One more thing, all the guns have only 1 bullet. This roulette can take place in  any random order. Fortunately, you have the time stone (haaan wo harre wala) and you can see all possible outcomes of this scenario.  Find the outcome where the total sum of the remaining coder's skill is minimum. Print this sum. 
 
<h2>Input Format</h2>
 The first line contains N the no. of coders The next line contains N  elements where the ith element is theS[ i ] of ith coder. 
 
<h2>Output Format</h2>
 Print a single line containing the minimum sum. 
 
<h2>Constraints </h2>

1<= N <= 1000000 

1<=S[ i ]<=1000
 
<h2> Sample Input</h2>

6 

1 7 2 2 4 4
<h2> Sample Output</h2>

11
 
# 4. Pink Floyd and Happiness 
 Pink is sad because of some reasons, he wants to cheer up by listening to some songs from his favorite band, Pink Floyd. 
 
There are N records and Pink will be happy if he listens to them in the ascending order, i.e., first the song No. 1, then No.2 and so on (He has to listen to all the N songs to become Happy). 
 
Pink is delivered his records in some given order, he can either add the record to the Playlist in the delivered order or put some on another table. After being put on the table only the topmost record can be added to the playlist at any time. 
 
Print whether Pink will be sad or happy after the delivery of the records. 
 
<h2> Input Format</h2>
N - Number of records followed  by N numbers- order of records. 
 
<h2>Output Format</h2> 
 Print "Happy" if the playlist has songs from 1 to N in order else "Sad". 
 
<h2 Constraints</h2>

1<=N<=10^5 

The array consists of 1-N distinct numbers. 
 
<h2> Sample Input</h2> 

5 

1 2 4 3 5
 
<h2> Sample Output</h2>

Happy

# 5. Hacker and traffic lights
 Zolo is stuck in a traffic due to dysfunctional traffic light. Zolo is a professional hacker and he can get into the system and change  the state of the light. His planet has different types of traffic lights such that there are N bulbs on the traffic board and only when  all of them are green(G) the cars can pass. there are 2 other states also which the bulb can show; i.e. Red(R) & Yellow(Y). Note that  the lights are designed such that they follow a state change cyclic pattern as follows: 
 
                                   R------>Y----->G----->Y
                       
 Once Zolo gets into the system he can select any position i and update all elements between i to min(N, i + K - 1)  by increasing their  state by 1.This whole process takes 1 sec and he can repeat this process any no. of times until he gets all lights = G . Find the  minimum time to do the process as Zolo is getting late for work. 
 
<h2> Input Format </h2>
 The first line contains N K The second line describes the current status of each bulb as an array whose each element can either be G or  Y or R. 
 
<h2> Output Format</h2>
 Print the minimum amount of time required to clear the traffic jam". 
 
<h2> Constraints</h2> 

1<=N 

K<=100000. 

<h2>Sample Input</h2>

4 2 

R Y G Y
 
<h2> Sample Output</h2>
 
 5
