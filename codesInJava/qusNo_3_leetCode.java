class Solution {
    public int lengthOfLongestSubstring(String s) {
       int windowS=0;
       int windowE=0;
      int n= s.length();
       HashSet<Character> set=new HashSet<>(); 
       int MaxLength=Integer.MIN_VALUE;

       while(windowE<n){
        char ch=s.charAt(windowE);
            if(set.contains(ch)){
                while(windowS < windowE && set.contains(ch)){
                set.remove(s.charAt(windowS));
                windowS++;
                }
             }
            set.add(ch);
            MaxLength=Math.max(MaxLength,(windowE-windowS+1));
            windowE++;

        }
        return (MaxLength==Integer.MIN_VALUE)?0:MaxLength;
    }
}