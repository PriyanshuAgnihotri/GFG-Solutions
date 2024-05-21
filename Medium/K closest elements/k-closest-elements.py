#User function Template for python3
class Solution:
    def closestIndex(self,arr,start,end,target):
        while(start<=end):
            mid=start+(end-start)//2
            if(arr[mid]==target):
                return mid
            if(arr[mid]>target):
                end=mid-1
            else:
                start=mid+1
        return start
    def printKClosest(self, arr, n, k, x):
        # code here
        close_index=self.closestIndex(arr,0,n-1,x)

        left=right=close_index
        if(close_index>=n):
            left=n-1
            right=n
        elif(arr[close_index]==x):
            left-=1
            right+=1
        else:
            right=close_index
            left=close_index-1
        count=0
        
        res=[]
        while(count<k and left>=0 and right<n):
            ldiff=abs(x-arr[left])
            rdiff=abs(x-arr[right])
            if(ldiff>=rdiff):
                res.append(arr[right])
                right+=1
            else:
                res.append(arr[left])
                left-=1
            count+=1
        while(count<k and left>=0):
            res.append(arr[left])
            left-=1
            count+=1
        while(count<k and right<n):
            res.append(arr[right])
            right+=1
            count+=1
        return res
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        k, x = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.printKClosest(arr, n, k, x)
        for xx in ans:
            print(xx, end=" ")
        print()
        tc -= 1

# } Driver Code Ends