#include <iostream>
using namespace std;

int main() {
int i, j, key, bucketsize;
int itemcounter=0;

//Receives bucket size
cout<<"Enter bucket size: ";
cin>>bucketsize;

int bucket [bucketsize];

cout<<"\nYou now have a bucket size of "<<bucketsize<<endl;

for(i=0; i< bucketsize;i++){
   cout<<"\nEnter item No."<<1+i<<": ";
   cin>>bucket [i];
   itemcounter++;
   
   //spaces left in bucket
   int remainder = bucketsize - itemcounter ;
   
   if (bucketsize > itemcounter ){
      cout<<"\nYou now have " <<remainder <<" spaces left in your bucket";
   }
}

cout<<"\n\n******FACT CHECKER******\n";
if(bucketsize%2==0)
   cout<<"Your bucket has an even size\n";
else
    cout<<"Your bucket has an odd size\n";
    
for (int i=0;i<bucketsize;i++){
    cout<<bucket[i]<<" ";
}

//Sorting the Array using BubbleSort
int temp;
for (int i=0; i< bucketsize-1;i++){
    for(j=1; j<bucketsize-2; j++){
        if (bucket[i] > bucket[j]){
            temp = bucket[i];
            bucket[i] = bucket[j];
            bucket[j] = temp;
        }
    }
}

cout<<"\nYour sorted list is :";
//Prints sorted Numbers
for (int i=0;i<bucketsize;i++){
    cout<<bucket[i]<<" ";
}

//return type 0
    return 0;
}
