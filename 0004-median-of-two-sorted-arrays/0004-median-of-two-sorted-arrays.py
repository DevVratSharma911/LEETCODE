class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1.extend(nums2)
        nums1.sort()
        if len(nums1)%2 != 0:
            result=nums1[(len(nums1)//2)]
        else:
            index=len(nums1)//2
            result=(nums1[index-1]+nums1[index])/2.0
        
        return result