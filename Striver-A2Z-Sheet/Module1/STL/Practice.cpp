#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<"Sparsh"<<"\n";
}

void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first;

    pair<int,pair<int,int>>p1={1,{2,3}};
    cout<<p1.second.first;

    pair<int,int> arr[]={{1,3},{4,5},{6,7}};

}

void explainvector(){
    vector<int>v;
    v.push_back(5);
    v.emplace_back(8);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(5,10);

    vector<int>v1(5,100); // {100,100,100,100,100}
    vector<int>v2(5); // {0,0,0,0,0} or may be garbage value 5 instances
    vector<int> newvec(v1); // copy data of v1

    cout<<v1[1];

    vector<int>::iterator it= v.begin();
    it++;
    cout<<*(it)<<endl;

    cout<<"v.back"<<v1.back();

    auto iter= v.begin();
    v.end();

    for(auto it:v){
        cout<<it<<" ";
    }

    v1.erase(v1.begin());
    v1.erase(v1.begin(),v1.begin()+2); //[start,end)]

    v1.size();
    v2.pop_back();
    v1.swap(v2);
    v1.clear();
    v1.empty();

}

void explainList(){

    list<int>ls;
    ls.push_front(5);
    ls.push_back(10);
    ls.pop_front();
    // erase,insert,size,swap,clear same as vector
    
}

void explainDequeue(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rest same as vector and list
    //begin,end,rbegin,rend,clear,insert,size,swap
}

void explainStack(){

     stack<int>st;
     st.push(5);
     st.emplace(54);
     st.top();
     st.pop();
     st.size();
     st.empty();
}

void explainQueue(){
    queue<int>q;
    q.push(4);
    q.emplace(8);
    //{4,8}
    q.back()+=4; //{4,12}
    q.front(); //4 first element

    q.pop(); // removes first element 4    {12}
    q.size();
    q.swap(q);

}

void explainPriorityQueue(){
    priority_queue<int>pq;
    pq.push(8);
    pq.push(5);
    pq.push(4);
    pq.push(2);
    pq.push(10);

    // {10,8,5,4,2} in priority ordefr

    pq.pop(); // remove 10 { 8,5,4,2}
    pq.top(); // 8 

    //Minimum Priority Queue

    priority_queue<int,vector<int>,greater<int>>minPQ;
    minPQ.push(1);
    minPQ.push(4);
    minPQ.push(9);
    minPQ.push(6);
    minPQ.push(7);
    minPQ.push(3);

    // { 1,3,4,6,7,9}
    minPQ.top(); // 1 

}

void explainSet(){
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3);; // {1,2,3,4}

    
    auto it = st.find(3);
    auto it1 = st.find(6); // if not present return set.end() iteratot position

    st.erase(5); // takes logaritmic time

    st.count(2);

    auto it4 = st.find(2);
    st.erase(it); // it takes constant time

    auto it2 = st.lower_bound(2);
    auto it3 = st.upper_bound(5);

}

void explainMultiset(){
    //Everything Same as Set but
    //can store duplicate elements also in sorted manner

    multiset<int>ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1); //{1,1,1}

    ms.erase(1); // delete all 1's

    int cnt =  ms.count(1);

    // to erase single 1
    ms.erase(ms.find(1));

    auto it = ms.find(1);
    auto it1 = next(it,2);

    ms.erase(it,it1);

}

void explainUnorderedSet(){
    //lower and uppeer bound not work
    //stores uniques but not in sorted order
    unordered_set<int>st;

}


void explainMap(){
    map<int,int>mpp;
    mpp[1]=2;
    mpp.insert({2,3});
    mpp.emplace(5,4);

    map<pair<int,int>,int>mp;
    mp[{1,2}]=3;
    mp.insert({{1,2},4});

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[2];
    cout<<mpp[4]; // null or 0 since key doesn't exist

    auto it = mp.find({1,2});
    cout << it->first.first << it->first.second < it->second;
}
 
void explainExTRA(){
    vector<int>v;
    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),greater<int>);

}


int sum(int a , int b){
    return a + b;
}

int main(){

int a,b;
cin>>a>>b;
print();
int res=sum(a,b);
cout<<res;
explainPair();
explainvector();



}