/*
𝑵𝒂𝒎𝒆:𝑰𝒂𝒏 Gichabu
𝑹𝒆𝒈:𝑪𝑻100/26174/25
𝑫𝒆𝒔𝒄𝒓𝒊𝒑𝒕𝒊𝒐𝒏: 𝑨 𝒑𝒓𝒐𝒈𝒓𝒂𝒎 𝒅𝒊𝒑𝒍𝒂𝒚𝒊𝒏𝒈 𝒕𝒉𝒆 𝒗𝒐𝒍𝒖𝒎𝒆 𝒂𝒏𝒅 𝑺.𝑨 𝒐𝒇 𝒂 cylinder
*/ 

//
#include <stdio.h>

int main(){
 float attendance,average_marks;
 
 //prompt the user for attendance and average marks
  printf("enter your attendance\n:");
  scanf("%f",& attendance);
  
  printf("enter your average_marks\n:");
  scanf("%f",& average_marks);
  
  //checking for qualifications criteria 
  if(attendance>=75 && average_marks>=40){
  printf("you are eligible for examination.\n:");
  }
  else{
  printf("you are not eligible for examination");
  }
  
  return 0;
  }