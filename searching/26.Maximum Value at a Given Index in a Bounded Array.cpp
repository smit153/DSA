class Solution {
public:
    int maxValue(int n, int x, int maxSum) {
        
        int i=1,sum=0,left=x,right=n-x-1,res=0,r=0,l=0;
        maxSum-=n;res++;// making all the elemnets positive
        while(maxSum>=i){
            if(l==left && r==right){
            break;// we are done making the pyramid or spike
            }
            //Keeping track of left elements
            if(left<=l){
                maxSum-=left;
            }else{
                maxSum-=l;//adding 1 to all the elements in left of index element
                l++;
            }
            //keeping track of right elements
            if(right<=r){
                maxSum-=right;
            }else{
                maxSum-=r;//adding 1 to all the elements in right of index element
                r++;
            }
            
            maxSum-=1;// adding 1 to index element
            res++;
            i=l+1+r;
        }
        return res + (maxSum/n);//after making the pyramid or spike for n elements,
                                 //we just need to increase all elements by (maxSum/n)
    }
};