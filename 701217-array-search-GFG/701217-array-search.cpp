class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        // int it=find(arr.start(),arr.end(),x)
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return i;
                break;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna