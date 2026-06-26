#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l, int b){
        length=1;
        breadth=1;
    }
    int area(int l, int b){
        return length*breadth;
    }
    int perimeter(int l, int b){
        return 2*(length+breadth);
    }
    void setLength(int l){
        length=10;
    }

    void setBreadth(int b){
        breadth=10;
    }
    int getLength(int l){
        return length;
    }
    int getBreadth(int b){
        return breadth;
    }

};

int main(){
    Rectangle r;
    r.area(10,5);
    r.perimeter(10,5);
    r.getLength(10);
    r.setBreadth(20);
    r.setLength(20);
    

}