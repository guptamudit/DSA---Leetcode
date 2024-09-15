class Solution {
    char[] vowels = { 'a', 'e', 'i', 'o', 'u' };
    int[] pow = { 1, 2, 4, 8, 16 };
    
    public int findTheLongestSubstring(String s) {
        char[] arr = s.toCharArray();
        int n = arr.length, code = 0, ans = 0;
        boolean[] odd = new boolean[5];
        
        HashMap<Integer, Integer> encoded = new HashMap<>();
        encoded.put(code, -1);
        for(int i=0; i<n; ++i) {
            for(int j=0; j<5; ++j) {
                if(arr[i] == vowels[j]) {
                    code += (odd[j]?-1:1)*pow[j];
                    odd[j] = !odd[j];
                    break;
                }
            }
            if(encoded.containsKey(code)) ans = Math.max(i-encoded.get(code), ans);
            else encoded.put(code, i);
        }
        
        return ans;
    }
}