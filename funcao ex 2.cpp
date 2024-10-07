#include <stdio.h>

float Media2Maiores(float num1,float num2,float num3);
float MaiorNota(float num1,float num2,float num3);
float MenorNota(float num1,float num2,float num3);


int main (){

float nota1,nota2,nota3,media,maior,menor;

printf("Digite a nota 1:");
scanf("%f", &nota1);
printf("Digite a nota 2:");
scanf("%f", &nota2);
printf("Digite a nota 3:");
scanf("%f", &nota3);

media = Media2Maiores(nota1,nota2,nota3);
maior = MaiorNota(nota1,nota2,nota3);
menor = MenorNota(nota1,nota2,nota3);


printf("A media das 2 maiores notas eh: %.2f \n", media);
printf("A maior nota eh: %.2f \n", maior);
printf("A menor nota eh: %.2f \n", menor);

return 0;

}



float Media2Maiores (float nota1,float nota2,float nota3){
float result=0;

if (nota1 >= nota2){
if (nota2 >= nota3){
result = (nota1 + nota2)/2;
return result;
}else {
result = (nota1 + nota3)/2;
return result;
}
}else {

if (nota3 >= nota1){
result = (nota2 + nota3) /2;
return result;
}

}

}

float MaiorNota (float num1,float num2,float num3){

float maior;

if(num1 >= num2 && num3){
maior = num1;
return maior;

}else{

if(num2 >= num3){
maior = num2;
return maior;

}else{
maior = num3;
return maior;

}}

}

float MenorNota (float num1,float num2,float num3){

float menor;

if(num1 <= num2 && num3){
menor = num1;
return menor;

}else{

if(num2 >= num3){
menor = num2;
return menor;

}else{
menor = num3;
return menor;

}}

}
