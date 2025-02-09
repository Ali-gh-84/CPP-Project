#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
#include <limits>
using namespace std;
/*
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/
/*
int main(){
 int a=5,b=1;
 cout<<"a="<<a<<endl;
 cout<<"a/b"<<a/b<<endl;
 return 0;
}
*/
/*
int main(){
 string fullname;
 string email;
 cout<<"enter your full name (without space)and email:"<<endl;
 cin>>fullname;
 cin>>email;
 cout<<"hello"<<" "<<fullname<<" "<<"this your email"<<" "<<email<<endl;
 cout<<"welcome to the site"<<endl;
return 0;
}
*/
/*
int main(){
  float radios,masahat,mohit;
  float pi=3.14;
  cout<<"enter radios=";
  cin>>radios;
  masahat=(radios*radios)*pi;
  mohit=(radios*2)*pi;
  cout<<"masahat="<<masahat<<endl
  <<"mohit="<<mohit;
  return 0;
}
*/
/*
int main(){
 float arz,tool,masahat,mohit;
 cout<<"enter arz and tool = " ;
 cin>>arz;
 cin>>tool;
 masahat=(arz*tool);
 mohit=(arz+tool)*2;
 cout<<"masahat is = "<<masahat<<'\t'<<"mohit is="<<mohit<<endl;
 return 0;
}
*/
/*
int main(){
 int num;
 cout<<"enter num=";
 cin>>num;
 if(num<10){
    cout<<"num<10";
 }
else if(num<20){
    cout<<"num<10";
}
else{
    cout<<"num not false";
}

}
*/
/*
int main(){
 int value;
 cout<<"enter value=";
 cin>>value;
 switch(value){
 case 1 :
    cout<<"saturday"<<'\a';
    break;
 case 2 :
     cout<<"sunurday"<<'\a';
     break;
 default:
     cout<<"num not false"<<'\a';
     break;
}
}
*/
/*
int main(){
 int i,sum=0,num,count;
 float ave=0.0;
 cout<<"enter count of num:";
 cin>>count;
 for( int i=1; i<=count; i++){
    cout<<"enter"<<" "<<i<<"number:";
    cin>>num;
    sum+=num;
}
ave = (float) sum/num;
cout<<"ave is :"<<ave<<endl;
return 0;
}
*/
/*
int main(){
int lavarage =225;
for (int i=0; i<lavarage ; i++)
    cout<<i<<":"<<(char)i<<endl;
    return 0;
}
*/
/*
int main(){
int count=0;
cout<<"enter jomleh:";
while(cin.get(),!='\n'){
count++;
cout<<"lenght is :"<<count<<endl;
return 0;
}
}
*/
/*
int main(){
  for( int a=1;a<=5 ; a++){
    cout<<"hello ali"<<'\n';
  }
  return 0;
}
*/
/*
int main(){
    for(int i=1;i<=5;i++){
    for( int j=1;j<=5;j++){
    cout<<"*";
 }
    cout<<endl;
 }
    return 0;
 }
*/
/*
int main(){
   int radios,mohit,hagm;
   float pi=3.14;
   cout<<"enter radios :";
   cin>>radios;
   mohit = (radios*radios)*pi;
   hagm =  ((radios*radios)*pi)*3/4;
   cout<<mohit<<" "<<hagm;
   return 0;
}
*/
/*
int main(){
  cout<<endl;
    for( int i=1;i<=10;i++){
    for( int j=1;j<=10;j++){
       cout<<"\t"<<i*j;
    }
  cout<<endl;
    }
    }
*/
/*
int main(){
  int word=0,sentence=0,char=0;
  char ch;
  cout<<"date:";
  while( (ch = cin.get()) !='\n'){
     switch(ch){
       case'-';
       case':';
       case',';
     sentence++;
     char++;
     break;
       default:
        char++;
  }
  }
cout<<"char is:"<<char<<endl
"sentence is:"<<sentence<<endl
"word is:"<<word;
return 0;
}
*/
/*
void  a (string name);
int main(){
 a("ali");
 a("abbas");
 a("hosein");
  return 0;
}
void a(string name){
  cout<<"hi"<<" "<<name<<" "<<"how are you?"<<endl;
}
*/
/*
int time(int,int,int);
int main(){
    int hour,mint,sec;
    cout<<"enter time : ";
    cin>>hour>>mint>>sec;
    cout<<"total secs time are :"<<time(hour,mint,sec)<<endl;
    return 0;
}
int time(int hour,int mint,int sec){
    return ( (hour*3600)+ (mint*60) + sec);
}
*/
/*
void findmax (int,int,int);
int main(){
    int a,b,c;
    cout<<"enter there value "<<endl;
    cin>>a>>b>>c;
    findmax(a,b,c);
    return 0;
}
void findmax (int a,int b,int c){
    int maxvalue;
    if(a>b){
        if(a>c){
            maxvalue = a;
        }
    } else{if(b>c){
            maxvalue = b;
    }
    else{ maxvalue = c ;}
    }
    cout<<"max value is :"<<maxvalue<<endl;
}
*/
/*
int main(){
  int a = 5;
  int *b ;
  b =&a;
  cout<<*b;
}
*/
/*
void swap( int&x1, int&x2){
  int temp;
  temp=x1;
  x1=x2;
  x2=temp;
}9
int main(){
  int a,b;
  cout<<"enter double value :";
  cin>>a>>b;
  cout<<"before swapping:"<<endl
  <<"a="<<a<<endl
  <<"b="<<b<<endl;
    swap(a,b);
    cout<<"after swapping :"<<endl
    <<"a="<<a<<endl
    <<"b="<<b<<endl;
  return 0;
}
*/
/*
int fact (int n){
    if(n>1){
        return n*fact(n-1);
    } else {
        return 1;
    }
}
int main(){
    int value;
    cout<<"enter value :"<<endl;
    cin>>value;
    cout<<"fact num"<<" "<<value<<" "<<"is :"<<fact(value);
    return 0;
}
*/
/*
inline int min( int a , int b){
    if( a<b ){
        return a;
    }   else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"enter two value:";
    cin>>a>>b;
    cout<<"min num is: "<<min (a,b);
    return 0;
}
*/
/*
 int num(int);
 float num(float);
int main(){
        int a=15;
        float b=2.8;
        cout<<num (a)<<endl
        <<num (b) <<endl;
        return 0;
}
int num(int value){
    cout<<"in function:";
    return(value*value);
}
float num(float value){
    cout<<"in function:";
    return(value*value);
}
*/
/*
int main(){
    for(int i=1;i<=8;i++){
        cout<<"pow "<<i<<" is :"<<pow(i,2)<<endl;
    }
}
*/
/*
int main (){
    cout<<sqrt(16)<<endl
    <<abs(-45)<<endl
    <<log10(1000)<<endl
    <<sin(45);
}
*/
/*
int digi(int num , int digit){
    int count=0;
    while(num){
        if(num%10==digit){
            count++;
        }
        num /=10;
    }
    return count;
}
int main(){
    int x;
    cout<<"enter num : ";
    cin>>x;
    for(int i=0;i<=9;i++){
        cout<<i<<":"<<digi(x,i)<<endl;
    }
    return 0;
}
*/
/*
void write (int){
    if(x<10){
        cout<<x;
    }else{
     write(x/10);
     cout<<x%10<<endl;
    }
}
int main(){
    int x;
    cout<<"enter num :";
    cin>>x;
    write(x)
    return 0;
}
*/
/*
int main(){
    int hour=8 , minute=6;
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute;
}
*/
/*
int main(){
    srand(time(0));
    cout<<rand()%100;
}
*/

/*
int main(){
    const int array_size = 10;
    int arr[array_size] , odd = 0 , even = 0  ;
    for(int i=1 ; i<=array_size ; i++){
        cout<<"enter value of ["<< i << "]:";
        cin>>arr[i];
        if(arr[i] % 2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"even count are :"<<even<<endl
        <<"odd count are :"<<odd<<endl;

        return 0;
}
*/
/*
int main(){
    const int array_size = 10;
    int arr[array_size] , positive = 0 , negative = 0 , zero = 0 ;
    for(int i=1 ; i<=array_size ; i++){
        cout<<"enter num of ["<< i <<"] :" ;
        cin>>arr[i];
        if(arr[i] < 0 ){
            negative++;
        }
        else if(arr[i] > 0){
            positive++;
        }
        else {
            zero++;
        }
    }
        cout<<"positive count are :"<<positive<<endl
            <<"negative count are :"<<negative<<endl
            <<"zero count are :"<<zero<<endl;
            return 0;
}
*/
/*
int main(){
    int a = 10;
    int arr[a] , b;
    for(int i = 1 ; i<=a ; i++){
        cout<<"enter num of ["<< i <<"] :";
        cin>>arr[i];
    }
    for(int i = 1 ; i<=a ; i++){
         b = arr[i]*100;
         cout<< b <<endl;
    }
    return 0;
}
*/
/*
int main(){
    int a = 5 ;
    int arr[a] = {45,25,87,98,95};
    int max = 0;
    for(int i=0 ; i<a ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"max is :" <<max;
    return 0;
}
*/
/*
int main(){
    int a = 5 ;
    int arr[a];
    int max = 0;
    for(int i=0 ; i<a ; i++){
            cout<<"enter   5  num :";
            cin>>arr[i];
            if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"max is :" <<max;
    return 0;
}
*/
/*
bool isprime (int x){
    if(x==0||x==1){
        return false;
    } else{
        for(int i=2 ; i<(x/2)+1 ; i++){
            if(x%i == 0){
                return false;
            }
        }
    }
        return true;
}
void print_array (int [] , int arr_size){
    cout<<endl<<"your data num :";
    for(int i=0 ; i<arr_size ; i++){
        cout<<arr[i];
        if( i<arr_size -1){
            cout<<" , ";
        }
    }
}
int main(){
    int num , list[50] , index = 0;
    cout<<"enter of num :";
    cin>>num;
    for(int i=2 ; i<num ; i++){
        if(is prime(i)){
            list index = 1;
            index++;
        }
    }
    printarray(list , index);
        return 0;
}
*/
/*
int main(){
    int row , col;
    cout<<"enter row & col : ";
    cin>>row>>col;
    int arr[row][col];
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<row ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout<<arr[i][j];
            if(j<col - 1){
                cout<<" , ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
int main(){
    int table[10][10] , i , j;
    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
           table[i][j] = (i+1)*(j+1);
           cout<<table[i][j];
           if( j<10-1 ){
            cout<<"\t";
           }
            cout<<endl;
        }
    }
    return 0;
}
*/
/*
int main(){
    int a[2][2] , sum = 0 , i , j  ;
    double avg;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<"enter a row & col :";
            cin>>a[i][j];
            sum += a[i][j];
        }
        avg = sum / 4;
        cout<<sum<<" . "<<avg;
    }
          return 0;
}
*/
/*
int main(){
    int arr[2][2][2] , i , j , maximom ;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
                for(int m=0 ; m<2 ; m++){
            cout<<"enter a row & col :";
            cin>>arr[i][j][m];
            if( arr[i][j][m] > maximom){
                maximom = arr[i][j][m];
            }
        }
    }
         cout<<maximom;
    }
    return 0;
}
*/
/*
int main(){
    int a[2][2] , b[2][2] , c , i , j ;
    for( int i=0 ; i<2 ; i++){
        for( int j=0 ; j<2 ; j++){
            cout<<"enter a row & col :";
            cin>>a[i][j]>>b[i][j];
            c = a[i][j] * b[i][j];
        }
        cout<<c;
    }
      return 0;
}
*/
/*
int main(){
    const int array_size = 10;
    int arr[array_size]={5,14,7,1,4,-9,6,3,0,2};
    int temp;
    for(int i=0 ; i<array_size ; i++){
        for(int j=0 ; j<array_size - 1 ; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int j=0 ; j<array_size ; j++){
    cout<<arr[j]<<"\t";
}
}
*/
/*
int search(int arr[] , int n , int num){
    for(int i=0 ; i<n ; i++)
        if(arr[i] == num)
            return i;

     return -1;
}
int main(){
    int arr[] = {2,5,7,9,8,1};
    int num = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int resault = search( arr ,  n ,  num);
    if(resault == -1){
    cout<<"element is not exist ";}
    else{
     cout<<"element is exist ";
}
}
*/
/*
int main(){
    int *ptr1 , *ptr2 , x , y;
    x = 50;
    y = 100;
    ptr1 =&x;
    ptr2 =&y;
    cout<<"ptr1 is :"<<*ptr1<<endl
        <<"ptr2 is :"<<*ptr2<<endl;
       if( ptr1 == ptr2) {
        cout<<"equal ";
       }else{
           cout<<"not equal";
       }
}
*/
/*
int main(){
    int arr_size = 5;
    int arr[arr_size] = {1,2,3,4,5};
    for(int i=0 ; i<arr_size ; i++){
        cout<<"arr ["<<i<<"] :"<<arr[i]<<endl;}
        int *ptr;
        ptr = &arr[1];
        cout<<"value is: "<< *ptr <<endl;
        }
*/
/*
int main(){
    int *ptr = new int[5];
    if(!ptr){
        cout<<"alloction failare";
        exit(1);
    }
    for(int i=0 ; i<5 ; i++){
        cout<<"for ["<<i<<"] :" ;
        cin>>*(ptr+i); }
        cout<<"yout data :";
        for(int i=0 ; i<5 ; i++){
            cout<<*(ptr+i);
            if(i+1<5)
                cout<<" , ";

    }
    delete [] ptr;
    return 0;
}
*/
/*
int main(){
    int *x , *y , s;
    x = new int;
    if(!x){
        cout<<"alloction failare";
        exit(1);
    }
    y = new int;
    if(!y){
        cout<<"alloction failare";
        exit(1);
    }
    cout<<"enter 2 integer :";
    cin>>*x>>*y;
    s = *x + *y;
    cout<<"num is :"<<s<<endl;
    delete x;
    delete y;
    return 0;
}
*/
/*
int main(){
    string a = " Ali ";
    string b = " ghafari ";
    string c = a + b;
    cout<<"full name is :"<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
*/
/*
int main(){
    string a = "10";
    string b = "20";
    string c = a + b;
    cout<<"full name is :"<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
*//*
int main(){
    string a ="hello ali , how are you ?";
    cout<<"index [4] => "<<a[4]<<endl;
    int start = 0 , end = 8;
    for( start; start<end; start++){
        cout<<a[start];
    }
    return 0;
}
*//*
int main(){
    string a , b , c;
    cout<<"enter first name :";
    cin>>a;
    cout<<"enter last name :";
    cin>>b;
    cout<<"enter gmail :";
    cin>>c;
    string fullname = a + " " + b;
    cout<<" full name is : "<< fullname<<endl<< " gmail is :" << c ;
    return 0;
}
*/
/*
int main(){
    string str ;
    getline(cin , str);
    cout<<str;
    return 0;
}
*//*
int main(){
    string str = "hello ali deweloper";
    cout<<str.size();
    return 0;
}
*//*
int main(){
    string str = "hello ali";
    string str2 = "ali";
    int ab = str.find(str2);
    cout<<ab;
}
*//*
int main(){
    string str = "hello ali";
    string str2 = "hello mammad";
    if(str.compare(str.size()-4,4,"hello")==0)
        cout<<str<<"yes"<<str2;
}
*//*
int main(){
    string str="hello world";
    string str2=str.substr(4,8);
    cout<<str2;
}
*/
/*
int main(){
    int a;
    string str;
    while(true){
    cout<<"enter a string value : ";
    getline(cin,str);
    cout<<"enter a num value :";
    cin>>a;
    cout<<"string is : " <<str<<" , "<<"num value is :" <<a<<endl;
    cin.ignore(numeric_limits<streamsize> :: max() , '\n');
}
}*//*
void upper(string& str);
bool isupper(string str);
int main(){
    string str = "a,b,c,d";
    upper();
    cout<<"bool alpha :"<<str<<endl<<isupper();
}
void lower(string& str){
    for(int i=0 ; i<str.size() ; i++)
        if(str[i]>=65 ; str[i]<=90)
    str[i] += 32;}
bool islower(string str){
    for(int i=0 ; i<str.size() ; i++)
        if(str[i]>=65 ; str[i]<=90)
            return false;
        return true;
}*//*
struct sample{
    int id;
    char name[50];
}; //test = {1 , "ali"}//;
int main(){
   // sample test = {1 , "ali"};//
    cout<<test.name;
}
*//*
struct sample{
    int id;
    char name[50];
};
int main(){
    sample test;
    cout<<"enter a name :";
    cin.getline(test.name , 50);
    cout<<"enter a id :";
    cin>>test.id;
    cout<<"name is :"<<test.name<<" , "<<"id is :"<<test.id;
    }
*//*
struct sample{
    int id;
    char name[50];
    void show(){
        cout<<"name is :"<<name<<" , "<<"id is :"<<id<<endl;
    }
};
int main(){
    sample test[5];
    for(int i=0 ; i<5 ; i++){
        cout<<"enter a name :";
        cin.getline(test[i].name , 50);
        test[i].id = i+1;
    }
     for(int i=0 ; i<5 ; i++)
        test[i].show();
}*//*
struct person {
private:
    void set_height(int value);
    void get_height();
    int height = 10;
};
void person::set_height(int value){
    height = value;
}
void person::get_height(){
    return height;
}
int main(){
    person a;
    cout<<a.get_height;
}
*//*
struct p{
    string str;
};
int main(){
    p a = {"ali"};
    p *ptr = &a;
    cout<<ptr->str<<" "<<(*ptr).str;
}*//*
struct A{
    int a = 10;
};
struct B{
    int b = 20;
    A sample;
};
int main(){
    B test = {40 , {60}};
    cout<<"a :"<<test.sample.a<<endl
    <<"b :"<<test.b;
}*//*
struct info{
    string name;
    string from;
    string to;
    int id;
};*//*
struct info_airplane{
    string model = "air line iran" ;
    int price = 25;
} ;
int main(){
    info_airplane test;
    int x   ;  string arr[5];
    cout<<"choose ticcket of airplane  one or train  two :";
    cin>>x;
    if( x == 1 ){
    cout<< "model of airplane :" << test.model << endl
        <<"price of airplane is :"<<test.price<<endl;
} else if( x == 2 ){
    cout<<"you choose train ticket!"<<endl;
} else{ cout<<"not found"<<endl;
}
    cout<<"---------------------------"<<endl;

    for(int i=0 ; i<5 ; i++){
        cout << "enter name and destination  ["<<i<<"] :"<<endl;
       cin>>arr[i]>>arr[i];

    }
         for(int i=0 ; i<5 ; i++){
        cout<<"name is :"<<arr[i]<<endl<<"destination is :"<<arr[i]<<endl;
         }
        return 0;
    }
*//*
int main(){
    time_t start_time;
    time(&start_time);
    tm *it;
    it = localtime(&start_time);
    cout<< "time is :"<< it->tm_hour<<":"<<it->tm_min<<":"<<it->tm_sec<<endl;
    cout<< "date is : "<<it->tm_year+1900<<'/'<<it->tm_mon+1<<'/'<<it->tm_mday;
}
*//*
int main(){
time_t date;
time(&date);
tm *it = localtime(&date);
cout<<asctime(it);
}*//*
struct a{
    int id;
    char name;
};
int main(){
    int arr[] = {1,2,2,3,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<n;
}
*//*
template <typename A>
    A maximum(A x , A y){
        return x>y ? x:y;
}
int main(){
    cout<<maximum(7 , 9)<<endl
        <<maximum(5.5 , 9.5)<<endl
            <<maximum('a' , 'c');
}
*//*
template <typename A>
void sorting(A arr[] , int size){
    A temp;
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size-1 ; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int A[5] = {5,9,1,7,3};
    sorting(A , 5);
    for(int i=0 ; i<5 ; i++){
         cout<<A[i]<<"  " ;
    }
    cout<<endl;

    string str[] = {"a","v","f"};
    sorting(str , 3);
    for(int i=0 ; i<3 ; i++){
         cout<<str[i]<<"  " ;
}
}
*//*
class circle{
private:
    int radios;
public:
    void hesab();
    void print();
};
void circle::hesab(){
    cout<<"enter radios : ";
    cin>>radios;
}
void circle::print(){
    cout<<"area :"<<radios * radios * 3.14;
}
int main(){
    circle a;
    a.hesab();
    a.print();
}
*//*
class office{
private:
    int hour;
    int many_hour;
    int total_mony;
    string name;
public:
    void get_info();
    void totalmany();
    void print();
};
void office::get_info(){
    cout<<"what is your name & hour & many_hour : ";
    cin>>name>>hour>>many_hour;
}
void office::totalmany(){
    total_mony = hour * many_hour;
}
void office::print(){
    cout<<endl<<"your name : "<<name
        <<endl<<"your hour : "<<hour
        <<endl<<"your many_hour : "<<many_hour
        <<endl<<"total mony : "<<total_mony;
}
int main(){
    office a , b;

    a.get_info();
    b.get_info();

    a.totalmany();
    b.totalmany();

    a.print();
    b.print();
}
*//*
class meclass{
    int a;
    int b;
public:
    meclass(int x , int y);
    void print();
};
meclass::meclass(int x , int y){
    a = x ;
    b = y;
}
void meclass::print(){
    cout<<"a :"<<a<<endl
        <<"b :"<<b;
}
int main(){
    meclass c(10 , 5);
    c.print();
}*/
