/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev=head;
        
        ListNode *temp=head->next;
        
        
        
        int count=1;
        
        vector<int>values;
        
        while(temp->next!=NULL){
            if(temp->val>prev->val && temp->val>temp->next->val){
                values.push_back(count);
            }
            if(temp->val<prev->val && temp->val<temp->next->val){
                values.push_back(count);
            }
            temp=temp->next;
            prev=prev->next;
            count++;
            
        }
        if(values.size()<2)return{-1, -1};
        int min_dis=INT_MAX;
        for(int i=1;i<values.size();i++){
            if(values[i]-values[i-1]<min_dis){
                min_dis=values[i]-values[i-1];
            }
            
            
            
       }
       return{min_dis, values[values.size()-1]-values[0]};
        
    }
};