
namespace pp 
{   
    struct number
{
    double BASE ;
    double POWER;
    

 };
   double power(number num)
   {  
       double result=1;
       if(num.POWER==0)
       {
          return 1 ;
       }
        else if ( num.POWER > 0)
      {
          for (int i=0;i < num.POWER;i++ )
          {
            result = result* num.BASE ;

          }
          return result ;
     }
        else {
             for (int i=0;i > num.POWER;i-- )
          {
            result = result / num.BASE ;

          }
          return result ;

        }
     }
     
} 



	