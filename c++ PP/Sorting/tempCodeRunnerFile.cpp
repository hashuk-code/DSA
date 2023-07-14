struct triplet{
    int element;
    int frequency;
    int index;
};

bool cmp(triplet v1,triplet v2){
     
     if(v1.frequency!=v2.frequency){
         return v1.frequency>v2.frequency;
     }
      if(v1.element!=v2.element){
          return v1.element<v2.element;
      }
      return v1.index<v2.index;

}



int main(){

    
    vector<int> vec{9,9,9,2,5};
    int freq[101]={0};
    for(int i=0;i<vec.size();i++){
        freq[vec[i]]++;
    }


    vector<triplet> arr;
     for(int i=0;i<vec.size();i++){
        triplet t;
        t.element=vec[i];
        t.frequency=freq[vec[i]];
        t.index=i;
        arr.push_back(t);

    }

    sort(arr.begin(),arr.end(),cmp);

    for(int i=0;i<arr.size();i++){
            cout<<arr[i].element;
 
        }

}