 #include<iostream>
 #include"file1.hpp"
 int main()
 {   
      
     // pp::number num; 
      
     int power , base ;
   std::cin >>power >> base  ;

   double RESULT=0;
    RESULT=pp::POWER(base , power) ;


 std::cout<<" result="<<RESULT<<std::endl;
 }