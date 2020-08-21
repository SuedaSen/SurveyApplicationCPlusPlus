#include <iostream>
#include <iomanip>
#include <array>
#include<string>
#define WIDTH 5
#define HEIGHT 10
using namespace std;
int i,j,k,c=0,d=0,s=0,sayac,is,a;
double sum=0,average=0,ans=0,count1=0,count2=0,count3=0,count4=0,count5=0;
int aw[WIDTH][HEIGHT];
int main()
{
    int test[WIDTH][HEIGHT];
     string issue[] = {"Education","Global Warming","Economy Balance","Gender Equality","Deforestation"};
	       system("color 1F"); //Mavi renk değiştirme


	     cout <<"\n\t\t***********************************"
		 <<"\n\t\t***Welcome To The Election Survey***"
		 <<"\n\t\t***********************************"
		 <<endl
		 <<"All issues are : "<<"Education, Global Warming, Economy, Gender Equality, Deforestation"
		 <<"\n\n" << " " <<"Please enter point between 1 and 10:  1=AWFUL 10=EXCELLENT"
		 <<endl
		 <<endl;
double summ[50];
int responds[50];
        for( j = 0; j < 10; j++){
        for(i = 0; i < 5; i++)
          {
            cout << "Issues: "<< issue[i]<<": ";
            cin>> test[i][j];
            sum=sum+test[i][j];
            summ[c]=sum;//25
            ans = test[i][j];
            responds[s]=ans;//0
             s++; //s==1
               if(i==4){
                sum=0;
                c++; //Burada hep sıfırlamaya çalışıyorum her konuyu
                }
           }
           cout<<"\n";
        }
       cout<<"*************************************************************\n";
       is=0;
            count1= responds[is]+ responds[is+5]+responds[is+10]+responds[is+15]+responds[is+20]+responds[is+25]+ responds[is+30]+responds[is+35]+responds[is+40]+responds[is+45];
            count2= responds[is+1]+ responds[is+6]+responds[is+11]+responds[is+16]+responds[is+21]+responds[is+26]+ responds[is+31]+responds[is+36]+responds[is+41]+responds[is+46];
            count3=responds[is+2]+ responds[is+7]+responds[is+12]+responds[is+17]+responds[is+22]+responds[is+27]+ responds[is+32]+responds[is+37]+responds[is+42]+responds[is+47];
            count4=responds[is+3]+ responds[is+8]+responds[is+13]+responds[is+18]+responds[is+23]+responds[is+28]+ responds[is+33]+responds[is+38]+responds[is+43]+responds[is+48];
            count5= responds[is+4]+ responds[is+9]+responds[is+14]+responds[is+19]+responds[is+24]+responds[is+29]+ responds[is+34]+responds[is+39]+responds[is+44]+responds[is+49];
     double kiyas[5]={count1,count2,count3,count4,count5};

     double acount1=0;
     double acount2=0;
     double acount3=0;
     double acount4=0;
     double acount5=0;

     acount1=count1/10;
     acount2=count2/10;
     acount3=count3/10;
     acount4=count4/10;
     acount5=count5/10;

     double avg[5]={acount1,acount2,acount3,acount4,acount5};

cout<<"\n";
cout<<"Averages of each issues are as belows:\n";
cout<<"Average of Education Issues : "<<avg[0]<<"\n"<<"Average of Global Warming Issues :  "<<avg[1]<<"\n"<<"Average of Economy Issues :  "<<avg[2]<<"\n"<<"Average of Gender Equality Issues :  "<<avg[3]<<"\n"<<"Average of Deforestration Issues :  "<<avg[4]<<"\n"; //P=Person
     cout<<"**************************************************************************\n";


     //Find average and show right side.


        // we used left and right.


     cout<<"\t\t\t#1P.\t#2P.\t#3P.\t#4P.\t#5P.\t#6P.\t#7P.\t#8P.\t#9P.\t#10P.\tAVERAGE\n";
system("color 2F");//Yeşil renk değiştirme
        for(int i=0; i<5; i++){
          cout <<"\t"<<issue[i]<<"\t";//
    for(int k=0; k<10; k++){


        cout << test[i][k]<<"\t";//

}
            cout << avg[i]<<"\t";//

    cout << endl;
 }


 cout<<"\n";
      cout<<"*************************************************************\n";

int min=101;//kıyaslıcaz 101 den en küçüğe kadar
int max=0;
int minIndexOfIssue=0;
int maxIndexOfIssue=0;
        for(a=0; a<5; a++)
        {
            if(kiyas[a]<min){
                min=kiyas[a];
            minIndexOfIssue=a;
            }
            if(kiyas[a]>max)
            {
                max=kiyas[a];
                maxIndexOfIssue=a;
            }
        }
cout<<"The max element is: "<<max<<"in issue= "<<issue[maxIndexOfIssue] <<"\n";

cout<<"The min element is: "<<min<<"in issue= "<<issue[minIndexOfIssue]<<"\n";   //Burada sorunu ve değeri yazdırdım

cout<<"\n";
      cout<<"*************************************************************\n";
}

