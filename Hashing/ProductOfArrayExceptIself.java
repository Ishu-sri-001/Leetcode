// https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
    public int[] productExceptSelf(int[] n) {
        HashSet<Integer>set=new HashSet<>();
        int ans[]=new int[n.length];
        int p=1;
        for (int i=0;i<n.length;i++)
        {
            set.add(n[i]);
            if(n[i]==0)
                continue;
            else 
                p=p*n[i];
        }
        for (int i=0;i<n.length;i++)
        {
            if((set.contains(0)) && (n[i]!=0))
            {
                ans[i]=0;
            }
            else if((!set.contains(0)) && n[i]==0)
            {
                ans[i]=p;
            }
            else if((!set.contains(0)) && n[i]!=0)
            {
                ans[i]=p/n[i];
            }
            else if (set.contains(0) && n[i]==0)
            {
                ans[i]=check(n,i,p);
            }
        }
        return ans;
    }
    int check(int[] a,int k,int pro)
    {
        int chk=0;
        for (int i=0;i<a.length;i++)
        {
            if((i!=k) && a[i]==0)
                chk++;
        }
        if (chk==0)
            return pro;
        return 0;
    }
}
