#include<bits/stdc++.h>
using namespace std;

void explainPair(){

    pair<int,int>p = {1,3};
    cout<<p.second;
}

void explainVector(){


    vector<int>vec1;

    vector<int>v2(5); //=>{0,0,0,0,0}
    vector<int>v3(5,100); //=>{100,100,100,100,100}

    cout<<v2[2];

    vector<int>::iterator iter = v2.begin();
    vector<int>::iterator iterz = v2.end();

    auto it = vec1.begin();

    for(vector<int>::iterator it = v3.begin(); it != v3.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v3){
        cout<<it<<" ";
    }

    //deletion in vector

    vector<int>arr={10,20,30,40,50};
    
    arr.erase(arr.begin()+1);
    //  arr={10,20,30,40,50};
    arr.erase(arr.begin(),arr.begin()+2); //10 20 is deleted 30 will not [start,end)
    

    for(auto it:arr){
        cout<<it<<endl;
    }
    //  arr={10,20,30,40,50};
    arr.insert(arr.begin()+1,15); // 10 15 20 30 40 50 
    arr.insert(arr.begin()+1,3,12); // 10 12 12 12 15 20 30 40 50

    
    for(auto it:arr){
        cout<<it<<endl;
    }

    arr.size(); //gives size of vector
    arr.pop_back();//removes the last element of the array
    arr.swap(v3); //swaps the complete value of vectors

    arr.clear(); //clears the vector to {}
    arr.empty(); //check if the vector is empty or not returns true or false based on that

}

void explainlist(){
    list<int>ls;

    ls.push_back(4); // inssert 4 at last of list
    ls.emplace_back(7); // inssert 7 at last of list

    ls.push_front(2); //insert in the staring of list
    
    ls.emplace_front(9); //insert in the staring of list

}

void dequeue(){

    deque<int>dq1;

    dq1.push_back(2); // add 2 at last
    dq1.push_back(4); // add 4 at last
    dq1.push_back(7); // add 7 at last
    dq1.emplace_back(6); // add 6 at last
    
    dq1.push_front(1); // add element 1 in starting
    dq1.emplace_front(9); // add 9 in starting

    dq1.pop_back(); // remove last element
    dq1.pop_front(); //remove front element

    for(auto it:dq1){
        cout<<it;
    }

}

void explainstack(){
    //LIFO => Last In First Out 
    // All operations are done in O(1) time complexity
    stack<int>st1;
    stack<int>st2;
    st1.push(5); // add 5 to stack 
    st1.pop();//remove top elemnt from stack
    st1.top(); //gives the top element of stack
    st1.size(); //gives the size of the stack 
    st1.empty(); //checks if stack is empty or not
    st1.swap(st2); // Swap the stack st1 with the st2 


}

void explainqueue(){

    //First In First Out
    queue<int>q;

    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back()+=5;
    cout<<q.back();
    cout<<q.front();

    q.pop(); // deletes the first guy
    //size, swap, empty same as stack

}

void explainPQ(){

    //Also known as Max Heap
    priority_queue<int>pq;
    pq.push(4);
    pq.push(1);
    pq.emplace(7);
    cout<<pq.top();
    pq.empty();
    pq.size();

    //Also Known as Min Heap
    priority_queue<int,vector<int>,greater<int>>min_heap;
    
}

void explainSet(){
     set<int>st;
     st.insert(1);
     st.insert(2);
     st.insert(2);
     st.insert(4);

     auto it = st.find(2); // returns the address of the 2
     auto it = st.find(6); // returns address of position after last element {1,2,4} here next to 4

     st.erase(2); 
     
     int cnt = st.count(4)// if present 1 else 0
 
}

void explainMultiSet(){
    multiset<int>mts;
    mts.insert(1);
    mts.insert(1);
    mts.insert(1);
    //{1,1,1} only sorted not uniquie like set
}

void functionsz(){
    sort(arr.begin(),arr.end()); // iterator {start,end}
    max(20,10); // gives maximum
    min(10,8); //gives minimum 
}

int main(){
    
    explainlist();
    explainstack();
    explainVector();
    explainPair();
}







