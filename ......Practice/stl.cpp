#include<bits/stdc++.h>
using namespace std;

void explain_pair(){

    pair<int,int>p={1,2};
    pair<int,pair<int,int>>nestedpair={1,{2,3}};

    cout<<p.first;
    cout<<p.second;

    cout<<nestedpair.first;
    cout<<nestedpair.second.first;
    cout<<nestedpair.second.second;

    pair<int,int>arr[3]={{1,2},{3,4},{5,6}};
    cout<<arr[2].first;

}

void explian_vector(){

    vector<int>v;

    v.push_back(1);
    v.emplace_back(2); //same as push back just faster than push back

    vector<pair<int,int>>vect1;
    vect1.push_back({1,2});
    vect1.push_back({3,4});
    vect1.push_back({5,6});

    vector<int>vect2(5,100); //declare the vector/contaier with 5 instance of 100 ( 100,100,100,100,100)
    vector<int>vect3(5); //declare the vector/contaier with 5 size either 0 or garbage value
    vector<int>vect4(5,20); //declare the vector/contaier with 5 size value 20

    //iterator

    vector<int>::iterator it = vect2.begin(); //stores address of first element

    it++; 

    cout<<endl<<*it<<endl; //give 2nd element (if uses * otherwise points to address) 

    cout<<vect4.size();

    // if don't know datatype can simply use auto
    //methods to iterate over vector

    for(vector<int>::iterator it =vect2.begin();it!=vect2.end();it++){
        cout<<*it<<endl;
    }

    for(auto it= vect2.begin();it!=vect2.end();it++){
        cout<<*it<<endl;
    }

    for(auto it : vect2){
        cout<<it<<endl;
    }

    vect2.erase(vect2.begin()+2); // delete begin 0+2 element at 2nd index
    vect2.erase(vect2.begin()+2,vect2.begin()+4); // delete begin 0+2 element at 2nd index to 3rd index
    //[start,end) end address not included in erase

    vector<int>newvect (6,100); //[100,100,100,100,100,100]

    newvect.insert(newvect.begin(),300); //[300,100,100,100,100,100,100]
    newvect.insert(newvect.begin()+1,2,50); //[300,50,50,100,100,100,100,100,100]

    newvect.size(); // gives back the size of vector
    newvect.pop_back(); //delete last element
    newvect.swap(vect3); //swap values of vector 
    newvect.clear(); // empties a vector
    newvect.empty();// tells if the vector is empty or not

}

void expalin_list(){

    list<int>mylist = {1,2,3,4};
    mylist.push_back(6);

    mylist.push_front(3);

    // gives extra benefit of adding element in front which is very cheap operation as compared to the insert function in vector

    //rest same begin,end swap,clear,insert,empty

}

void explaindequeu(){

    deque<int>mydeque;
    mydeque.push_back(1);
    mydeque.push_front(5);

    mydeque.pop_back();
    mydeque.pop_front();

    mydeque.back();
    mydeque.front();

    //rest same begin end clear insert size swap

}

void explainstack (){

    // only 3 main function in stack push pop top
   stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(4);

    cout<<st.top();

    st.pop();

    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    //size swap empty


}

void explainqueue(){
    queue<int>queue;
    queue.push(4);
    queue.push(2);
    queue.push(6);
    queue.push(8);

    queue.front(); // 4 
    queue.back();//8

    queue.pop(); //4 deletes the first element

    //size swap empty
}

void explainpq(){

priority_queue<int>pq;

pq.push(5);
pq.push(7);
pq.push(8);
pq.push(10);
pq.push(2);

//{10,8,7,5,2}

pq.top(); //10

priority_queue<int,vector<int>,greater<int>>pq2;
pq2.push(5);
pq2.push(7);
pq2.push(8);
pq2.push(10);
pq2.push(2);

//{2,5,7,8,10}

}

void explainset(){
    //unique and in sorted order
    set<int>set;
    set.insert(2);
    set.insert(7);
    set.insert(2); //not push this 2 again
    set.insert(3);

    auto it = set.find(3);

}

void explainmultiset(){

    multiset<int>mt;
    //same as set but can store multiple occurence

    // if uses erase 1 erase all occurence of 1

}

void unordered_set(){
//same as set just unordered ie..not sorted

}

void explainmap(){
    //unique keys in sorted order

    map<int,int>mymap;

    mymap[1]=2;

}

int main(){

    array<int,4>a={1,2,3,4};
    int size = a.size();
    cout<<"Element at 2nd "<<a.at(2)<<endl;
    cout<<"Element at last "<<a.back()<<endl;
    cout<<"Element at first "<<a.front()<<endl;

    explain_pair();
    explian_vector();

}