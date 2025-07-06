// You are given n disks placed on a starting rod(from), with the smallest disk on top and the largest at the bottom.There are three rods : the starting rod(from), the target rod(to), and an auxiliary rod(aux).You have to calculate the total number of moves required to transfer all n disks from the starting rod to the target rod, following these rules :
//  1. Only one disk can be moved at a time.
//  2. A disk can only be placed on top of large disk or on an empty rod.
//  Return the number of moves needed to complete the task.

// Input: n = 2
// Output: 3
//  Explanation: For n =2 , steps will be as follows in the example and total 3 steps will be taken.
//  move disk 1 from rod 1 to rod 2
//  move disk 2 from rod 1 to rod 3
//  move disk 1 from rod 2 to rod 3

#include <bits/stdc++.h>
using namespace std;

int toh(int n, int source, int help, int destination)
{
    if(n==1){
        cout<<"move n-1 to destination "<<endl;
        return 1;
    }
    int move=0;
    move +=toh(n-1,source,destination,help);
    cout<<"move n to destination"<<endl;
    move++;

    move +=toh(n-1,source,destination,help);
    return move;
}

int main()
{
    int n = 4;
    cout << toh(n, 1, 2, 3);
}