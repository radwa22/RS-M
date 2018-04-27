
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
     double POWER(int base , int power)
     {
       
       if(power==0)
       {
          return 1 ;
       }
        else 
      {int result = base * POWER(base , power-1) ;
      return result ;}
     }  
}
     




	