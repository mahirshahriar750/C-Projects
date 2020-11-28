#include <iostream>
using namespace std;








int main()
{

int starcount;
int spacecount;
int numberofrows;
int a;
int b;

cout << " How many rows are there?" << endl;
cin  >> numberofrows;

a = 0;
b = 0;



for (int i = 1; i < (numberofrows/2)+(numberofrows%2); i++){

    starcount = (2*i) - 1;
    spacecount = numberofrows - starcount;

        while(a < spacecount){
            cout << " ";
            a++;
        }
        a = 0;
        while(b < starcount){
            cout << "*";
            b++;
        }
        b = 0;
        cout << endl;
        numberofrows++;
}



a=0;
b=0;


for (int i = ((numberofrows/2) + (numberofrows%2)); i >= 1; i--){

    starcount = (2*i) - 1;
    spacecount = numberofrows - starcount;



        while(a < spacecount){
            cout << " ";
            a++;
        }
        a = 0;

        while(b < starcount){
            cout << "*";
            b++;
        }
        b = 0;

        cout << endl;

        numberofrows--;

}
















    return 0;


}
