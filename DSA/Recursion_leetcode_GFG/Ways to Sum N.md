# count no of ways to get the sum

```cpp
 need dp
ways(arr,m,sum){
    if(sum==0) return 1;
    if(sum>0) return 0;
    int ans=0;
    for(i=0;i<m;i++){
        ans+=ways(arr,m,sum-arr[i]);
    }
    return ans;
}
```

---
