class Solution {
    public int[][] merge(int[][] intervals) {
        List<int []> ls=new ArrayList<>();
        if(intervals.length==0)
            return ls.toArray(new int[0][]);
        Arrays.sort(intervals, (a,b)->a[0]-b[0]);
        int s=intervals[0][0];
        int e=intervals[0][0];
        for(int i=0;i<intervals.length;i++)
        {
           if(intervals[i][0]<=e)
               e=Math.max(intervals[i][1],e);
            else
            {
                ls.add(new int[]{s,e});
                s=intervals[i][0];
                e=intervals[i][1];
            }
        }
        ls.add(new int[]{s,e});
        return ls.toArray(new int[0][]);
    }
}