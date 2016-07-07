/********************************************************************************** 
* 
* Given n non-negative integers representing an elevation map where the width of each bar is 1, 
* compute how much water it is able to trap after raining. 
* 
* For example, 
* Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.
*   
*     ^                                             
*     |                                             
*   3 |                       +--+                  
*     |                       |  |                  
*   2 |          +--+xxxxxxxxx|  +--+xx+--+         
*     |          |  |xxxxxxxxx|  |  |xx|  |         
*   1 |   +--+xxx|  +--+xxx+--+  |  +--+  +--+      
*     |   |  |xxx|  |  |xxx|  |  |  |  |  |  |      
*   0 +---+--+---+--+--+---+--+--+--+--+--+--+----->
*       0  1   0  2  1   0  1  3  2  1  2  1        
* 
* The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 
* 6 units of rain water (blue section) are being trapped. Thanks Marcos for contributing this image!
*               
**********************************************************************************/


public:
    int trap(int A[], int n) {
        int w = 0;

        if(n<=2) return w;
        
        int maxhight = -1;
        int maxidex = -1;
        
        for(int i=0; i<n; i++){
            if(A[i]>maxhight){
                maxhight = A[i];
                maxidex = i;
            }
        }
        
        int prevhight = -1;
        for(int i=0; i<maxidex; i++){
            if(A[i]>prevhight){
                prevhight = A[i];
            }
            
            w += (prevhight-A[i]);
        }
        
        prevhight = -1;
        for(int i=n-1; i>maxidex; i--){
            if(A[i]>prevhight){
                prevhight = A[i];
            }
            
            w += (prevhight-A[i]);
        }
     
        return w;
    }
