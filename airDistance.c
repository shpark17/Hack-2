/**
 *Author: SungHa Park
 *Date: 08/30/1018
 *This program prompts user 
 *to enter the latitude and longitude 
 *of two locations and then computes 
 *the distance between them using the above formulas
 *
 */
 #include<stdlib.h>
 #include<stdio.h>
 #include<math.h>
 
int main(int argc, char **argv) {
  
  double latitudeA, latitudeB, longitudeA, longitudeB;
  
  printf("Enter the latitude of location A: ");
  scanf("%lf", &latitudeA);
  
  printf("Enter the latitude of location B: ");
  scanf("%lf", &latitudeB);
  
  printf("Enter the longitude of location A: ");
  scanf("%lf", &longitudeA);
  
  printf("Enter the longitude of location B: ");
  scanf("%lf", &longitudeB);
  
  double latitudeAR, latitudeBR, longitudeAR, longitudeBR;
  
  latitudeAR = (latitudeA/180)*M_PI;
  latitudeBR = (latitudeB/180)*M_PI;
  longitudeAR = (longitudeA/180)*M_PI;
  longitudeBR = (longitudeB/180)*M_PI;
  
  
  double Dif = longitudeB - longitudeA
  double Dis = arccos(sin(latitudeAR)sin(latitudeBR)+cos(latitudeAR)cos(latitudeBR)cos(Dif))*6371
  
  printf("Origin: %f, %f\n Destination: %f, %f\n Air distance is: \n", latitudeA, longitudeA, latitudeB, longitudeB, Dis)
return 0:
}