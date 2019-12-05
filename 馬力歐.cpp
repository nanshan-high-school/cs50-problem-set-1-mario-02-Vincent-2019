#include <iostream>
using namespace std;
void display(int num,string stars);
int main() {
  int num;
  cout << "請輸入行數";
  cin >> num;
  for(int i = 1 ; i <= num;i++){
    display(num-i," ");
    display(i ,"#");
    display(2 ," ");
    display(i ,"#");
    cout << endl;
   }
}

void display(int num,string stars){
    for (int i = 0;i < num; i++){
        cout << stars;
    }
}
