#include<iostream>
using namespace std;
void user_conc(char*, char*);
int main(){
    char str1[20];
    char str2[30];
    cout<<"enter str1\n";
    cin>>str1;
    cout<<"enter str2\n";
    cin>>str2;
     user_conc(str1, str2);
    cout<<"after concatenation string is \t"<<str1;
}

void user_conc(char* p, char* q){
   /* while(*p!='\0'){
      p++;
      while (*q!='\0')
      {
        *p = *q;
        p++;
        q++;
      }  
   }
   *q = '\0';*/
  while(*p!='\0')
  p++;
  while(*q!='\0')
  {
    *p=*q;
    q++;
    p++;
    }
  
  *p='\0';
}


