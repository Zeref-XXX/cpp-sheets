You are given n disks placed on a starting rod (from), with the smallest disk on top and the largest at the bottom. There are three rods: the starting rod(from), the target rod (to), and an auxiliary rod (aux).
You have to calculate the total number of moves required to transfer all n disks from the starting rod to the target rod, following these rules:

 1. Only one disk can be moved at a time.
 2. A disk can only be placed on top of large disk or on an empty rod.

Return the number of moves needed to complete the task.

---

#### Examples:
    Input: n = 2
    Output: 3
    Explanation: For n =2 , steps will be as follows in the example and total 3 steps will be taken.
    move disk 1 from rod 1 to rod 2
    move disk 2 from rod 1 to rod 3
    move disk 1 from rod 2 to rod 3

---
```cpp
    int towerOfHanoi(int n, int from, int to, int aux) {
            // code here
            if(n==1){
                return 1;
            }
            int move=0;
            move += towerOfHanoi(n-1,from,aux,to);
            move++;
            move+=towerOfHanoi(n-1,aux,to,from);
            return move;     
    }
