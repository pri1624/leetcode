class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0, ten=0;
        for(int i:bills){
            switch(i){
                case 5:
                    five++;
                    break;
                case 10:
                    if(five>0){
                        five--;
                        ten++;
                    }else {
                        return false;
                    }
                    break;
                case 20:
                    if(five>0 && ten>0){
                        five--;
                        ten--;
                    }
                    else if(five>=3)
                        five-=3;
                    else{
                        return false;
                    }
                    break;
                default: 
                    return false;
            }

        }
        return true;
    }
};