class Solution(object):
    def longestCommonPrefix(self, strs):
        
        l= len (strs)
        e=""
        s= min(strs,key=len)
        for i in range(len(s)):
            count=0
            for j in strs:

                if s[i]==j[i]:
                    count+=1
            if count==l:

                e=e+s[i]
            else:
                break
        return e
        

                
