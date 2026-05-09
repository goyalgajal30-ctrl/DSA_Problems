class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<int>qu;
        for(int i=0; i<n; i++){
            qu.push(i);
            
        }
        int timer =0; 
        while(!qu.empty()){
    int person = qu.front();
    tickets[person]--;
            timer++;
            if(person == k && tickets[person] ==0 )
           {
                return timer;
           }
           qu.pop();
           if(tickets[person]!=0){
            qu.push(person);
           }
        }

        return -1;
    }
};