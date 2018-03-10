 #include<iostream>
 #include"file1.hpp"
 int main()
 {   
      
      pp::number num; 
      
     
   std::cin >>num.POWER >> num.BASE ;
   double RESULT=0;
    RESULT=pp::power(num) ;


 std::cout<<" result="<<RESULT<<std::endl;
 }