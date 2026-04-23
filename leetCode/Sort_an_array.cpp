class Solution {
public:
void merge(vector<int>& arr,int start,int mid,int end){
    vector<int>temp(end-start+1);  // temp = new arr

    int left=start, right=mid+1, index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }

    // left arr remaining element pasting in temp
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }

    // right arr remaining element pasting in temp
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }

    index=0;

    //put these value in array
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }

}


void mergesort(vector<int>& arr,int start,int end){
    //condition
    if(start==end)
    return;
    
    //divide
    int mid = start+(end-start)/2;
    mergesort(arr,start,mid);  //left
    mergesort(arr,mid+1,end);  //right
    merge(arr,start,mid,end);
}

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};
