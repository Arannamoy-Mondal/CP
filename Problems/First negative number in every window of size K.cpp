/*
Working on progress
*/
#define int long long
vector<int> printFirstNegativeInteger(int A[], int N, int K) 
{
        queue<int>q;
        int j=0;
        while (j<K) 
        {
            if (A[j] < 0) 
            {
                q.push(A[j]);
            }
            j++;
        }
        vector<int>r(N-K+1);
        if(!q.empty())
        {
           r[0]=q.front();
        }
        else r[0]=0;
        for (int i = 1; i < N - K + 1; i++) 
        {
            if (A[i - 1] < 0) 
            {
                q.pop();
            }
            if (A[i + K - 1] <0) 
            {
                q.push(A[i + K - 1]);
            }
            if(!q.empty())
            {
                r[i]=q.front();
            }
            else r[i]=0;
        }
        return r;
}
