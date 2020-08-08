public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<Integer> repeatedNumber(final List<Integer> A) {
        ArrayList<Integer> arr=new ArrayList<>();
        int xor=A.get(0);
        for(int i=1;i<A.size();i++)
        {
            xor=xor^A.get(i);
        }
        for(int i=1;i<=A.size();i++)
        {
            xor=xor^i;
        }
        int setbit= xor&~(xor-1);
        int x=0;
        int y=0;
        for(int i=0;i<A.size();i++)
        {
            if((A.get(i) & setbit)!=0)
            x=x^A.get(i);
            else
            y=y^A.get(i);
        }
        for(int i=1;i<=A.size();i++)
        {
            if((i & setbit)!=0)
            x=x^i;
            else
            y=y^i;
        }
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            if(A.get(i)==x)
            count++;
        }
        if(count==2)
        {
            arr.add(x);
            arr.add(y);
        }
        else
        {
            arr.add(y);
            arr.add(x);
        }
        return arr;
    }
}
