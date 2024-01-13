// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int i = 0;
//         int j = height.size() - 1;
//         int V = min(height[i], height[j]) * (j-i);

//         while(i!=j){
//             if(height[i]<height[j]){
//                 i++;
//                 if(height[i]>height[i-1] && i!=j){
//                     V = max(V , min(height[i], height[j]) * (j-i));
//                 }
//             }
//             else{
//                 j--;
//                 if(height[j]>height[j+1] && i!=j){
//                     V = max(V , min(height[i], height[j]) * (j-i));
//                 }
//             }
//         }
//         return V;
//     }
// };
class Solution {
 public:
 int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
};