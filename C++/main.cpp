//
//  main.cpp
//  havva
//
//  Created by Havva Fatma Özbay on 9.06.2022.
//

#include <iostream>
using namespace std;


/*int calculate(int a, int b){
    
    int result = a+b;
    
    return result;
}
int triple(int a){
    return a*a*a;
}
int main() {
    // insert code here...
    int a;
    int b;
    cin >> a;
    cin >> b;
    if( a !=b ){
    cout << calculate(a,  b);
    }
    else{
        
        cout<< triple(a);
    
    }
}*/


/*int check(int a, int b){


    int result;
    if (a == 30 or b == 30){
        result = 1;
        
    }
    else if (a+b == 30){
        result = 1;
    }
    else{
        result = 0;
    }
    return result;
}

int main(){
    int a, b;
    cin >>a;
    cin >>b;
    cout << check(a, b);
}*/

/*string test (string s){
    if (s.length() >2 && s.substr(0,2) == "if" ){
        return s;
        
    }
    else{
        return  "if" + s;
    }
}
int main (){
    cout << test("if else") <<endl;
    cout << test("else") << endl;
}*/

/*string removeString(string s, int n){
    return s.erase(n,1);
}
int main(){
    cout << removeString("Python", 1);
    cout << removeString("Python", 0);
}*/
/* test(string myString){
    string s = myString.substr(myString.length()-1);
    return s + myString + s;
}
int main(){
    cout << test("RED");
    cout << test("Green");
    cout << test("1");
}*/

/*int multipleOf(int a){
    if (a%3 == 0 || a%7 == 0){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    cout << multipleOf(5)<< endl;
    cout << multipleOf(21)<< endl;
    cout << multipleOf(14)<< endl;
    cout << multipleOf(3)<< endl;


}*/

/* temp(int a , int b){
    if ((a < 0 and b > 100) || (b < 0 and a > 100)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    cout << temp(120 , -1) << endl;
    cout << temp(-1,120) << endl;
    cout << temp(2, 120) << endl;
}*/

/* test(string myString, int n){
    string result = "";
    for(int i =0 ; i< n; i ++){
        result += myString;
    }
    return result;
}
int main(){
    cout << test("JS", 1)<< endl;
    cout << test("JS", 2) << endl;
    
}*/

/* test(string s){
    int counter = 0;
    for (int i = 0; i < s.length()-1; i++){
        if (s[i] == 'a') {
            counter ++;
        }
        if (s.substr(i,2) == "aa" && counter < 2){
            return true;
        }

        
    }
        return false;

    
}

int main(){
    cout << test("caabb") << endl;
    cout << test("babaaaba") << endl;
}
*/

int compare(string s, string str){
    int ctr = 0;
    for (int i = 0 ; i < s.length()-1 ; i++){
        for (int j = 0; j< str.length()-1 ; j ++){
            string first = s.substr(i,2);
            string second = str.substr(j,2);
            if (first == second){
                ctr ++;
            }
        }
    }
    return ctr;
}
int main(){
    cout << compare("abcdefgh", "abijsklm") << endl;
}

