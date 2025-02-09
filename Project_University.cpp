//#include <iostream>
//using namespace std;
//
//int main() {
//    float Id;
//    float Ap;
//
//    cout << "Enter Initial capital : ";
//    cin >> Id;
//    cout << "Enter Annual profit: ";
//    cin >> Ap;
//
//    for (int i = 1; i <= 4; i++) {
//        Id += (Ap / 100.0) * Id;
//        cout <<"Year -> "<< i << "\t" << Id << endl;
//    }
//    return 0;
//}

//************************************************************************

//#include <iostream>
//using namespace std;
//
//int main() {
//    float a, b, c;
//    cout << "Enter number one: ";
//    cin >> a;
//    cout << "Enter number two: ";
//    cin >> b;
//    cout << "Enter number three: ";
//    cin >> c;
//    float min1, min2, min3;
//    if (a <= b && a <= c) {
//        min1 = a;
//        if (b <= c) {
//            min2 = b;
//            min3 = c;
//        } else {
//            min2 = c;
//            min3 = b;
//        }
//    } else if (b <= a && b <= c) {
//        min1 = b;
//        if (a <= c) {
//            min2 = a;
//            min3 = c;
//        } else {
//            min2 = c;
//            min3 = a;
//        }
//    } else {
//        min1 = c;
//        if (a <= b) {
//            min2 = a;
//            min3 = b;
//        } else {
//            min2 = b;
//            min3 = a;
//        }
//    }
//    cout << "Numbers order: " << min1 << ", " << min2 << ", " << min3 << endl;
//    return 0;
//}


//******************************************************************************
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//
//    cout << "Enter a number (1-7): ";
//    cin >> n;
//
//    switch (n) {
//        case 1:
//            cout << "Saturday";
//            break;
//        case 2:
//            cout << "Sunday";
//            break;
//        case 3:
//            cout << "Monday";
//            break;
//        case 4:
//            cout << "Tuesday";
//            break;
//        case 5:
//            cout << "Wednesday";
//            break;
//        case 6:
//            cout << "Thursday";
//            break;
//        case 7:
//            cout << "Friday";
//            break;
//        default:
//            cout << "Number is not valid!";
//    }
//    return 0;
//}

//*****************************************************************************************
////
//#include <iostream>
//using namespace std;
//
//int main() {
//    int salary;
//    int tax;
//
//    cout << "enter salary employee : ";
//    cin >> salary;
//
//    if(salary > 0) {
//
//        if (salary <= 1000000) {
//            tax = 0;
//        } else if (salary > 1000000 && salary <= 2000000) {
//            tax = salary * 0.10;
//        } else if (salary > 2000000) {
//            tax = salary * 0.15;
//        }
//        int total = salary - tax;
//        cout << "tax employee is : " << total;
//    }else {
//        cout << "enter true number!";
//    }
//    return 0;
//}

//*************************************************************************************

//
//#include <iostream>
//using namespace std;
//
//int main() {
//    float crowd;
//    float growth;
//
//    cout << "enter crowd: ";
//    cin >> crowd;
//    cout << "enter population growth rate : ";
//    cin >> growth;
//
//    for (int i = 1; i <= 5; i++) {
//        float total = crowd * (growth / 100);
//        crowd += total;
//        cout << "Population year " << i << " is : " << crowd << endl;
//    }
//    return 0;
//}

//*************************************************************************************
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int a , b , c;
//
//    cout << "enter a : ";
//    cin >> a;
//    cout << "enter b : ";
//    cin >> b;
//
//    c = (a * 100) / b;
//
//    cout << c;
//
//}

//*************************************************************************************
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    float min;
//
//    cout << "Enter size of number: ";
//    cin >> n;
//
//    vector<int> numbers(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Enter number " << (i + 1) << ": ";
//        cin >> numbers[i];
//    }
//
//    min = numbers[0];
//    for (int j = 0; j < n; j++) {
//        if (numbers[j] < min) {
//            min = numbers[j];
//        }
//    }
//
//    cout << "Minimum number is: " << min << endl;
//    return 0;
//}


//*************************************************************************************

//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int count = 0;
//    int number;
//
//    for (int i = 0 ; i < 10 ; i++){
//        cout << "enter number " << (i+1) << " : ";
//        cin >> number;
//        if (number % 2 == 0){
//            count ++;
//        }
//    }
//    cout << "count of even number is : " << count;
//    return 0;
//}

//*************************************************************************************

//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int fact = 1;
//    int number;
//
//    cout << "enter number for calculate factorial : ";
//    cin >> number;
//
//    if (number == 0){
//        cout << number << " !  =  " << 1;
//        exit(1);
//    }else if (number < 0){
//        cout << "number is negative !";
//        exit(1);
//    }else{
//        for(int i = number ; i > 0 ; i--){
//            fact *= i;
//        }
//    }
//    cout << "factorial number is : " << fact;
//    return 0;
//}
//
//
//*************************************************************************************

//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int arr [10];
//
//    for(int i = 0 ; i < 10 ; i++){
//        cout << "enter number " << (i+1) << " : ";
//        cin >> arr[i];
//    }
//
//    cout << "number multiple 2 as follows : " << endl;
//
//    for(int j = 0 ; j < 10 ; j++){
//        cout << arr[j] * 2 << "  ,  ";
//    }
//    return 0;
//}
//
//*************************************************************************************
//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int arr [10];
//    int count = 0;
//
//    for(int i = 0 ; i < 10 ; i++){
//        cout << "enter number " << (i+1) << " : ";
//        cin >> arr[i];
//    }
//
//    float max = arr[0];
//    int home_max = 0;
//    float min = arr[0];
//    int home_min = 0;
//
//    for(int i = 0 ; i < 10 ; i++){
//        if(arr[i] > max){
//            max = arr[i];
//            home_max = i;
//        }
//    }
//    cout << "maximum number is : " << max << endl
//         <<"index maximum number is : " << home_max << endl;
//
//    for(int j = 0 ; j < 10 ; j++){
//        if(arr[j] < min){
//            min = arr[j];
//            home_min = j;
//        }
//    }
//    cout << "minimum number is : " << min << endl
//         <<"index minimum number is : " << home_min << endl;
//
//    for(int k = 0 ; k < 10 ; k++){
//        if(arr[k] > 12 && arr[k] < 20){
//            count ++;
//        }
//    }
//    cout << "count of number between 12 and 20 is : " << count << endl;
//
//    cout << "reverse number is : " << endl;
//
//    for(int l = 9 ; l >= 0 ; l--){
//        cout << arr[l] << "  ,  ";
//    }
//    return 0;
//}
//

//*************************************************************************************

//#include <iostream>
//using namespace std;
//
//int fact(int z) {
//    int result = 1;
//    for (int i = 1; i <= z; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int power(int a, int b){
//    int total = 1;
//    for (int i = 0; i < b; i++) {
//        total *= a;
//    }
//    return total;
//}
//
//int calculate(int x, int y){
//    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
//    t1 = fact(x) + fact(y);
//    t2 = x + y;
//    t3 = fact(t2);
//    t4 = power(t1,t3); // *
//    t5 = x + y;
//    t6 = power(t5, fact(x)); // *
//    t7 = t4 / t6;
//
//    return t7;
//}
//
//int main() {
//    int n, a, b, x, y;
//    cout << "Enter a number : ";
//    cin >> n;
//    if (n == 0){
//        cout << "factorial is : 1 ";
//    }else if (n < 0){
//        cout << "number is negative.";
//    }else {
//        cout << "factorial number is : " << fact(n);
//    }
//
//    cout << endl;
//
//    cout << "enter one number for calculate power : ";
//    cin >> a;
//    cout << "enter two number for claculate power : ";
//    cin >> b;
//
//    cout << "power numbers are : " << power(a,b) << endl;
//
//    cout << "enter one number :  ";
//    cin >> x;
//    cout << "enter two number : ";
//    cin >> y;
//
//    cout << "calculate numbers are : " << calculate(x,y) << endl;
//}

//*************************************************************************************

//#include <iostream>
//using namespace std;
//
//int power(int a, int b){
//    int total = 1;
//    for (int i = 0; i < b; i++) {
//        total *= a;
//    }
//    return total;
//}
//
//int main(){
//
//    int a, b = 0;
//
//    cout << "enter a number : ";
//    cin >> a;
//
//    for(int i = 1 ; i <= a ; i++){
//        b  = b + power(i,i);
//    }
//    cout << "result is : " << b;
//    return 0;
//}
//
//*************************************************************************************

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main(){
//
//    int total = 0, number;
//
//    for (int i = 0; i < 10 ; i++) {
//        cout << "enter number " << (i+1) << " : ";
//        cin >> number;
//        total += number;
//    }
//    cout << "result numbers is : " << total << endl << "sqrt numbers are : " << sqrt(total);
//}
//
//*************************************************************************************
