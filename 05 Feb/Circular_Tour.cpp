class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
        int total=0,gas=0,start=0,balance=0;
        for(int i=0;i<n;i++){
            gas+=p[i].petrol;
            total+=p[i].distance;
            balance+=(p[i].petrol-p[i].distance);
            if(balance<0){
                balance=0;
                start=i+1;
            }
        }
        return gas<total ? -1:start;
    }
};
