#include<bits/stdc++.h>

using namespace std;

int arr[100000005],temp[100000005],n;
void bubble_sort_Ascending(int arr[], int n)
{
    for(int i=1 ; i<=n-1;i++)
    {
        for(int j =1 ; j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
void bubble_sort_Descending(int arr[], int n)
{
    for(int i=1 ; i<=n-1;i++)
    {
        for(int j =1 ; j<=n-i;j++)
        {
            if(arr[j]<arr[j+1])swap(arr[j],arr[j+1]);
        }
    }

}
void Merge_Ascending(int arr[],int lo, int mid, int hi)
{
    int k =1,i=lo,j=mid+1;

    while(i<=mid&&j<=hi)
    {
        if(arr[i]<arr[j]) temp[k++] = arr[i++];  // here '>' descending  ||  '<' ascending

        else temp [k++] = arr[j++] ;

    }
    while(i<=mid) temp[k++] = arr[i++];
    while(j<=hi)  temp[k++] = arr[j++];
    for(i =lo,k=1 ; i<=hi; i++,k++)
        arr[i] = temp[k];
}

void Merge_Descending(int arr[],int lo, int mid, int hi)
{
    int k =1,i=lo,j=mid+1;

    while(i<=mid&&j<=hi)
    {
        if(arr[i]>arr[j]) temp[k++] = arr[i++];  // here '>' descending  ||  '<' ascending

        else temp [k++] = arr[j++] ;

    }
    while(i<=mid) temp[k++] = arr[i++];
    while(j<=hi)  temp[k++] = arr[j++];
    for(i =lo,k=1 ; i<=hi; i++,k++)
        arr[i] = temp[k];
}

void merge_sort_Ascending(int arr[],int lo,int hi)
{
    if (lo==hi)return;
    int mid = (lo+hi)/2;
    merge_sort_Ascending(arr,lo,mid);
    merge_sort_Ascending(arr,mid+1,hi);
    Merge_Ascending(arr,lo,mid,hi);
}

void merge_sort_Descending(int arr[],int lo,int hi)
{
    if (lo==hi)return;
    int mid = (lo+hi)/2;
    merge_sort_Descending(arr,lo,mid);
    merge_sort_Descending(arr,mid+1,hi);
    Merge_Descending(arr,lo,mid,hi);
}

int partitionOne(int array[], int low, int high) {       //for Ascending


  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(array[i], array[j]);
    }
  }

  swap(array[i + 1], array[high]);

  return (i + 1);
}



void quickSort_Ascending(int array[], int low, int high) {
  if (low < high) {


    int pi = partitionOne(array, low, high);


    quickSort_Ascending(array, low, pi - 1);


    quickSort_Ascending(array, pi + 1, high);
  }
}


int partitionTwo(int array[], int low, int high) {       //for Descending


  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] >= pivot) {
      i++;
      swap(array[i], array[j]);
    }
  }

  swap(array[i + 1], array[high]);

  return (i + 1);
}



void quickSort_Descending(int array[], int low, int high) {
  if (low < high) {


    int pi = partitionTwo(array, low, high);


    quickSort_Descending(array, low, pi - 1);


    quickSort_Descending(array, pi + 1, high);
  }
}






             // ****************************************   BUBBLE SORT ***********************************************



void inputFirst_Ascending_Bubble()
{

    freopen("BubbleSort_Ascending.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t1 = clock();
    bubble_sort_Ascending(arr,n);
    clock_t t2 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
    double tOne = (double) (t2-t1) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< tOne << endl ;
}

void inputFirst_Descending_Bubble()
{

    freopen("BubbleSort_Descending.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t3 = clock();
    bubble_sort_Descending(arr,n);
    clock_t t4 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
    double two = (double) (t4-t3) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< two << endl ;
}
void inputTwo_Ascending_Bubble()
{

    freopen("BubbleSort_Ascending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t5 = clock();
    bubble_sort_Ascending(arr,n);
    clock_t t6 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
    double three = (double) (t6-t5) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< three << endl ;


}
void inputTwo_Descending_Bubble()
{

    freopen("BubbleSort_Descending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t7 = clock();
    bubble_sort_Descending(arr,n);
    clock_t t8 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double four = (double) (t8-t7) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< four << endl ;


}

void inputThree_Ascending_Bubble()
{

    freopen("BubbleSort_Ascending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t9 = clock();
    bubble_sort_Ascending(arr,n);
    clock_t t10 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
    double five = (double) (t10-t9) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< five << endl ;

}
void inputThree_Descending_Bubble()
{

    freopen("BubbleSort_Descending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin>>n;
    for(int i =1;i<=n;i++) cin>>arr[i];
    cout<<n<<endl;
    clock_t t11 = clock();
    bubble_sort_Descending(arr,n);
    clock_t t12 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double six = (double) (t12-t11) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< six << endl ;
}

                // **************************************   BUBBLE SORT ***********************************************



                //  **************************************   Merge SORT ***********************************************
inputFirst_Ascending_MergeSort()
{
    freopen("MergeSort_Ascending1.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t13 = clock();
    merge_sort_Ascending(arr,1,n);
    clock_t t14 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double seven = (double) (t14-t13) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< seven << endl;
}
inputFirst_Descending_MergeSort()
{
    freopen("MergeSort_Descending1.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t15 = clock();
    merge_sort_Descending(arr,1,n);
    clock_t t16 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";

    double eight = (double) (t16-t15) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< eight << endl;
}
inputTwo_Ascending_MergeSort()
{
    freopen("MergeSort_Ascending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t17 = clock();
    merge_sort_Ascending(arr,1,n);
    clock_t t18 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double nine = (double) (t18-t17) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< nine << endl;

}
inputTwo_Descending_MergeSort()
{
    freopen("MergeSort_Descending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t19 = clock();
    merge_sort_Descending(arr,1,n);
    clock_t t20 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";

    double ten = (double) (t20-t19) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< ten << endl;
}
inputThree_Ascending_MergeSort()
{
    freopen("MergeSort_Ascending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t21 = clock();
    merge_sort_Ascending(arr,1,n);
    clock_t t22 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double eln = (double) (t22-t21) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< eln << endl;
}
inputThree_Descending_MergeSort()
{
    freopen("MergeSort_Descending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin >> n ;
    for(int i=1;i<=n;i++) cin >> arr[i] ;
    cout<<n<<endl;
    clock_t t23 = clock();
    merge_sort_Descending(arr,1,n);
    clock_t t24 = clock();
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<< "\t";
    double twn = (double) (t24-t23) / CLOCKS_PER_SEC;
    cout<<endl<<"Time = "<< twn << endl;
}
                     //  **************************************   Merge SORT   ***********************************************

                     //****************************************   QUICK SORT    ***********************************************

inputFirst_Ascending_QuickSort()
{
    freopen("QuickSort_Ascending1.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Ascending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}

inputTwo_Ascending_QuickSort()
{
    freopen("QuickSort_Ascending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Ascending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}
inputThree_Ascending_QuickSort()
{
    freopen("QuickSort_Ascending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Ascending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}


inputFirst_Descending_QuickSort()
{
    freopen("QuickSort_Descending1.txt","w",stdout);
    freopen("input1.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Descending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}

inputTwo_Descending_QuickSort()
{
    freopen("QUickSort_Descending2.txt","w",stdout);
    freopen("input2.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Descending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}

inputThree_Descending_QuickSort()
{
    freopen("QUickSort_Descending3.txt","w",stdout);
    freopen("input3.txt","r",stdin);
    cin>>n;

    for(int i =1;i<=n;i++) cin>>arr[i];
    int x = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;

    quickSort_Descending(arr, 0, n - 1);
    for( int i=1 ;i<=n ;i++) cout<< arr[i]<<"\t";
}

            //****************************************   QUICK SORT    ***********************************************




int main()
{


    inputFirst_Ascending_Bubble();
    inputFirst_Descending_Bubble();

    inputTwo_Ascending_Bubble();
    inputTwo_Descending_Bubble();

    inputThree_Ascending_Bubble();
    inputThree_Descending_Bubble();



    inputFirst_Ascending_MergeSort();
    inputFirst_Descending_MergeSort();

    inputTwo_Ascending_MergeSort();
    inputTwo_Descending_MergeSort();

    inputThree_Ascending_MergeSort();
    inputThree_Descending_MergeSort();


    inputFirst_Ascending_QuickSort();
    inputFirst_Descending_QuickSort();

    inputTwo_Ascending_QuickSort();
    inputTwo_Descending_QuickSort();

    inputThree_Ascending_QuickSort();
    inputThree_Descending_QuickSort();




    return 0;
}
