class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &a, int N)
    {
        // code here 
        long l=0,r=0,sum=0,mx=INT_MIN;
        while(r<N)
        {
            sum+=a[r];
            if((r-l+1)==K)
            {
                mx=max(mx,sum);
                sum-=a[l];
                l++;r++;
            }
            else
            {
                r++;
                
            }
        }
        return mx;
    }
};