//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

void sort012(int a[], int n)
    {
        // coode here 
        int c0=0,c1=0,c2=0;
        int i;
        for(i=0;i<n;i++){
            switch (a[i]){
                case 0: c0++;
                break;
                case 1: c1++;
                break;
                case 2: c2++;
                break;
            }
        }
        i=0;
        while(c0>0){
          a[i++]=0;
          c0--;
        }
        while(c1>0){
          a[i++]=1;
          c1--;
        }
        while(c2>0){
          a[i++]=2;
          c2--;
        }
    }
