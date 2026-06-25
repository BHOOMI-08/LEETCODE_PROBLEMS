class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long count=0;
        long long countpen=0;
        while(countpen*cost1<=total){
            long long remaining=total-(countpen*cost1);
            long long countpencil=remaining/cost2;
            count+=(countpencil)+1;
            countpen++;
        }
        return count;
    }
};
