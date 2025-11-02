# 📘 Recursion — A Complete Guide  

## 🔹 What is Recursion?  
Recursion is a method in programming where a function **calls itself** to solve a problem. Instead of solving the entire problem at once, recursion breaks it into **smaller sub-problems** until it reaches a simple case (called the base case).  

---

## 🔹 Key Components of Recursion  
1. **Base Case**  
   - The condition where the recursion stops.  
   - Without it, the recursion would continue infinitely and cause a stack overflow.  

2. **Recursive Step**  
   - The part where the function calls itself with a **smaller or simpler input**.  

3. **Stack Behavior**  
   - Each recursive call is placed on the call stack.  
   - When the base case is reached, the calls start returning in reverse order (LIFO).  

---

## 🔹 General Thinking Process  
- Always identify the **simplest version** of the problem → that’s your base case.  
- Break down the problem into **smaller sub-problems**.  
- Ensure every step moves **closer to the base case**.  

---

## 🔹 Example Problems  

### 1. Sum of First N Numbers  
- Base Case: If `N = 0`, the sum is `0`.  
- Recursive Step: Sum of `N` numbers = `N + sum of (N-1)`.  
- The recursion keeps reducing `N` until it reaches `0`.  

---

### 2. Factorial of N  
- Base Case: `0!` or `1!` = `1`.  
- Recursive Step: `N! = N × (N-1)!`.  
- The function keeps multiplying until it reaches the base case.  

---

### 3. Reversing a String using Recursion  
- Base Case: If `left >= right`, stop recursion.  
- Recursive Step: Swap characters at `left` and `right`, then move closer by calling the function with `left+1` and `right-1`.  
- The recursion continues until all characters are swapped.  

---

### 4. Sum of Elements in an Array  
- Base Case: If the index reaches the size of the array, return `0`.  
- Recursive Step: Current element + sum of the rest of the array.  
- Each call processes one element and passes the rest to the next call.  

---

## 🔹 Why Recursion is Powerful  
- Provides a clean and elegant solution for problems involving **repetition with changing states**.  
- Especially useful in problems like **tree traversal, graph algorithms, divide-and-conquer, dynamic programming, and backtracking**.  
- Makes code more **readable and close to mathematical definitions**.  

---

## 🔹 Things to Keep in Mind  
- Always define a **clear base case**.  
- Ensure that the recursive call moves towards the base case.  
- Be aware of **stack usage** → too deep recursion can cause memory issues.  
- Iterative solutions may be more efficient in some scenarios, but recursion improves clarity.  
