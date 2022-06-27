  int num = 5;
   int a = num;
   cout << "a before " << num << endl;
   a++;
   cout << "a after " << num << endl;


   int *p  = &num;
   cout << "before " << num << endl;
   (*p)++;
   cout << "after " << num << endl;

    //copying a pointer
   int *q = p;
   cout << p <<" - " << q << endl;
   cout << *p <<" - " << *q << endl;
