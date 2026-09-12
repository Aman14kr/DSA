class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.equals("abc")){return false;}
        String a = s + s;
        if(a.contains(goal)){
            return true;
        }
        return false;
    }
}