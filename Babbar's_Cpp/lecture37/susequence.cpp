// #include<iostream>
// using namespace std;

// void solve(int nums[] ,vector<int> output,vector<vector<int>>& ans,int index){
//     if(index >= nums.size()){
//         ans.push_back(output);
//         return;
    
//     }

//     // exclude
//     solve(nums, output, ans , index+1);
//     // include
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output, ans , index+1);
// }    
// int main(){
//         int nums[6]={1,2,3,4,5,6};
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums,output , ans , index );
//         return ans;
        
//     }
